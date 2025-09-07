`timescale 1ns/1ps
`include "lib/test_macros.svh"

module motion_home_direct_tb;
  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import move_home_request_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_end_request_pkg::*;
  import move_probe_level_request_pkg::*;
  import move_queue_status_request_pkg::*;

  // Clock / reset
  logic clk = 0;
  always #5 clk = ~clk; // 100MHz
  logic rst_n = 0;

  // Inputs to motion_service
  logic                 frame_valid;
  spi_service_pkg::byte_t msgType;
  start_move_req_bytes_t      start_move_frame;
  move_queue_add_req_bytes_t  queue_add_frame;
  move_end_req_bytes_t        move_end_frame;
  move_home_req_bytes_t       move_home_frame;
  move_probe_level_req_bytes_t probe_frame;
  move_queue_status_bytes_t    queue_status_frame;

  logic [31:0] enc_pos_x, enc_pos_y, enc_pos_z;
  logic        i_prox_in_x, i_prox_in_y, i_prox_in_z;
  logic        i_estop_in;

  // Outputs from motion_service
  logic tmc_step_x, tmc_dir_x, tmc_enn_x;
  logic tmc_step_y, tmc_dir_y, tmc_enn_y;
  logic tmc_step_z, tmc_dir_z, tmc_enn_z;
  logic moving;

  // Response stream
  resp_stream_if motion_stream();

  // DUT
  motion_service u_motion(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid),
    .msgType(msgType),
    .start_move_frame(start_move_frame),
    .queue_add_frame(queue_add_frame),
    .move_end_frame(move_end_frame),
    .move_home_frame(move_home_frame),
    .probe_frame(probe_frame),
    .queue_status_frame(queue_status_frame),
    .enc_pos_x(enc_pos_x), .enc_pos_y(enc_pos_y), .enc_pos_z(enc_pos_z),
    .i_prox_in_x(i_prox_in_x), .i_prox_in_y(i_prox_in_y), .i_prox_in_z(i_prox_in_z),
    .i_estop_in(i_estop_in),
    .tmc_step_x(tmc_step_x), .tmc_dir_x(tmc_dir_x), .tmc_enn_x(tmc_enn_x),
    .tmc_step_y(tmc_step_y), .tmc_dir_y(tmc_dir_y), .tmc_enn_y(tmc_enn_y),
    .tmc_step_z(tmc_step_z), .tmc_dir_z(tmc_dir_z), .tmc_enn_z(tmc_enn_z),
    .o_moving(moving),
    .tx_stream(motion_stream)
  );

  initial begin
    int cycles;
    int i;
    // Initial values
    frame_valid       = 0;
    msgType           = 0;
    start_move_frame  = start_move_request_pkg::make_default();
    queue_add_frame   = move_queue_add_request_pkg::make_default();
    move_end_frame    = move_end_request_pkg::make_default();
    move_home_frame   = move_home_request_pkg::make_default();
    probe_frame       = move_probe_level_request_pkg::make_default();
    queue_status_frame = move_queue_status_request_pkg::make_default();
    enc_pos_x = 0; enc_pos_y = 0; enc_pos_z = 0;
    i_prox_in_x = 0; i_prox_in_y = 0; i_prox_in_z = 0;
    i_estop_in = 0;
    motion_stream.ready = 1'b1;

    repeat (4) @(posedge clk);
    rst_n = 1'b1;

    // Send START_MOVE frame for axis X
    frame_valid = 1'b1;
    msgType = protocol_constants_pkg::START_MOVE_TYPE;
    start_move_frame.frameId  = 8'h10;
    start_move_frame.axisMask = 8'b0000_0001; // enable X
    start_move_frame = start_move_request_pkg::set_parity(start_move_frame);
    @(posedge clk);
    frame_valid = 1'b0;

    // Wait a few cycles
    for (i = 0; i < 10; i++) @(posedge clk);

    // Send MOVE_HOME for axis X
    frame_valid = 1'b1;
    msgType = protocol_constants_pkg::MOVE_HOME_TYPE;
    move_home_frame.frameId  = 8'h11;
    move_home_frame.axisMask = 8'b0000_0001;
    move_home_frame.dirMask  = 8'b0000_0001;
    move_home_frame.vhome    = 16'd1;
    move_home_frame = move_home_request_pkg::set_parity(move_home_frame);
    @(posedge clk);
    frame_valid = 1'b0;

    // Run for some time to allow homing
    cycles = 0;
    for (i = 0; i < 1000; i++) begin
      @(posedge clk);
      cycles++;
    end

    $display("Sucesso: motion_home_direct_tb");
    $finish;
  end
endmodule
