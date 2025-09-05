`timescale 1ns/1ps
`include "lib/test_macros.svh"

module request_router_tb;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import move_end_request_pkg::*;
  import move_home_request_pkg::*;
  import move_probe_level_request_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_queue_status_request_pkg::*;
  import fpga_status_request_pkg::*;
  import led_control_request_pkg::*;
  import request_router_pkg::*;

  initial begin
    router_ctx_t ctx;
    logic frame_valid, frame_error;
    protocol_constants_pkg::byte_t mtype;
    start_move_req_bytes_t    start_move_out;
    move_end_req_bytes_t      move_end_out;
    move_home_req_bytes_t     move_home_out;
    move_probe_level_req_bytes_t probe_out;
    move_queue_add_req_bytes_t   queue_add_out;
    move_queue_status_bytes_t    queue_status_out;
    request_fpga_status_bytes_t  fpga_status_out;
    led_ctrl_req_bytes_t         led_ctrl_out;
    start_move_req_bytes_t       sm_in;
    move_home_req_bytes_t        mh_in;
    move_probe_level_req_bytes_t mp_in;
    move_queue_add_req_bytes_t   qa_in;
    move_end_req_bytes_t         me_in;
    move_queue_status_bytes_t    qs_in;
    request_fpga_status_bytes_t  fs_in;
    led_ctrl_req_bytes_t         lc_in;
    protocol_constants_pkg::byte_t b;
    logic [335:0] raw; // tamanho máximo (queue_add)

    // --- START_MOVE sucesso ---
    ctx = init();
    sm_in = start_move_request_pkg::make_default();
    sm_in.frameId = 8'h11;
    raw = {start_move_request_pkg::encoder(sm_in), 304'd0}; // align to 336 bits
    for (int i = 0; i < 4; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 3) begin
        `TEST_ASSERT(!frame_valid, $sformatf("sm_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("sm_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "sm_valid");
        `TEST_ASSERT(!frame_error, "sm_no_error");
        `TEST_ASSERT(mtype == START_MOVE_TYPE, "sm_type");
        `TEST_ASSERT(start_move_out == sm_in, "sm_payload");
      end
    end

    // --- MOVE_HOME sucesso ---
    ctx = init();
    mh_in = move_home_request_pkg::make_default();
    mh_in.frameId  = 8'h22;
    mh_in.axisMask = 8'h07;
    mh_in.dirMask  = 8'h02;
    mh_in.vhome    = 16'h1234;
    mh_in = move_home_request_pkg::set_parity(mh_in);
    raw = {move_home_request_pkg::encoder(mh_in), 264'd0};
    for (int i = 0; i < 9; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 8) begin
        `TEST_ASSERT(!frame_valid, $sformatf("mh_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("mh_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "mh_valid");
        `TEST_ASSERT(!frame_error, "mh_no_error");
        `TEST_ASSERT(mtype == MOVE_HOME_TYPE, "mh_type");
        `TEST_ASSERT(move_home_out == mh_in, "mh_payload");
      end
    end

    // --- MOVE_PROBE_LEVEL sucesso ---
    ctx = init();
    mp_in = move_probe_level_request_pkg::make_default();
    mp_in.frameId = 8'h33;
    mp_in.axisMask = 8'h01;
    mp_in.vprobe   = 16'h3031;
    mp_in = move_probe_level_request_pkg::set_parity(mp_in);
    raw = {move_probe_level_request_pkg::encoder(mp_in), 272'd0};
    for (int i = 0; i < 8; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 7) begin
        `TEST_ASSERT(!frame_valid, $sformatf("mp_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("mp_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "mp_valid");
        `TEST_ASSERT(!frame_error, "mp_no_error");
        `TEST_ASSERT(mtype == MOVE_PROBE_LEVEL_TYPE, "mp_type");
        `TEST_ASSERT(probe_out == mp_in, "mp_payload");
      end
    end

    // --- MOVE_QUEUE_ADD sucesso ---
    ctx = init();
    qa_in = move_queue_add_request_pkg::make_default();
    qa_in.frameId = 8'h44;
    // preencher alguns campos para cálculo de paridade
    qa_in.vx = 16'h0102;
    qa_in.vy = 16'h0304;
    qa_in = move_queue_add_request_pkg::set_parity(qa_in);
    raw = move_queue_add_request_pkg::encoder(qa_in);
    for (int i = 0; i < 42; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 41) begin
        `TEST_ASSERT(!frame_valid, $sformatf("qa_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("qa_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "qa_valid");
        `TEST_ASSERT(!frame_error, "qa_no_error");
        `TEST_ASSERT(mtype == MOVE_TYPE, "qa_type");
        `TEST_ASSERT(queue_add_out == qa_in, "qa_payload");
      end
    end

    // --- MOVE_END sucesso ---
    ctx = init();
    me_in = move_end_request_pkg::make_default();
    me_in.frameId = 8'h55;
    raw = {move_end_request_pkg::encoder(me_in), 304'd0};
    for (int i = 0; i < 4; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 3) begin
        `TEST_ASSERT(!frame_valid, $sformatf("me_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("me_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "me_valid");
        `TEST_ASSERT(!frame_error, "me_no_error");
        `TEST_ASSERT(mtype == MOVE_END_TYPE, "me_type");
        `TEST_ASSERT(move_end_out == me_in, "me_payload");
      end
    end

    // --- MOVE_QUEUE_STATUS sucesso ---
    ctx = init();
    qs_in = move_queue_status_request_pkg::make_default();
    qs_in.frameId = 8'h66;
    raw = {move_queue_status_request_pkg::encoder(qs_in), 304'd0};
    for (int i = 0; i < 4; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 3) begin
        `TEST_ASSERT(!frame_valid, $sformatf("qs_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("qs_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "qs_valid");
        `TEST_ASSERT(!frame_error, "qs_no_error");
        `TEST_ASSERT(mtype == MOVE_QUEUE_STATUS_TYPE, "qs_type");
        `TEST_ASSERT(queue_status_out == qs_in, "qs_payload");
      end
    end

    // --- FPGA_STATUS sucesso ---
    ctx = init();
    fs_in = fpga_status_request_pkg::make_default();
    fs_in.frameId = 8'h77;
    raw = {fpga_status_request_pkg::encoder(fs_in), 304'd0};
    for (int i = 0; i < 4; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 3) begin
        `TEST_ASSERT(!frame_valid, $sformatf("fs_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("fs_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "fs_valid");
        `TEST_ASSERT(!frame_error, "fs_no_error");
        `TEST_ASSERT(mtype == FPGA_STATUS_TYPE, "fs_type");
        `TEST_ASSERT(fpga_status_out == fs_in, "fs_payload");
      end
    end

    // --- LED_CTRL sucesso ---
    ctx = init();
    lc_in = led_control_request_pkg::make_default();
    lc_in.frameId  = 8'h99;
    lc_in.ledMask  = 8'h3F;
    lc_in.ledValue = 8'h01;
    lc_in = led_control_request_pkg::set_parity(lc_in);
    raw = {led_control_request_pkg::encoder(lc_in), 280'd0};
    for (int i = 0; i < 7; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i < 6) begin
        `TEST_ASSERT(!frame_valid, $sformatf("led_no_valid_%0d", i));
        `TEST_ASSERT(!frame_error, $sformatf("led_no_error_%0d", i));
      end else begin
        `TEST_ASSERT(frame_valid, "led_valid");
        `TEST_ASSERT(!frame_error, "led_no_error");
        `TEST_ASSERT(mtype == LED_CTRL_TYPE, "led_type");
        `TEST_ASSERT(led_ctrl_out == lc_in, "led_payload");
      end
    end

    // --- erro: msgType desconhecido ---
    ctx = init();
    ctx = feed(ctx, REQ_HEADER, frame_valid, frame_error, mtype,
               move_home_out, start_move_out, probe_out,
               queue_add_out, move_end_out, queue_status_out,
               fpga_status_out, led_ctrl_out);
    ctx = feed(ctx, 8'hFF, frame_valid, frame_error, mtype,
               move_home_out, start_move_out, probe_out,
               queue_add_out, move_end_out, queue_status_out,
               fpga_status_out, led_ctrl_out);
    `TEST_ASSERT(frame_error, "unknown_type_error");
    `TEST_ASSERT(!frame_valid, "unknown_type_no_valid");

    // --- erro: paridade incorreta em MOVE_HOME ---
    ctx = init();
    mh_in = move_home_request_pkg::make_default();
    mh_in.frameId  = 8'h88;
    mh_in.axisMask = 8'h01;
    mh_in.dirMask  = 8'h01;
    mh_in.vhome    = 16'h0001;
    mh_in = move_home_request_pkg::set_parity(mh_in);
    mh_in.parity ^= 8'hFF; // corrompe paridade
    raw = {move_home_request_pkg::encoder(mh_in), 264'd0};
    for (int i = 0; i < 9; i++) begin
      b   = raw[335 - i*8 -: 8];
      ctx = feed(ctx, b, frame_valid, frame_error, mtype,
                 move_home_out, start_move_out, probe_out,
                 queue_add_out, move_end_out, queue_status_out,
                 fpga_status_out, led_ctrl_out);
      if (i == 7) begin
        `TEST_ASSERT(frame_error, "parity_error_flag");
        `TEST_ASSERT(!frame_valid, "parity_error_no_valid");
        break;
      end
    end

    $display("Sucesso: request_router_tb");
    $finish;
  end
endmodule
