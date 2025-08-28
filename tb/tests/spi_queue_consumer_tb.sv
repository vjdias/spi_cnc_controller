`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_queue_consumer_tb;
  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import move_home_request_pkg::*;
  import start_move_request_pkg::*;
  import move_probe_level_request_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_end_request_pkg::*;
  import move_queue_status_request_pkg::*;
  import fpga_status_request_pkg::*;
  import led_control_request_pkg::*;

  spi_fifo_if fifo();

  logic clk = 0;
  logic rst_n = 0;
  logic frame_valid;
  logic frame_error;
  spi_service_pkg::byte_t out_msgType;
  move_home_req_bytes_t        move_home_frame;
  start_move_req_bytes_t       start_move_frame;
  move_probe_level_req_bytes_t move_probe_frame;
  move_queue_add_req_bytes_t   queue_add_frame;
  move_end_req_bytes_t         move_end_frame;
  move_queue_status_bytes_t    queue_status_frame;
  request_fpga_status_bytes_t  fpga_status_frame;
  led_control_request_pkg::led_ctrl_req_bytes_t led_ctrl_frame;

  spi_queue_consumer dut(
    .clk(clk),
    .rst_n(rst_n),
    .fifo(fifo),
    .frame_valid(frame_valid),
    .frame_error(frame_error),
    .out_msgType(out_msgType),
    .move_home_frame(move_home_frame),
    .start_move_frame(start_move_frame),
    .move_probe_frame(move_probe_frame),
    .queue_add_frame(queue_add_frame),
    .move_end_frame(move_end_frame),
    .queue_status_frame(queue_status_frame),
    .fpga_status_frame(fpga_status_frame),
    .led_ctrl_frame(led_ctrl_frame)
  );

  // Geração de clock
  always #5 clk = ~clk;

  initial begin
    move_home_req_bytes_t in;
    spi_service_pkg::byte_t b;
    logic [71:0] raw;
    int cycles;

    // ---- Cenário de sucesso ----
    in = move_home_request_pkg::make_default();
    in.frameId  = 8'h0A;
    in.axisMask = 8'h03;
    in.dirMask  = 8'h01;
    in.vhome    = 16'h0204;
    in = move_home_request_pkg::set_parity(in);

    raw = move_home_request_pkg::encoder(in);

    #12 rst_n = 1; // libera o reset
    for (int i = 0; i < 9; i++) begin
      b = raw[71 - i*8 -: 8];
      fifo.write(b); // enfileira byte
    end

    cycles = 0;
    while (!frame_valid && cycles < 20) begin
      @(posedge clk);
      cycles++;
    end
    `TEST_ASSERT(frame_valid, "frame_valid_sucesso");
    `TEST_ASSERT(out_msgType == MOVE_HOME_TYPE, "msgtype_sucesso");
    `TEST_ASSERT(move_home_frame == in, "frame_match_sucesso");

    // ---- Cenário de erro: paridade inválida ----
    rst_n = 0; @(posedge clk); @(posedge clk); rst_n = 1;
    in = move_home_request_pkg::make_default();
    in.frameId  = 8'h0B;
    in.axisMask = 8'h07;
    in.dirMask  = 8'h02;
    in.vhome    = 16'h1234;
    in = move_home_request_pkg::set_parity(in);
    in.parity ^= 8'hFF; // corrompe paridade
    raw = move_home_request_pkg::encoder(in);
    for (int i = 0; i < 9; i++) begin
      b = raw[71 - i*8 -: 8];
      fifo.write(b);
    end

    cycles = 0;
    while (!frame_error && cycles < 20) begin
      @(posedge clk);
      cycles++;
    end
    `TEST_ASSERT(frame_error, "parity_error");

    $display("Sucesso: spi_queue_consumer_tb");
    $finish;
  end
endmodule
