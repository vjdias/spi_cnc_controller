// axis_home_service.sv — FSM de homing por eixo (coarse e, opcionalmente, fine)
`ifndef AXIS_HOME_SERVICE_SV
`define AXIS_HOME_SERVICE_SV
module axis_home_service #(
  parameter bit USE_INDEX = 1'b0  // 1: faz etapa fine usando pulso de Z
)(
  input  logic clk,
  input  logic rst_n,

  // Comando
  input  logic start_pulse,     // 1 ciclo para iniciar homing

  // Sensores
  input  logic prox_active,     // 1 quando sensor de proximidade acionado
  input  logic idx_pulse,       // pulso de índice Z (se USE_INDEX=1)

  // Estado/saídas
  output logic running,         // homing em progresso
  output logic coarse_done,     // concluiu etapa coarse (PROX)
  output logic done             // homing completo (coarse ou fine)
);

  typedef enum logic [1:0] {H_IDLE, H_COARSE, H_FINE, H_DONE} hstate_t;
  hstate_t state;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state       <= H_IDLE;
      running     <= 1'b0;
      coarse_done <= 1'b0;
      done        <= 1'b0;
    end else begin
      // defaults por ciclo
      coarse_done <= 1'b0;
      done        <= 1'b0;

      case (state)
        H_IDLE: begin
          running <= 1'b0;
          if (start_pulse) begin
            state   <= H_COARSE;
            running <= 1'b1;
          end
        end

        H_COARSE: begin
          running <= 1'b1;
          if (prox_active) begin
            coarse_done <= 1'b1; // marca evento de coarse
            if (USE_INDEX) begin
              state <= H_FINE;   // segue para fine se habilitado
            end else begin
              state <= H_DONE;   // conclui homing
            end
          end
        end

        H_FINE: begin
          running <= 1'b1;
          if (idx_pulse) begin
            state <= H_DONE;     // travou no índice
          end
        end

        H_DONE: begin
          running <= 1'b0;
          done    <= 1'b1;       // 1 ciclo
          state   <= H_IDLE;     // volta ao idle, requer novo start
        end

        default: state <= H_IDLE;
      endcase
    end
  end

endmodule
`endif

