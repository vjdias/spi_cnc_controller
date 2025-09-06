// axis_controller.sv — Controlador de um eixo (PID + TMC5160 + sensores)
`ifndef AXIS_CONTROLLER_SV
`define AXIS_CONTROLLER_SV
module axis_controller #(
    parameter int POS_WIDTH = 32,
    parameter int PULSE_TICKS_DEFAULT = 4
  )(
    input  logic                   clk,
    input  logic                   rst_n,

    // Comandos de alto nível
    input  logic                   i_enable,
    input  logic                   i_dir,
    input  logic                   i_start,
    input  logic                   i_stop,
    input  logic                   i_continuous,
    input  logic [31:0]            i_steps,
    input  logic                   i_tick,
    input  logic                   i_pid_tick,

    // Setpoints e ganhos
    input  logic [31:0]            i_target,
    input  logic [31:0]            i_ff_rate,
    input  logic [15:0]            i_kp,
    input  logic [15:0]            i_ki,
    input  logic [15:0]            i_kd,

    // Feedback do encoder (pos/vel já calculados externamente)
    input  logic [POS_WIDTH-1:0]   i_enc_pos,
    input  logic signed [POS_WIDTH-1:0] i_enc_vel,

    // Sensor de proximidade bruto do eixo
    input  logic                   i_prox_in,

    // Saídas para o TMC5160 (STEP/DIR/ENN)
    output logic                   o_step,
    output logic                   o_dir,
    output logic                   o_enn,
    output logic                   o_busy,

    // Observabilidade
    output logic [POS_WIDTH-1:0]   o_position,
    output logic                   o_prox_active
  );

  // Proximidade: neste nível, apenas exportamos o nível bruto
  // (debounce e política de segurança ficam no motion_service)
  assign o_prox_active = i_prox_in;

  // PID de eixo (proporcional)
  logic [31:0] rate_inc;
  logic  [7:0] pid_err;
  pid_axis u_pid (
    .clk      (clk),
    .rst_n    (rst_n),
    .enable   (i_enable),
    .pid_tick (i_pid_tick),
    .target   (i_target),
    .ff_rate  (i_ff_rate),
    .kp       (i_kp),
    .ki       (i_ki),
    .kd       (i_kd),
    .enc_pos  (i_enc_pos),
    .rate_out (rate_inc),
    .pid_err  (pid_err)
  );

  // Driver STEP/DIR
  // Converte parâmetro de largura de pulso para 16 bits
  localparam logic [15:0] PULSE_TICKS_PARAM = PULSE_TICKS_DEFAULT[15:0];

  tmc5160_step_dir_driver #(.SYNC_MODE(1)) u_drv (
    .clk           (clk),
    .rst_n         (rst_n),
    .i_enable      (i_enable & ~i_stop),
    .i_dir         (i_dir),
    .i_start       (i_start),
    .i_stop        (i_stop),
    .i_continuous  (i_continuous),
    .i_steps       (i_steps),
    .i_period_cycles(32'd0),
    .i_pulse_cycles (32'd0),
    .i_tick        (i_tick),
    .i_rate_inc    (rate_inc),
    .i_pulse_ticks (PULSE_TICKS_PARAM),
    .o_step        (o_step),
    .o_dir         (o_dir),
    .o_enn         (o_enn),
    .o_busy        (o_busy),
    .o_done_pulse  ()
  );

  // Observabilidade de posição
  assign o_position = i_enc_pos;

  /* verilator lint_off UNUSEDSIGNAL */
  logic _unused;
  assign _unused = pid_err[0] | i_enc_vel[0];
  /* verilator lint_on UNUSEDSIGNAL */
endmodule
`endif
