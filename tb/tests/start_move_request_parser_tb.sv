`timescale 1ns/1ps
`include "lib/test_macros.svh"

module start_move_request_parser_tb;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import start_move_req_parser_pkg::*;

  initial begin
    start_move_req_bytes_t in;
    start_move_req_bytes_t out;
    parser_ctx_t ctx;
    logic frame_valid;
    logic frame_error;
    logic [31:0] raw;
    byte_t b;

    // Frame válido
    in = make_default();
    in.frameId = 8'h11;
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
    for (int i = 0; i < 1; i++) begin
      b   = raw[31 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      `TEST_ASSERT(frame_error, "header_error_flag");
      `TEST_ASSERT(!frame_valid, "header_no_valid");
    end

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

    $display("Sucesso: test_start_move_request_parser");
    $finish;
  end
endmodule
