// -----------------------------------------------------------------------------
// axis_home_service.sv
//
// Pequeno serviço de homing por eixo. Implementa uma FSM simples que
// aguarda o acionamento do sensor de proximidade (coarse) e, opcionalmente,
// um pulso de índice do encoder (fine) antes de sinalizar conclusão.
//
// Estados:
//   IDLE   - aguardando start_pulse
//   COARSE - movimentando até o sensor de proximidade
//   FINE   - (opcional) aguardando pulso de índice
//   DONE   - homing concluído
//
// Entradas:
//   start_pulse  - pulso para iniciar o homing
//   prox_active  - nível alto quando o sensor de proximidade está acionado
//   idx_pulse    - pulso de índice do encoder (Z)
//
// Saídas:
//   running      - alto enquanto FSM está em COARSE ou FINE
//   coarse_done  - alto após o sensor de proximidade ser detectado
//   done         - alto quando o homing termina (estado DONE)
// -----------------------------------------------------------------------------
`ifndef AXIS_HOME_SERVICE_SV
`define AXIS_HOME_SERVICE_SV

module axis_home_service #(
    parameter bit USE_INDEX = 1'b0  // 1: aguarda idx_pulse após prox
) (
    input  logic clk,
    input  logic rst_n,
    input  logic start_pulse,
    input  logic prox_active,
    input  logic idx_pulse,
    output logic running,
    output logic coarse_done,
    output logic done
);

  typedef enum logic [1:0] {IDLE=2'd0, COARSE=2'd1, FINE=2'd2, DONE=2'd3} state_t;
  state_t state, next_state;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      state <= IDLE;
    else
      state <= next_state;
  end

  always_comb begin
    next_state = state;
    unique case (state)
      IDLE:   if (start_pulse)           next_state = COARSE;
      COARSE: if (prox_active)           next_state = (USE_INDEX ? FINE : DONE);
      FINE:   if (idx_pulse)             next_state = DONE;
      DONE:   if (start_pulse)           next_state = COARSE;
      default:                           next_state = IDLE;
    endcase
  end

  assign running     = (state == COARSE) || (state == FINE);
  assign coarse_done = (state == FINE) || (state == DONE);
  assign done        = (state == DONE);

endmodule

`endif
