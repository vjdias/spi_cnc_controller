// -----------------------------------------------------------------------------
// quad_encoder_tmcs28_driver.sv
// Driver sintetizável para encoder incremental AB(Z) baseado no TMCS‑28
// - Entradas: A, B e opcional Index (Z) — assíncronas ao clk (sincronizadas aqui)
// - Decodificação em quadratura (X4): conta em todas as transições válidas
// - Filtro digital (debounce) por ciclos de clk para A/B/Z
// - Tratamento de transições ilegais (pulos simultâneos) com sinal de fault
// - Suporte a index (Z): pulso e opção de zerar/ajustar posição
// - Posição com wrap opcional (MODULO) ou saturação
// - Estimativa de velocidade em janela fixa de ciclos
//
// Referência: TMCS‑28 datasheet (Analog Devices / Trinamic)
// Observação: ajuste níveis elétricos conforme sua placa; este RTL assume 0/1 ao pino da FPGA
// -----------------------------------------------------------------------------
`ifndef QUAD_ENCODER_TMCS28_DRIVER_SV
`define QUAD_ENCODER_TMCS28_DRIVER_SV

module quad_encoder_tmcs28_driver #(
    parameter int unsigned POS_WIDTH          = 32,
    // Filtro: nº de ciclos que um novo nível deve permanecer estável para ser aceito
    parameter int unsigned FILTER_CYCLES      = 0,
    // Index: zera/ajusta posição na borda de índice (rising)
    parameter bit          RESET_ON_INDEX     = 1'b1,
    parameter int unsigned INDEX_OFFSET       = 0,
    // Wrap: usa contador modular [0..MODULO-1]; 0 = desabilita (saturação)
    parameter int unsigned MODULO             = 0,
    // Velocidade: janela de medição em ciclos de clk; 0 = desabilita
    parameter int unsigned VEL_WINDOW_CYCLES  = 0,
    // Modo de contagem: 1 (X1: borda de subida de A), 2 (X2: ambas as bordas de A), 4 (X4: todas as transições válidas A/B)
    parameter int unsigned COUNT_MODE         = 4
  )(
    input  logic                     clk,
    input  logic                     rst_n,

    // Entradas do encoder (nível já condicionado para 0/1)
    input  logic                     i_enc_a,
    input  logic                     i_enc_b,
    input  logic                     i_enc_z,   // pode ser amarrado em 0 se não utilizado

    // Saídas
    output logic [POS_WIDTH-1:0]     o_position,       // posição atual (wrap ou saturada)
    output logic                     o_step_pulse,     // 1 ciclo para cada incremento/decremento válido
    output logic                     o_dir,            // 1 = sentido A leads B (CW), 0 = oposto (CCW)
    output logic                     o_index_pulse,    // 1 ciclo na borda do índice
    output logic                     o_illegal_pulse,  // 1 ciclo em transição inválida
    // Velocidade média na janela (contagem líquida de passos por janela)
    output logic signed [31:0]       o_velocity,
    output logic                     o_vel_valid
  );

  // -----------------------------
  // 1) Sincronização de entradas
  // -----------------------------
  logic a_meta, a_sync, b_meta, b_sync, z_meta, z_sync;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      a_meta <= 1'b0; a_sync <= 1'b0;
      b_meta <= 1'b0; b_sync <= 1'b0;
      z_meta <= 1'b0; z_sync <= 1'b0;
    end else begin
      a_meta <= i_enc_a; a_sync <= a_meta;
      b_meta <= i_enc_b; b_sync <= b_meta;
      z_meta <= i_enc_z; z_sync <= z_meta;
    end
  end

  // ----------------------------------
  // 2) Filtro (debounce) opcional A/B/Z
  // ----------------------------------
  task automatic filt_update(
      input  logic         raw,
      input  logic         stable,
      input  int unsigned  cnt,
      input  int unsigned  lim,
      output int unsigned  cnt_next,
      output logic         stable_next
    );
    if (lim == 0) begin
      cnt_next   = 0;
      stable_next= raw;
    end else if (raw == stable) begin
      cnt_next   = 0;
      stable_next= stable;
    end else if (cnt + 1 >= lim) begin
      cnt_next   = 0;
      stable_next= raw;
    end else begin
      cnt_next   = cnt + 1;
      stable_next= stable;
    end
  endtask

  logic a_stb, b_stb, z_stb;
  int unsigned a_cnt, b_cnt, z_cnt;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      a_stb <= 1'b0; a_cnt <= '0;
      b_stb <= 1'b0; b_cnt <= '0;
      z_stb <= 1'b0; z_cnt <= '0;
    end else begin
      automatic int unsigned ncnt; automatic logic nstb;
      filt_update(a_sync, a_stb, a_cnt, FILTER_CYCLES, ncnt, nstb); a_cnt <= ncnt; a_stb <= nstb;
      filt_update(b_sync, b_stb, b_cnt, FILTER_CYCLES, ncnt, nstb); b_cnt <= ncnt; b_stb <= nstb;
      filt_update(z_sync, z_stb, z_cnt, FILTER_CYCLES, ncnt, nstb); z_cnt <= ncnt; z_stb <= nstb;
    end
  end

  // -------------------------
  // 3) Decodificação X4 AB(Z)
  // -------------------------
  logic [1:0] ab_q, ab_d;
  logic       a_q;
  logic       idx_q;
  logic       step_pulse_q, illegal_q, dir_q;
  assign o_step_pulse    = step_pulse_q;
  assign o_illegal_pulse = illegal_q;
  assign o_dir           = dir_q;

  // Detecta borda de índice (rising)
  assign o_index_pulse = ( z_stb & ~idx_q );

  // Intermediários para seleção de modo
  logic x4_step, x4_dir, x4_illegal;
  logic x1_step, x1_dir, x2_step, x2_dir;
  logic a_rise, a_fall;

  always_comb begin
    ab_d = {a_stb, b_stb};

    // X4 (todas transições válidas)
    x4_step    = 1'b0;
    x4_dir     = 1'b0;
    x4_illegal = 1'b0;
    if (ab_d != ab_q) begin
      unique case ({ab_q, ab_d})
        4'b00_01, 4'b01_11, 4'b11_10, 4'b10_00: begin
          x4_step = 1'b1; x4_dir = 1'b1; x4_illegal = 1'b0; // A leads B (CW)
        end
        4'b00_10, 4'b10_11, 4'b11_01, 4'b01_00: begin
          x4_step = 1'b1; x4_dir = 1'b0; x4_illegal = 1'b0; // B leads A (CCW)
        end
        default: begin
          x4_step = 1'b0; x4_illegal = 1'b1; // saltos inválidos
        end
      endcase
    end

    // X1/X2 baseados em bordas de A
    a_rise = (~a_q) & a_stb;
    a_fall =  a_q   & (~a_stb);
    x1_step = a_rise;
    x1_dir  = ~b_stb;            // A rising: B=0 => CW
    x2_step = a_rise | a_fall;
    x2_dir  = (a_rise & ~b_stb) | (a_fall & b_stb);

    // Seleção do modo
    step_pulse_q = 1'b0;
    dir_q        = 1'b0; // 1 = CW
    illegal_q    = x4_illegal; // mantém detecção de ilegais de A/B
    if (COUNT_MODE == 4) begin
      step_pulse_q = x4_step;
      dir_q        = x4_dir;
    end else if (COUNT_MODE == 2) begin
      step_pulse_q = x2_step;
      dir_q        = x2_dir;
    end else begin // COUNT_MODE == 1 (ou outro)
      step_pulse_q = x1_step;
      dir_q        = x1_dir;
    end
  end

  // -------------------------
  // 4) Posição (wrap/saturação)
  // -------------------------
  logic [POS_WIDTH-1:0] pos_q;
  assign o_position = pos_q;

  function automatic logic [POS_WIDTH-1:0] pos_inc(input logic [POS_WIDTH-1:0] p);
    if (MODULO != 0) begin
      if (p == MODULO-1) return '0; else return p + 1'b1;
    end else begin
      if (&p) return p; else return p + 1'b1; // saturação
    end
  endfunction

  function automatic logic [POS_WIDTH-1:0] pos_dec(input logic [POS_WIDTH-1:0] p);
    if (MODULO != 0) begin
      if (p == '0) return MODULO-1; else return p - 1'b1;
    end else begin
      if (p == '0) return '0; else return p - 1'b1; // saturação em zero
    end
  endfunction

  // -------------------------
  // 5) Velocidade por janela
  // -------------------------
  logic signed [31:0] vel_acc_q;
  /* verilator lint_off UNUSEDSIGNAL */
  logic [31:0]        vel_win_cnt_q;
  /* verilator lint_on UNUSEDSIGNAL */
  logic               vel_valid_q;
  assign o_velocity  = vel_acc_q;
  assign o_vel_valid = vel_valid_q;

  // -------------------------
  // 6) Estado sequencial
  // -------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      ab_q         <= 2'b00;
      a_q          <= 1'b0;
      idx_q        <= 1'b0;
      pos_q        <= '0;
    end else begin
      ab_q  <= ab_d;
      a_q   <= a_stb;
      idx_q <= z_stb;

      // Index: reset/ajuste de posição
      if (o_index_pulse && RESET_ON_INDEX) begin
        if (MODULO != 0)
          pos_q <= (INDEX_OFFSET % MODULO);
        else
          pos_q <= INDEX_OFFSET[POS_WIDTH-1:0];
      end else if (step_pulse_q) begin
        pos_q <= dir_q ? pos_inc(pos_q) : pos_dec(pos_q);
      end

      // Velocidade movida para bloco generate dedicado
    end
  end

  // Blocos dedicados para cálculo de velocidade (evita warnings com parâmetro 0)
  generate
    if (VEL_WINDOW_CYCLES == 0) begin : g_no_vel
      always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
          vel_acc_q      <= '0;
          vel_win_cnt_q  <= 32'd0;
          vel_valid_q    <= 1'b0;
        end else begin
          vel_acc_q      <= '0;
          vel_win_cnt_q  <= 32'd0;
          vel_valid_q    <= 1'b0;
        end
      end
    end else begin : g_vel
      always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
          vel_acc_q      <= '0;
          vel_win_cnt_q  <= 32'd0;
          vel_valid_q    <= 1'b0;
        end else begin
          vel_valid_q <= 1'b0;
          // acumula +1/-1 a cada passo
          if (step_pulse_q) begin
            vel_acc_q <= dir_q ? (vel_acc_q + 1) : (vel_acc_q - 1);
          end
          // avança contador de janela
          if (vel_win_cnt_q + 1 >= VEL_WINDOW_CYCLES) begin
            vel_win_cnt_q <= 32'd0;
            vel_valid_q   <= 1'b1; // o_velocity atualizado
            vel_acc_q     <= '0;   // zera para próxima janela
          end else begin
            vel_win_cnt_q <= vel_win_cnt_q + 1'b1;
          end
        end
      end
    end
  endgenerate

endmodule

`endif
