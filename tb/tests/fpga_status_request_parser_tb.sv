`timescale 1ns/1ps
`include "lib/test_macros.svh"

module fpga_status_request_parser_tb;
  import protocol_constants_pkg::*;
  import fpga_status_request_pkg::*;
  import fpga_status_req_parser_pkg::*;

  initial begin
    request_fpga_status_bytes_t in;
    request_fpga_status_bytes_t out;
    parser_ctx_t ctx;
    logic frame_valid;
    logic frame_error;
    logic [31:0] raw;
    protocol_constants_pkg::byte_t b;

    // Frame válido
    in = make_default();
    in.frameId = 8'h44;
    ctx = init();
    raw = encoder(in);
    for (int i = 0; i < 4; i++) begin
      b   = raw[31 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i < 3) begin
        `TEST_ASSERT(!frame_valid, $sformatf("no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "frame_valid");
        `TEST_ASSERT(!frame_error, "no_error_final");
        `TEST_ASSERT(out == in, "frame_match");
      end
    end

    // Header inválido
    ctx = init();
    raw[31:24] = 8'h00;
    b = raw[31:24];
    ctx = feed(ctx, b, frame_valid, frame_error, out);
    `TEST_ASSERT(frame_error, "header_error_flag");
    `TEST_ASSERT(!frame_valid, "header_no_valid");

    // Tail incorreto
    raw = encoder(in);
    raw[7:0] = 8'h00;
    ctx = init();
    for (int i = 0; i < 4; i++) begin
      b   = raw[31 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i == 3) begin
        `TEST_ASSERT(frame_error, "tail_error_flag");
        `TEST_ASSERT(!frame_valid, "tail_no_valid");
      end
    end

    $display("Sucesso: test_fpga_status_request_parser");
    $finish;
  end
endmodule
