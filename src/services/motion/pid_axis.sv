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
    // Larguras explícitas para evitar truncamentos implícitos:
    // kp_ext (17), err (33) => mult (50)
    logic signed [32:0] err;
    logic signed [16:0] kp_ext;
    logic signed [49:0] mult_full;
    logic signed [49:0] adj_full;
    logic signed [49:0] sum_full;
    err      = $signed(target_i) - $signed(position_i);
    kp_ext   = $signed({1'b0, kp_i});
    mult_full = kp_ext * err;                  // 17+33=50 bits
    adj_full  = mult_full >>> KP_SHIFT;        // mantém 50 bits
    // Sign-extend ff_rate_i (32 -> 50) antes de somar
    sum_full  = $signed({{18{ff_rate_i[31]}}, ff_rate_i}) + adj_full;
    if (sum_full <= 0)
      return 32'd0;
    else
      return sum_full[31:0];                   // fatia explícita
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
