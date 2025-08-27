`timescale 1ns/1ps
`define TEST_ASSERT(cond, name) if(!(cond)) begin $display("Falha: %s", name); $finish; end

module move_queue_add_request_parser_tb;
  import protocol_constants_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_queue_add_req_parser_pkg::*;

  localparam int B = FRAME_BITS;
  localparam int N = B/8;

  initial begin
    move_queue_add_req_bytes_t in;
    move_queue_add_req_bytes_t out;
    parser_ctx_t ctx;
    logic frame_valid;
    logic frame_error;
    logic [B-1:0] raw;
    byte_t b;

    // Frame válido
    in = make_default();
    in.frameId = 8'h66;
    in.dirMask = 8'h05;
    in.vx = 16'h0010; in.sx = 32'h00000011;
    in = set_parity(in);
    ctx = init();
    raw = encoder(in);
    for (int i = 0; i < N; i++) begin
      b   = raw[B-1 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i < N-1) begin
        `TEST_ASSERT(!frame_valid, $sformatf("no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "frame_valid");
        `TEST_ASSERT(!frame_error, "no_error_final");
        `TEST_ASSERT(out == in, "frame_match");
      end
    end

    // Paridade incorreta
    raw = encoder(in);
    raw[15:8] ^= 8'h01; // altera parityByte em posição 40
    ctx = init();
    for (int i = 0; i < N-1; i++) begin
      b   = raw[B-1 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i == 40) begin
        `TEST_ASSERT(frame_error, "parity_error_flag");
        `TEST_ASSERT(!frame_valid, "parity_no_valid");
      end
    end

    // Tail incorreto
    raw = encoder(in);
    raw[7:0] = 8'h00;
    ctx = init();
    for (int i = 0; i < N; i++) begin
      b   = raw[B-1 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, out);
      if (i == N-1) begin
        `TEST_ASSERT(frame_error, "tail_error_flag");
        `TEST_ASSERT(!frame_valid, "tail_no_valid");
      end
    end

    $display("Sucesso: test_move_queue_add_request_parser");
    $finish;
  end
endmodule
