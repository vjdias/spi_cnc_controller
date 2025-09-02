// -----------------------------------------------------------------------------
// tmc5160_step_dir_driver.sv
// Driver de STEP/DIR para TMC5160A (sem SPI) — sintetizável
// - Gera pulsos STEP com largura e período configuráveis
// - Saídas: STEP, DIR, ENN (enable ativo em nível baixo no TMC5160)
// - Entradas de controle: start/stop, direção, passos-alvo ou modo contínuo
// - Garante tempo de setup da direção antes do primeiro STEP
//
// Referência: TMC5160A Datasheet (Analog Devices / Trinamic)
// NOTA: Garanta que PERIOD e PULSE atendam aos tempos mínimos (tWH/tWL, setup DIR)
// do datasheet para sua frequência de clk. Ajuste DIR_SETUP_CYCLES conforme necessário.
// -----------------------------------------------------------------------------
`ifndef TMC5160_STEP_DIR_DRIVER_SV
`define TMC5160_STEP_DIR_DRIVER_SV

module tmc5160_step_dir_driver #(
    // Polaridades (ajuste conforme conexão externa)
    parameter bit STEP_ACTIVE_HIGH = 1'b1,    // 1: STEP alto durante o pulso
    parameter bit DIR_ACTIVE_HIGH  = 1'b1,    // 1: DIR=1 => sentido "direita"/frente
    parameter bit ENN_ACTIVE_LOW   = 1'b1,    // 1: ENN sai ativo-baixo (TMC5160 padrão)

    // Tempo mínimo de setup da direção antes do primeiro STEP, em ciclos de clk
    parameter int unsigned DIR_SETUP_CYCLES = 0,

    // Modo de geração de passos
    // 0: modo livre (período/largura em ciclos de clk)
    // 1: modo síncrono (tick global + DDA Q16.16)
    parameter int unsigned SYNC_MODE = 0,
    // Config do DDA (modo síncrono)
    parameter int unsigned DDA_FRACT_BITS = 16,
    parameter int unsigned DIR_SETUP_TICKS = 0
  )(
    input  logic        clk,
    input  logic        rst_n,

    // Comandos de movimento
    input  logic        i_enable,         // 1 = habilita driver (ENN desativado)
    input  logic        i_dir,            // 1 = direita/forward, 0 = esquerda/reverse
    input  logic        i_start,          // pulso de início
    input  logic        i_stop,           // pulso de parada imediata
    input  logic        i_continuous,     // 1 = ignora contagem, roda contínuo até stop
    input  logic [31:0] i_steps,          // número de passos quando i_continuous=0

    // Temporizações dos pulsos (em ciclos de clk)
    input  logic [31:0] i_period_cycles,  // período total entre bordas de subida STEP
    input  logic [31:0] i_pulse_cycles,   // largura do pulso STEP

    // Interface síncrona opcional (modo SYNC_MODE=1)
    input  logic        i_tick,           // tick global (1 pulso/ciclo de clk)
    input  logic [31:0] i_rate_inc,       // Q(DDA_FRACT_BITS) passos por tick (ex.: Q16.16)
    input  logic [15:0] i_pulse_ticks,    // largura do STEP em ticks do i_tick

    // Saídas físicas para o TMC5160
    output logic        o_step,
    output logic        o_dir,
    output logic        o_enn,            // ligar no pino ENN do TMC5160

    // Status
    output logic        o_busy,
    output logic        o_done_pulse      // 1 ciclo ao finalizar (quando não contínuo)
  );

  // Latches de configuração na borda de start
  logic [31:0] period_q, pulse_q;
  logic [31:0] steps_rem_q;
  logic        dir_cmd_q;        // direção solicitada (sem polaridade)
  logic        dir_out_q;        // direção aplicada na saída (já com polaridade)
  logic [31:0] period_cnt_q;
  logic [31:0] pulse_cnt_q;
  logic        step_on_q;
  logic [31:0] dir_setup_cnt_q;

  // Busy/done
  logic busy_q, done_q;

  // Mapeia polaridade de DIR e ENN
  function automatic logic map_dir (input logic d);
    map_dir = DIR_ACTIVE_HIGH ? d : ~d;
  endfunction

  function automatic logic map_enn (input logic en);
    // i_enable=1 => habilitar; ENN ativo baixo => sai ~1=0
    map_enn = ENN_ACTIVE_LOW ? (~en) : en;
  endfunction

  // STEP ativo durante pulso
  function automatic logic map_step (input logic on);
    map_step = STEP_ACTIVE_HIGH ? on : ~on;
  endfunction

  // Saídas default serão conectadas aos sinais do modo ativo
  logic step_on_sel, dir_out_sel, busy_sel, done_sel;

  // -----------------------------
  // Modo 0: livre (período/largura por ciclos de clk)
  // -----------------------------
  generate if (SYNC_MODE == 0) begin : g_free
    // Consome entradas do modo síncrono (não usadas aqui) para silenciar lints
    /* verilator lint_off UNUSEDSIGNAL */
    logic _unused_sync;
    assign _unused_sync = i_tick ^ (^i_rate_inc) ^ (^i_pulse_ticks);
    /* verilator lint_on UNUSEDSIGNAL */
    // Controle principal (modo atual)
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        busy_q          <= 1'b0;
        done_q          <= 1'b0;
        period_q        <= 32'd0;
        pulse_q         <= 32'd0;
        steps_rem_q     <= 32'd0;
        dir_cmd_q       <= 1'b0;
        dir_out_q       <= map_dir(1'b0);
        period_cnt_q    <= 32'd0;
        pulse_cnt_q     <= 32'd0;
        step_on_q       <= 1'b0;
        dir_setup_cnt_q <= 32'd0;
      end else begin
        done_q <= 1'b0; // pulso de 1 ciclo

        // Stop imediato
        if (i_stop) begin
          busy_q       <= 1'b0;
          step_on_q    <= 1'b0;
          period_cnt_q <= 32'd0;
          pulse_cnt_q  <= 32'd0;
        end

        // Start apenas se não estiver ocupado e enable ativo
        if (i_start && !busy_q && i_enable) begin
          busy_q          <= 1'b1;
          period_q        <= (i_period_cycles < 1) ? 32'd1 : i_period_cycles;
          pulse_q         <= (i_pulse_cycles  < 1) ? 32'd1 : i_pulse_cycles;
          steps_rem_q     <= i_steps;
          dir_cmd_q       <= i_dir;
          dir_out_q       <= map_dir(i_dir);
          period_cnt_q    <= 32'd0;
          pulse_cnt_q     <= 32'd0;
          step_on_q       <= 1'b0;
          dir_setup_cnt_q <= DIR_SETUP_CYCLES;
        end

        if (busy_q) begin
          // Atualiza direção durante movimento: aplica setup antes do próximo STEP
          if (i_dir != dir_cmd_q) begin
            dir_cmd_q       <= i_dir;
            dir_out_q       <= map_dir(i_dir);
            dir_setup_cnt_q <= DIR_SETUP_CYCLES;
          end

          // Contagem de setup da direção
          if (dir_setup_cnt_q != 0) begin
            dir_setup_cnt_q <= dir_setup_cnt_q - 1'b1;
          end else begin
            // Geração do STEP: período e pulso
            if (!step_on_q) begin
              // Fase inativa: conta até iniciar o próximo pulso
              if (period_cnt_q + 1 >= period_q) begin
                // Inicia pulso
                period_cnt_q <= 32'd0;
                step_on_q    <= 1'b1;
                pulse_cnt_q  <= 32'd0;
              end else begin
                period_cnt_q <= period_cnt_q + 1'b1;
              end
            end else begin
              // Fase ativa: mantém STEP alto pelo tempo configurado
              if (pulse_cnt_q + 1 >= pulse_q) begin
                step_on_q   <= 1'b0;
                pulse_cnt_q <= 32'd0;

                // Contabiliza um passo quando finaliza o pulso
                if (!i_continuous) begin
                  if (steps_rem_q > 0) begin
                    steps_rem_q <= steps_rem_q - 1'b1;
                    if (steps_rem_q == 32'd1) begin
                      // acabou de emitir o último pulso
                      busy_q <= 1'b0;
                      done_q <= 1'b1;
                    end
                  end else begin
                    // proteção: se zerado, encerra
                    busy_q <= 1'b0;
                    done_q <= 1'b1;
                  end
                end
              end else begin
                pulse_cnt_q <= pulse_cnt_q + 1'b1;
              end
            end
          end
        end

        // Se i_enable for desativado, cessa atividade
        if (!i_enable) begin
          busy_q       <= 1'b0;
          step_on_q    <= 1'b0;
          period_cnt_q <= 32'd0;
          pulse_cnt_q  <= 32'd0;
        end
      end
    end

    // Seleção de sinais do modo livre
    assign step_on_sel = step_on_q;
    assign dir_out_sel = dir_out_q;
    assign busy_sel    = busy_q;
    assign done_sel    = done_q;

  end else begin : g_sync
    // Consome entradas do modo livre (não usadas aqui) para silenciar lints
    /* verilator lint_off UNUSEDSIGNAL */
    logic _unused_free;
    assign _unused_free = (^i_period_cycles) ^ (^i_pulse_cycles);
    /* verilator lint_on UNUSEDSIGNAL */
    // -----------------------------
    // Modo 1: síncrono (tick + DDA)
    // -----------------------------
    localparam int unsigned ONE_Q = (1 << DDA_FRACT_BITS);
    logic [31:0] acc_q;
    logic [31:0] pulse_tick_cnt_q;
    logic        step_on_tk_q;
    logic [31:0] dir_setup_tk_cnt_q;
    logic        busy_s, done_s;
    logic        dir_out_s;
    logic        dir_cmd_s;

    // Controle sequencial
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        busy_s            <= 1'b0;
        done_s            <= 1'b0;
        steps_rem_q       <= 32'd0;
        dir_cmd_s         <= 1'b0;
        dir_out_s         <= map_dir(1'b0);
        acc_q             <= 32'd0;
        pulse_tick_cnt_q  <= 32'd0;
        step_on_tk_q      <= 1'b0;
        dir_setup_tk_cnt_q<= 32'd0;
      end else begin
        done_s <= 1'b0;

        // Stop imediato
        if (i_stop) begin
          busy_s           <= 1'b0;
          step_on_tk_q     <= 1'b0;
          pulse_tick_cnt_q <= 32'd0;
        end

        // Start
        if (i_start && !busy_s && i_enable) begin
          busy_s            <= 1'b1;
          steps_rem_q       <= i_steps;
          dir_cmd_s         <= i_dir;
          dir_out_s         <= map_dir(i_dir);
          acc_q             <= 32'd0;
          pulse_tick_cnt_q  <= 32'd0;
          step_on_tk_q      <= 1'b0;
          dir_setup_tk_cnt_q<= DIR_SETUP_TICKS;
        end

        if (busy_s) begin
          // Atualiza direção
          if (i_dir != dir_cmd_s) begin
            dir_cmd_s         <= i_dir;
            dir_out_s         <= map_dir(i_dir);
            dir_setup_tk_cnt_q<= DIR_SETUP_TICKS;
          end

          // Tick global: avança DDA e gerência de pulso
          if (i_tick) begin
            // Setup de DIR em ticks
            if (dir_setup_tk_cnt_q != 0)
              dir_setup_tk_cnt_q <= dir_setup_tk_cnt_q - 1'b1;

            if (!step_on_tk_q) begin
              // Se não estamos em pulso, verifica evento do DDA
              if (dir_setup_tk_cnt_q == 0) begin
                // Acumulador QN: gera um step se cruzar 1.0
                if ((acc_q + i_rate_inc) >= ONE_Q) begin
                  acc_q            <= (acc_q + i_rate_inc) - ONE_Q;
                  step_on_tk_q     <= 1'b1;
                  pulse_tick_cnt_q <= 32'd0;
                end else begin
                  acc_q <= acc_q + i_rate_inc;
                end
              end
            end else begin
              // Pulso ativo: mantém por i_pulse_ticks
              if (pulse_tick_cnt_q + 1 >= i_pulse_ticks) begin
                step_on_tk_q     <= 1'b0;
                pulse_tick_cnt_q <= 32'd0;

                // Contabiliza passo quando termina o pulso
                if (!i_continuous) begin
                  if (steps_rem_q > 0) begin
                    steps_rem_q <= steps_rem_q - 1'b1;
                    if (steps_rem_q == 32'd1) begin
                      busy_s <= 1'b0;
                      done_s <= 1'b1;
                    end
                  end else begin
                    busy_s <= 1'b0;
                    done_s <= 1'b1;
                  end
                end
              end else begin
                pulse_tick_cnt_q <= pulse_tick_cnt_q + 1'b1;
              end
            end
          end // i_tick
        end // busy_s

        // Disable geral
        if (!i_enable) begin
          busy_s           <= 1'b0;
          step_on_tk_q     <= 1'b0;
          pulse_tick_cnt_q <= 32'd0;
        end
      end
    end

    // Seleção de sinais do modo síncrono
    assign step_on_sel = step_on_tk_q;
    assign dir_out_sel = dir_out_s;
    assign busy_sel    = busy_s;
    assign done_sel    = done_s;

  end endgenerate

  // Saídas físicas (comuns)
  assign o_step = map_step(step_on_sel);
  assign o_dir  = dir_out_sel;
  assign o_enn  = map_enn(i_enable);
  assign o_busy = busy_sel;
  assign o_done_pulse = done_sel;

endmodule

`endif
