// -----------------------------------------------------------------------------
// tick_gen.sv
// Gerador de tick base para sincronismo entre múltiplos tmc5160_step_dir_driver
// e marcação de período de controle (PID) opcional.
//
// - Gera pulso o_tick (1 ciclo) a cada i_tick_div ciclos de clk
// - Gera pulso o_pid_tick (1 ciclo) a cada i_pid_div ticks (baseados em o_tick)
// - Alinha um pulso o_sync_start ao próximo o_tick quando requisitado
//
// Observações
// - Mantido genérico para que o PID e o planejamento de trajetória
//   sejam módulos separados, mas com base de tempo comum (o_tick).
// - Use o o_tick como entrada i_tick dos drivers tmc5160 em SYNC_MODE=1.
// - Use o o_pid_tick como período de amostragem do controlador PID.
// -----------------------------------------------------------------------------
`ifndef TICK_GEN_SV
`define TICK_GEN_SV

module tick_gen #(
  parameter int unsigned DIV_WIDTH = 32
) (
  input  logic                  clk,
  input  logic                  rst_n,

  // Habilitação geral
  input  logic                  i_enable,

  // Divisores
  // - i_tick_div: número de ciclos de clk por tick (0/1 => tick todo ciclo)
  // - i_pid_div: número de ticks por o_pid_tick (0 => desabilita o_pid_tick)
  input  logic [DIV_WIDTH-1:0]  i_tick_div,
  input  logic [DIV_WIDTH-1:0]  i_pid_div,

  // Requisição de início sincronizado: gera o_sync_start alinhado ao próximo o_tick
  input  logic                  i_sync_start_req,

  // Saídas
  output logic                  o_tick,
  output logic                  o_pid_tick,
  output logic                  o_sync_start
);

  // Contador do tick base
  logic [DIV_WIDTH-1:0] tick_cnt_q;
  logic                  tick_pulse_q;

  // Contador do pid_tick baseado em o_tick
  logic [DIV_WIDTH-1:0] pid_cnt_q;
  logic                  pid_pulse_q;

  // Latch de pedido para sincronizar start no próximo tick
  logic sync_req_q;

  // Tick base: 1 pulso quando atinge divisor (ou a cada ciclo se <= 1)
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      tick_cnt_q    <= '0;
      tick_pulse_q  <= 1'b0;
    end else begin
      tick_pulse_q <= 1'b0; // default

      if (!i_enable) begin
        tick_cnt_q   <= '0;
      end else begin
        // Trata divisores 0/1 como "tick a cada ciclo"
        if (i_tick_div <= 1) begin
          tick_pulse_q <= 1'b1;
          tick_cnt_q   <= '0;
        end else begin
          if (tick_cnt_q + 1 >= i_tick_div) begin
            tick_cnt_q   <= '0;
            tick_pulse_q <= 1'b1;
          end else begin
            tick_cnt_q   <= tick_cnt_q + 1'b1;
          end
        end
      end
    end
  end

  // PID tick: conta em unidades de o_tick
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pid_cnt_q   <= '0;
      pid_pulse_q <= 1'b0;
    end else begin
      pid_pulse_q <= 1'b0; // default

      if (!i_enable) begin
        pid_cnt_q <= '0;
      end else if (tick_pulse_q) begin
        if (i_pid_div == '0) begin
          // desabilitado
          pid_cnt_q   <= '0;
          pid_pulse_q <= 1'b0;
        end else if (pid_cnt_q + 1 >= i_pid_div) begin
          pid_cnt_q   <= '0;
          pid_pulse_q <= 1'b1;
        end else begin
          pid_cnt_q   <= pid_cnt_q + 1'b1;
        end
      end
    end
  end

  // Sincronização de start no próximo tick
  // - Latcha o pedido na borda de clk
  // - Emite o_sync_start por 1 ciclo quando ocorrer o próximo o_tick
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      sync_req_q <= 1'b0;
    end else begin
      if (!i_enable) begin
        sync_req_q <= 1'b0;
      end else begin
        // Latch em subida do req (mantém até consumir em um tick)
        if (i_sync_start_req)
          sync_req_q <= 1'b1;
        // Consome no próximo tick
        if (tick_pulse_q && sync_req_q)
          sync_req_q <= 1'b0;
      end
    end
  end

  assign o_tick       = tick_pulse_q;
  assign o_pid_tick   = pid_pulse_q;
  assign o_sync_start = tick_pulse_q & sync_req_q;

endmodule

`endif // TICK_GEN_SV

