`timescale 1ns/1ps
`define TEST_ASSERT(cond, name) if(!(cond)) begin $display("Falha: %s", name); $finish; return; end

module framings_tb;
  import bytes_util_pkg::*;

  task automatic test_bytes_util();
    logic [439:0] vec;
    vec = {32'hAABBCCDD, {408{1'b0}}};
    `TEST_ASSERT(get_byte(vec,0) == 8'hAA, "test_bytes_util");
    `TEST_ASSERT(get_byte(vec,1) == 8'hBB, "test_bytes_util");
    `TEST_ASSERT(get_byte(vec,2) == 8'hCC, "test_bytes_util");
    `TEST_ASSERT(get_byte(vec,3) == 8'hDD, "test_bytes_util");
    `TEST_ASSERT(be16(8'h12,8'h34) == 16'h1234, "test_bytes_util");
    `TEST_ASSERT(be32(8'hDE,8'hAD,8'hBE,8'hEF) == 32'hDEADBEEF, "test_bytes_util");
    $display("Sucesso: test_bytes_util");
  endtask

  task automatic test_start_move_request();
    start_move_request_pkg::start_move_req_bytes_t r;
    logic [31:0] raw;
    start_move_request_pkg::start_move_req_bytes_t d;
    r = start_move_request_pkg::make_default();
    r.frameId = 8'h11;
    raw = start_move_request_pkg::encoder(r);
    d = start_move_request_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_start_move_request");
    $display("Sucesso: test_start_move_request");
  endtask

  task automatic test_move_home_request();
    move_home_request_pkg::move_home_req_bytes_t r;
    logic [71:0] raw;
    move_home_request_pkg::move_home_req_bytes_t d;
    r = move_home_request_pkg::make_default();
    r.frameId = 8'h22;
    r.axisMask = 8'h07;
    r.dirMask = 8'h05;
    r.vhome = 16'h1234;
    r = move_home_request_pkg::set_parity(r);
    `TEST_ASSERT(move_home_request_pkg::check_parity(r), "test_move_home_request");
    raw = move_home_request_pkg::encoder(r);
    d = move_home_request_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_home_request");
    $display("Sucesso: test_move_home_request");
  endtask

  task automatic test_move_probe_level_request();
    move_probe_level_request_pkg::move_probe_level_req_bytes_t r;
    logic [63:0] raw;
    move_probe_level_request_pkg::move_probe_level_req_bytes_t d;
    r = move_probe_level_request_pkg::make_default();
    r.frameId = 8'h33;
    r.axisMask = 8'h07;
    r.vprobe = 16'h5678;
    r = move_probe_level_request_pkg::set_parity(r);
    `TEST_ASSERT(move_probe_level_request_pkg::check_parity(r), "test_move_probe_level_request");
    raw = move_probe_level_request_pkg::encoder(r);
    d = move_probe_level_request_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_probe_level_request");
    $display("Sucesso: test_move_probe_level_request");
  endtask

  task automatic test_fpga_status_request();
    fpga_status_request_pkg::request_fpga_status_bytes_t r;
    logic [31:0] raw;
    fpga_status_request_pkg::request_fpga_status_bytes_t d;
    r = fpga_status_request_pkg::make_default();
    r.frameId = 8'h44;
    raw = fpga_status_request_pkg::encoder(r);
    d = fpga_status_request_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_fpga_status_request");
    $display("Sucesso: test_fpga_status_request");
  endtask

  task automatic test_move_queue_status_request();
    move_queue_status_request_pkg::move_queue_status_bytes_t r;
    logic [31:0] raw;
    move_queue_status_request_pkg::move_queue_status_bytes_t d;
    r = move_queue_status_request_pkg::make_default();
    r.frameId = 8'h55;
    raw = move_queue_status_request_pkg::encoder(r);
    d = move_queue_status_request_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_queue_status_request");
    $display("Sucesso: test_move_queue_status_request");
  endtask

  task automatic test_move_end_request();
    move_end_request_pkg::move_end_req_bytes_t r;
    logic [31:0] raw;
    move_end_request_pkg::move_end_req_bytes_t d;
    r = move_end_request_pkg::make_default();
    r.frameId = 8'h66;
    raw = move_end_request_pkg::encoder(r);
    d = move_end_request_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_end_request");
    $display("Sucesso: test_move_end_request");
  endtask

  task automatic test_move_queue_add_request();
    move_queue_add_request_pkg::move_queue_add_req_bytes_t r;
    logic [335:0] raw;
    move_queue_add_request_pkg::move_queue_add_req_bytes_t d;
    r = move_queue_add_request_pkg::make_default();
    r.frameId = 8'h77;
    r.dirMask = 8'h07;
    r.vx = 16'h0102; r.sx = 32'h03040506;
    r.vy = 16'h0708; r.sy = 32'h090A0B0C;
    r.vz = 16'h0D0E; r.sz = 32'h0F101112;
    r.kp_x = 16'h1314; r.ki_x = 16'h1516; r.kd_x = 16'h1718;
    r.kp_y = 16'h191A; r.ki_y = 16'h1B1C; r.kd_y = 16'h1D1E;
    r.kp_z = 16'h1F20; r.ki_z = 16'h2122; r.kd_z = 16'h2324;
    r = move_queue_add_request_pkg::set_parity(r);
    `TEST_ASSERT(move_queue_add_request_pkg::check_parity(r), "test_move_queue_add_request");
    raw = move_queue_add_request_pkg::encoder(r);
    d = move_queue_add_request_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_queue_add_request");
    $display("Sucesso: test_move_queue_add_request");
  endtask

  task automatic test_start_move_response();
    start_move_response_pkg::start_move_resp_bytes_t r;
    logic [31:0] raw;
    start_move_response_pkg::start_move_resp_bytes_t d;
    r = start_move_response_pkg::make_default();
    r.frameIdEcho = 8'h10;
    raw = start_move_response_pkg::encoder(r);
    d = start_move_response_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_start_move_response");
    $display("Sucesso: test_start_move_response");
  endtask

  task automatic test_move_end_response();
    move_end_response_pkg::move_end_resp_bytes_t r;
    logic [31:0] raw;
    move_end_response_pkg::move_end_resp_bytes_t d;
    r = move_end_response_pkg::make_default();
    r.frameIdEcho = 8'h20;
    raw = move_end_response_pkg::encoder(r);
    d = move_end_response_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_end_response");
    $display("Sucesso: test_move_end_response");
  endtask

  task automatic test_move_home_response();
    move_home_response_pkg::move_home_resp_bytes_t r;
    logic [63:0] raw;
    move_home_response_pkg::move_home_resp_bytes_t d;
    r = move_home_response_pkg::make_default();
    r.frameIdEcho = 8'h30;
    r.axisHomeMask = 8'h07;
    r.errorFlags = 8'h01;
    r = move_home_response_pkg::set_parity(r);
    `TEST_ASSERT(move_home_response_pkg::check_parity(r), "test_move_home_response");
    raw = move_home_response_pkg::encoder(r);
    d = move_home_response_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_home_response");
    $display("Sucesso: test_move_home_response");
  endtask

  task automatic test_move_queue_status_response();
    move_queue_status_response_pkg::move_queue_status_resp_bytes_t r;
    logic [95:0] raw;
    move_queue_status_response_pkg::move_queue_status_resp_bytes_t d;
    r = move_queue_status_response_pkg::make_default();
    r.frameIdEcho = 8'h40;
    r.status = 8'd2;
    r.pctX = 8'd10; r.pctY = 8'd20; r.pctZ = 8'd30;
    r = move_queue_status_response_pkg::set_parity(r);
    `TEST_ASSERT(move_queue_status_response_pkg::check_parity(r), "test_move_queue_status_response");
    raw = move_queue_status_response_pkg::encoder(r);
    d = move_queue_status_response_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_queue_status_response");
    $display("Sucesso: test_move_queue_status_response");
  endtask

  task automatic test_fpga_status_response();
    fpga_status_response_pkg::response_fpga_status_bytes_t r;
    logic [95:0] raw;
    fpga_status_response_pkg::response_fpga_status_bytes_t d;
    r = fpga_status_response_pkg::make_default();
    r.frameIdEcho = 8'h50;
    r.status = 8'd1;
    r.mode = 8'd2;
    r = fpga_status_response_pkg::set_parity(r);
    `TEST_ASSERT(fpga_status_response_pkg::check_parity(r), "test_fpga_status_response");
    raw = fpga_status_response_pkg::encoder(r);
    d = fpga_status_response_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_fpga_status_response");
    $display("Sucesso: test_fpga_status_response");
  endtask

  task automatic test_move_queue_add_response();
    move_queue_add_response_pkg::move_queue_add_resp_bytes_t r;
    logic [47:0] raw;
    move_queue_add_response_pkg::move_queue_add_resp_bytes_t d;
    move_queue_add_response_pkg::move_queue_add_resp_bytes_t e;
    logic [47:0] raw_e;
    move_queue_add_response_pkg::move_queue_add_resp_bytes_t d_e;
    r = move_queue_add_response_pkg::make_default_ok(8'h60);
    r = move_queue_add_response_pkg::set_parity(r);
    `TEST_ASSERT(move_queue_add_response_pkg::check_parity(r), "test_move_queue_add_response");
    raw = move_queue_add_response_pkg::encoder(r);
    d = move_queue_add_response_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_queue_add_response");
    e = move_queue_add_response_pkg::make_default_err(8'h61);
    e = move_queue_add_response_pkg::set_parity(e);
    `TEST_ASSERT(move_queue_add_response_pkg::check_parity(e), "test_move_queue_add_response");
    raw_e = move_queue_add_response_pkg::encoder(e);
    d_e = move_queue_add_response_pkg::decoder(raw_e);
    `TEST_ASSERT(d_e == e, "test_move_queue_add_response");
    $display("Sucesso: test_move_queue_add_response");
  endtask

  task automatic test_move_probe_level_response();
    move_probe_level_response_pkg::move_probe_level_resp_bytes_t r;
    logic [159:0] raw;
    move_probe_level_response_pkg::move_probe_level_resp_bytes_t d;
    r = move_probe_level_response_pkg::make_default();
    r.frameIdEcho = 8'h70;
    r.axisDoneMask = 8'h07;
    r.latchedPosX = 32'h01020304;
    r.latchedPosY = 32'h05060708;
    r.latchedPosZ = 32'h090A0B0C;
    r = move_probe_level_response_pkg::set_parity(r);
    `TEST_ASSERT(move_probe_level_response_pkg::check_parity(r), "test_move_probe_level_response");
    raw = move_probe_level_response_pkg::encoder(r);
    d = move_probe_level_response_pkg::decoder(raw);
    `TEST_ASSERT(d == r, "test_move_probe_level_response");
    $display("Sucesso: test_move_probe_level_response");
  endtask

  initial begin
    test_bytes_util();
    test_start_move_request();
    test_move_home_request();
    test_move_probe_level_request();
    test_fpga_status_request();
    test_move_queue_status_request();
    test_move_end_request();
    test_move_queue_add_request();
    test_start_move_response();
    test_move_end_response();
    test_move_home_response();
    test_move_queue_status_response();
    test_fpga_status_response();
    test_move_queue_add_response();
    test_move_probe_level_response();
    $display("All framing tests passed");
    $finish;
  end
endmodule
