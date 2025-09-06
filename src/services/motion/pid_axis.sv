// pid_axis.sv — PID proporcional (simplificado) para um eixo
`ifndef PID_AXIS_SV
`define PID_AXIS_SV
module pid_axis (
    input  logic        clk,
    input  logic        rst_n,
    input  logic        enable,
    input  logic        pid_tick,     // reservado para I/D futuros
    input  logic [31:0] target,       // posição alvo (passos)
    input  logic [31:0] ff_rate,      // taxa base (feed-forward)
    input  logic [15:0] kp,
    input  logic [15:0] ki,
    input  logic [15:0] kd,
    input  logic [31:0] enc_pos,      // posição atual do encoder
    output logic [31:0] rate_out,     // taxa corrigida
    output logic [7:0]  pid_err       // placeholder de erro (0=OK)
);
  localparam int KP_SHIFT = 8; // fator de escala para Kp

  function automatic logic [31:0] p_control(
      input logic [31:0] target_i,
      input logic [31:0] ff_rate_i,
      input logic [15:0] kp_i,
      input logic [31:0] position_i
    );
    logic signed [32:0] err;
    logic signed [47:0] mult;
    logic signed [31:0] adj;
    logic signed [31:0] sum;
    err  = $signed(target_i) - $signed(position_i);
    mult = $signed({1'b0,kp_i}) * err;
    adj  = mult >>> KP_SHIFT;
    sum  = $signed(ff_rate_i) + adj;
    if (sum < 0)
      return 32'd0;
    else
      return sum[31:0];
  endfunction

  always_comb begin
    if (!enable) begin
      rate_out = 32'd0;
    end else begin
      rate_out = p_control(target, ff_rate, kp, enc_pos);
    end
  end

  assign pid_err = 8'd0;

  /* verilator lint_off UNUSEDSIGNAL */
  logic _unused;
  assign _unused = pid_tick | ki[0] | kd[0];
  /* verilator lint_on UNUSEDSIGNAL */
endmodule
`endif

