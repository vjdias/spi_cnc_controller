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
    parameter int unsigned DIR_SETUP_CYCLES = 0
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
  assign o_busy       = busy_q;
  assign o_done_pulse = done_q;

  // Mapeia polaridade de DIR e ENN
  function logic map_dir (input logic d);
    map_dir = DIR_ACTIVE_HIGH ? d : ~d;
  endfunction

  function logic map_enn (input logic en);
    // i_enable=1 => habilitar; ENN ativo baixo => sai ~1=0
    logic enn_n = ~en;           // ativo baixo por padrão
    map_enn = ENN_ACTIVE_LOW ? enn_n : ~enn_n;
  endfunction

  // STEP ativo durante pulso
  function logic map_step (input logic on);
    map_step = STEP_ACTIVE_HIGH ? on : ~on;
  endfunction

  // Saídas default
  assign o_step = map_step(step_on_q);
  assign o_dir  = dir_out_q;
  assign o_enn  = map_enn(i_enable);

  // Controle principal
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

endmodule

`endif

