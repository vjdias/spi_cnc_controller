// -----------------------------------------------------------------------------
// emergency_stop_driver.sv
// Driver sintetizável para botão de Parada de Emergência (E-STOP)
// - Sincroniza e faz debounce do sinal
// - Suporta fiação Normalmente Fechada (NC) ou Normalmente Aberta (NO)
// - O estado de E-STOP pode ficar travado (latch) até um clear explícito
// - Gera pulsos de engate/liberação e saída de inibição para intertravamentos
//
// IMPORTANTE (elétrica):
//   Garanta condicionamento do sinal (nível e proteção) para o domínio da FPGA.
//   E-STOPs reais geralmente são NC (fail-safe): circuito abre quando acionado.
// -----------------------------------------------------------------------------
`ifndef EMERGENCY_STOP_DRIVER_SV
`define EMERGENCY_STOP_DRIVER_SV

module emergency_stop_driver #(
    // 1: fiação NC (ativo quando a linha abre/nível baixo), 0: NO (ativo em nível alto)
    parameter bit IS_NORMALLY_CLOSED   = 1'b1,
    // Debounce em ciclos de clk (0 = sem debounce)
    parameter int unsigned DEBOUNCE_CYCLES     = 0,
    // 1: mantém estado de E-STOP travado até um clear; 0: segue somente o nível do botão
    parameter bit LATCH_UNTIL_CLEAR     = 1'b1,
    // Tempo mínimo em estado seguro antes de aceitar o clear (em ciclos)
    parameter int unsigned CLEAR_HOLDOFF_CYCLES = 0
  )(
    input  logic clk,
    input  logic rst_n,

    // Entrada do botão (nível já compatível com o FPGA)
    input  logic i_estop_in,

    // Comando de limpeza do latch (pulso)
    input  logic i_clear,

    // Saídas
    output logic o_estop_active,        // estado final de E-STOP (nível)
    output logic o_estop_engage_pulse,  // 1 ciclo quando E-STOP passa a ativo
    output logic o_estop_release_pulse, // 1 ciclo quando E-STOP libera
    output logic o_inhibit               // 1 = inibir acionamentos (intertravamento)
);

  // 1) Sincronização da entrada
  logic in_meta, in_sync;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      in_meta <= 1'b0;
      in_sync <= 1'b0;
    end else begin
      in_meta <= i_estop_in;
      in_sync <= in_meta;
    end
  end

  // 2) Interpretação de ativo conforme fiação NC/NO
  //    NC típico: ativo quando a linha indica falha/abertura (geralmente baixo após condicionamento)
  wire raw_active = IS_NORMALLY_CLOSED ? ~in_sync : in_sync;

  // 3) Debounce opcional
  logic debounced_active;
  generate
    if (DEBOUNCE_CYCLES == 0) begin : g_no_debounce
      always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) debounced_active <= 1'b0;
        else        debounced_active <= raw_active;
      end
    end else begin : g_with_debounce
      localparam int unsigned CNTW = (DEBOUNCE_CYCLES <= 1) ? 1 : $clog2(DEBOUNCE_CYCLES);
      logic [CNTW-1:0] cnt;
      logic            stable_state;

      always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
          cnt          <= '0;
          stable_state <= 1'b0;
        end else begin
          if (raw_active == stable_state) begin
            cnt <= '0;
          end else begin
            if (cnt == DEBOUNCE_CYCLES-1) begin
              stable_state <= raw_active;
              cnt          <= '0;
            end else begin
              cnt <= cnt + 1'b1;
            end
          end
        end
      end

      always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) debounced_active <= 1'b0;
        else        debounced_active <= stable_state;
      end
    end
  endgenerate

  // 4) Latch de E-STOP e clear com holdoff
  logic latched_q;
  logic [31:0] clear_cnt_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      latched_q   <= 1'b0;
      clear_cnt_q <= 32'd0;
    end else begin
      // Engata latch ao detectar ativo
      if (LATCH_UNTIL_CLEAR && debounced_active) begin
        latched_q <= 1'b1;
      end

      // Contagem de holdoff para clear — somente quando em estado seguro e clear requisitado
      if (i_clear && !debounced_active && latched_q && (CLEAR_HOLDOFF_CYCLES != 0)) begin
        /* verilator lint_off UNSIGNED */
        if (clear_cnt_q + 1 >= CLEAR_HOLDOFF_CYCLES) begin
          latched_q   <= 1'b0;
          clear_cnt_q <= 32'd0;
        end else begin
          clear_cnt_q <= clear_cnt_q + 1'b1;
        end
        /* verilator lint_on UNSIGNED */
      end else begin
        clear_cnt_q <= 32'd0;
        // Se não há holdoff configurado, limpa imediatamente quando seguro e solicitado
        if (i_clear && !debounced_active && latched_q && (CLEAR_HOLDOFF_CYCLES == 0)) begin
          latched_q <= 1'b0;
        end
      end

      // Se LATCH desabilitado, garante que nunca fica latched
      if (!LATCH_UNTIL_CLEAR) begin
        latched_q <= 1'b0;
      end
    end
  end

  // 5) Estado final de E-STOP e pulsos
  logic estop_q; // estado final registrado para detectar bordas
  wire  estop_final = LATCH_UNTIL_CLEAR ? (debounced_active | latched_q)
                                        :  debounced_active;

  assign o_inhibit       = estop_final;
  assign o_estop_active  = estop_final;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      estop_q <= 1'b0;
    end else begin
      estop_q <= estop_final;
    end
  end

  assign o_estop_engage_pulse  = ( estop_final & ~estop_q);
  assign o_estop_release_pulse = (~estop_final &  estop_q);

endmodule
`endif
