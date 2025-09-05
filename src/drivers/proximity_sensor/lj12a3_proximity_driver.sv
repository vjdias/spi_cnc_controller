// -----------------------------------------------------------------------------
// lj12a3_proximity_driver.sv
// Driver sintetizável para sensor indutivo LJ12A3-4-Z (M12, 5–36V)
// - Suporta variantes NPN e PNP
// - Suporta contato Normalmente Aberto (NO/NA) e Normalmente Fechado (NC/NF)
// - Sincroniza a entrada assíncrona, aplica debounce e gera pulsos de evento
//
// IMPORTANTE (elétrica):
//   ESTE DRIVER ESPERA UM NÍVEL LÓGICO 0/1 JÁ ADEQUADO À TENSÃO DO FPGA.
//   Não conecte diretamente o sensor (5–36V) ao pino da FPGA.
//   Use interface apropriada (optocoupler, transistor + divisores, etc.).
// -----------------------------------------------------------------------------
`ifndef LJ12A3_PROXIMITY_DRIVER_SV
`define LJ12A3_PROXIMITY_DRIVER_SV

module lj12a3_proximity_driver #(
    // 0: NPN, 1: PNP
    parameter bit IS_PNP = 1'b0,
    // 1: Normalmente Aberto (NO/NA), 0: Normalmente Fechado (NC/NF)
    parameter bit IS_NORMALLY_OPEN = 1'b1,
    // Debounce em ciclos de clk. Use 0 para desabilitar debounce.
    parameter int unsigned DEBOUNCE_CYCLES = 0
  )(
    input  logic clk,
    input  logic rst_n,

    // Entrada digital do sensor (nível já adaptado para a tensão do FPGA)
    input  logic i_sensor_in,

    // Saídas
    output logic o_active,            // nível estável (após debounce)
    output logic o_active_pulse,      // pulso 1 ciclo na ativação
    output logic o_inactive_pulse     // pulso 1 ciclo na desativação
);

  // 1) Sincronização da entrada assíncrona
  logic in_meta, in_sync;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      in_meta <= 1'b0;
      in_sync <= 1'b0;
    end else begin
      in_meta <= i_sensor_in;
      in_sync <= in_meta;
    end
  end

  // 2) Mapeia polaridade elétrica conforme NPN/PNP e NO/NC
  //    Tabela (nível lógico observado no pino já convertido):
  //      - NPN NO: ativo quando in_sync == 0
  //      - PNP NO: ativo quando in_sync == 1
  //      - NPN NC: ativo quando in_sync == 1
  //      - PNP NC: ativo quando in_sync == 0
  // Usa a versão sincronizada da entrada para evitar metaestabilidade.
  wire raw_active = IS_NORMALLY_OPEN ? (IS_PNP ? in_sync : ~in_sync)
                                     : (IS_PNP ? ~in_sync : in_sync);

  // 3) Debounce opcional
  logic debounced_active; // estado estável atual (registrado)
  logic debounced_next;   // próximo estado estável (com debounce aplicado)
  generate
    if (DEBOUNCE_CYCLES == 0) begin : g_no_debounce
      // Sem debounce: próximo estado segue o raw_active
      assign debounced_next = raw_active;
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
            cnt <= '0; // continua estável
          end else begin
            // mudou — espera acumular DEBOUNCE_CYCLES para confirmar
            if (cnt == DEBOUNCE_CYCLES-1) begin
              stable_state <= raw_active;
              cnt          <= '0;
            end else begin
              cnt <= cnt + 1'b1;
            end
          end
        end
      end

      // Com debounce: próximo estado vem do estado estável filtrado
      assign debounced_next = stable_state;
    end
  endgenerate

  // 4) Saídas e pulsos de borda (registrados para 1 ciclo)
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      o_active          <= 1'b0;
      o_active_pulse    <= 1'b0;
      o_inactive_pulse  <= 1'b0;
      debounced_active  <= 1'b0;
    end else begin
      // Pulsos calculados a partir do próximo valor estável vs. valor atual
      o_active_pulse    <= ( debounced_next & ~debounced_active);
      o_inactive_pulse  <= (~debounced_next &  debounced_active);
      // Avança estado estável e memória do anterior
      o_active          <= debounced_next;
      debounced_active  <= debounced_next;
    end
  end

endmodule
`endif
