// -----------------------------------------------------------------------------
// axis_home_service.sv
//
// FSM de homing por eixo. Gerencia estágios COARSE (sensor de proximidade)
// e FINE (pulso de índice Z) antes de sinalizar DONE.
// Não gera movimento; apenas monitora sinais físicos.
// -----------------------------------------------------------------------------
`ifndef AXIS_HOME_SERVICE_SV
`define AXIS_HOME_SERVICE_SV
module axis_home_service #(
    parameter bit HOMING_USE_INDEX = 1'b1
  )(
    input  logic clk,
    input  logic rst_n,
    input  logic start,        // pulso para iniciar homing
    input  logic prox_active,  // sensor de proximidade (nível)
    input  logic idx_pulse,    // pulso de índice do encoder
    output logic homing,       // 1 enquanto COARSE/FINE
    output logic done_pulse    // pulso ao concluir
  );

  typedef enum logic [1:0] {IDLE, COARSE, FINE, DONE} state_t;
  state_t state, state_n;

  // detecção de borda de PROX para evitar início imediato
  logic prox_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) prox_q <= 1'b0;
    else prox_q <= prox_active;
  end
  wire prox_rise = prox_active & ~prox_q;

  // Estado
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) state <= IDLE;
    else state <= state_n;
  end

  // saída homing
  assign homing = (state != IDLE);

  // próxima transição
  always_comb begin
    state_n = state;
    done_pulse = 1'b0;
    case (state)
      IDLE: begin
        if (start) state_n = COARSE;
      end
      COARSE: begin
        if (prox_rise || prox_active) begin
          if (HOMING_USE_INDEX) state_n = FINE;
          else                  state_n = DONE;
        end
      end
      FINE: begin
        if (idx_pulse || !HOMING_USE_INDEX) state_n = DONE;
      end
      DONE: begin
        done_pulse = 1'b1;
        state_n = IDLE;
      end
      default: state_n = IDLE;
    endcase
  end
endmodule
`endif
