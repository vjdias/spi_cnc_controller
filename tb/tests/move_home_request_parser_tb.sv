`timescale 1ns/1ps
`include "lib/test_macros.svh"

module move_home_request_parser_tb;
  import protocol_constants_pkg::*;
  import move_home_request_pkg::*;
  import move_home_req_parser_pkg::*;

  initial begin
    move_home_req_bytes_t in;
    move_home_req_bytes_t out;
    parser_ctx_t ctx;
    logic frame_valid;
    logic frame_error;
    logic [71:0] raw;
    protocol_constants_pkg::byte_t b;

    // Constrói frame válido
    in = make_default();
    in.frameId  = 8'h0A;
    in.axisMask = 8'h07;
    in.dirMask  = 8'h05;
    in.vhome    = 16'h1234;
    in = set_parity(in);

    ctx = init();
    raw = encoder(in);
    for (int i = 0; i < 9; i++) begin
      b   = raw[71 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i < 8) begin
        `TEST_ASSERT(!frame_valid, $sformatf("no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "frame_valid");
        `TEST_ASSERT(!frame_error, "no_error_final");
        `TEST_ASSERT(out == in, "frame_match");
      end
    end

    // Corrompe a paridade e processa novamente
    in.parity ^= 8'hFF;
    raw = encoder(in);
    ctx = init();
    for (int i = 0; i < 8; i++) begin
      b   = raw[71 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i == 7) begin
        `TEST_ASSERT(frame_error, "parity_error_flag");
        `TEST_ASSERT(!frame_valid, "parity_no_valid");
      end
    end

    // Corrompe o tail e processa novamente
    in = make_default();
    in.frameId  = 8'h0A;
    in.axisMask = 8'h07;
    in.dirMask  = 8'h05;
    in.vhome    = 16'h1234;
    in = set_parity(in);
    raw = encoder(in);
    raw[7:0] = 8'h00; // tail incorreto
    ctx = init();
    for (int i = 0; i < 9; i++) begin
      b   = raw[71 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i == 8) begin
        `TEST_ASSERT(frame_error, "tail_error_flag");
        `TEST_ASSERT(!frame_valid, "tail_no_valid");
      end
    end

    $display("Sucesso: test_move_home_request_parser");
    $finish;
  end
endmodule
