// -----------------------------------------------------------------------------
// pid_service.sv
//
// Serviço de controle PID simplificado para três eixos. Recebe setpoints,
// ganhos e posição atual de encoder e produz ajustes de taxa para os drivers
// TMC5160. Implementa apenas termo proporcional como ponto de partida; termos
// integral e derivativo podem ser adicionados futuramente. Quando os ganhos são
// zerados, as taxas de saída refletem apenas os valores de feed-forward.
// -----------------------------------------------------------------------------
`ifndef PID_SERVICE_SV
`define PID_SERVICE_SV
module pid_service (
    input  logic        clk,
    input  logic        rst_n,
    input  logic        enable,
    input  logic        pid_tick,
    // Setpoints absolutos por eixo (em passos)
    input  logic [31:0] target_x,
    input  logic [31:0] target_y,
    input  logic [31:0] target_z,
    // Taxa base (feed-forward) calculada pelo host
    input  logic [31:0] ff_rate_x,
    input  logic [31:0] ff_rate_y,
    input  logic [31:0] ff_rate_z,
    // Ganhos PID (somente Kp utilizado atualmente)
    input  logic [15:0] kp_x, ki_x, kd_x,
    input  logic [15:0] kp_y, ki_y, kd_y,
    input  logic [15:0] kp_z, ki_z, kd_z,
    // Feedback dos encoders
    input  logic [31:0] enc_pos_x,
    input  logic [31:0] enc_pos_y,
    input  logic [31:0] enc_pos_z,
    // Saídas corrigidas de taxa e códigos de erro
    output logic [31:0] rate_x,
    output logic [31:0] rate_y,
    output logic [31:0] rate_z,
    output logic [7:0]  pid_err_x,
    output logic [7:0]  pid_err_y,
    output logic [7:0]  pid_err_z
  );
  localparam int KP_SHIFT = 8; // fator de escala para Kp

  // Função auxiliar para cálculo proporcional
  function automatic logic [31:0] p_control(
      input logic [31:0] target,
      input logic [31:0] ff_rate,
      input logic [15:0] kp,
      input logic [31:0] position
    );
    logic signed [32:0] err;
    logic signed [47:0] mult;
    logic signed [31:0] adj;
    logic signed [31:0] sum;
    err  = $signed(target) - $signed(position);
    mult = $signed({1'b0,kp}) * err;
    adj  = mult >>> KP_SHIFT;
    sum  = $signed(ff_rate) + adj;
    if (sum < 0)
      return 32'd0;
    else
      return sum[31:0];
  endfunction

  always_comb begin
    if (!enable) begin
      rate_x = 32'd0;
      rate_y = 32'd0;
      rate_z = 32'd0;
    end else begin
      rate_x = p_control(target_x, ff_rate_x, kp_x, enc_pos_x);
      rate_y = p_control(target_y, ff_rate_y, kp_y, enc_pos_y);
      rate_z = p_control(target_z, ff_rate_z, kp_z, enc_pos_z);
    end
  end

  // Códigos de erro ainda não implementados (0 = OK)
  assign pid_err_x = 8'd0;
  assign pid_err_y = 8'd0;
  assign pid_err_z = 8'd0;

  // Suprime avisos de sinais não utilizados
  /* verilator lint_off UNUSEDSIGNAL */
  logic _unused;
  assign _unused = pid_tick | ki_x[0] | kd_x[0] | ki_y[0] | kd_y[0] | ki_z[0] | kd_z[0];
  /* verilator lint_on UNUSEDSIGNAL */
endmodule
`endif
