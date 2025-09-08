`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_full_flow_motion_basic_tb;
  // Objetivo: Exercitar START_MOVE -> MOVE_QUEUE_ADD -> MOVE_QUEUE_STATUS -> MOVE_END
  // e verificar desde SPI até geração de ticks e pulsos STEP.

  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import start_move_response_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_queue_add_response_pkg::*;
  import move_queue_status_request_pkg::*;
  import move_queue_status_response_pkg::*;
  import home_status_response_pkg::*;
  import move_end_request_pkg::*;
  import move_end_response_pkg::*;

  // Clock/reset
  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk; // 100 MHz

  // RX path
  spi_fifo_if rx_fifo();
  logic                 rd_en;
  logic [2:0]           raddr;
  spi_service_pkg::byte_t rdata;
  logic                 irq;
  logic                 spi_byte_valid;
  spi_service_pkg::byte_t spi_byte;
  logic                 overflow_error;
  logic                 slave_busy;

  // Router outputs relevantes ao motion
  logic                 frame_valid;
  logic                 frame_error;
  spi_service_pkg::byte_t out_msgType;
  start_move_request_pkg::start_move_req_bytes_t      start_move_frame;
  move_queue_add_request_pkg::move_queue_add_req_bytes_t queue_add_frame;
  move_end_request_pkg::move_end_req_bytes_t          move_end_frame;
  move_queue_status_request_pkg::move_queue_status_bytes_t queue_status_frame;

  // Motion service IOs
  logic [31:0] enc_pos;
  logic signed [31:0] enc_vel;
  logic prox_in, estop_in;
  logic tmc_step_x, tmc_dir_x, tmc_enn_x;
  logic tmc_step_y, tmc_dir_y, tmc_enn_y;
  logic tmc_step_z, tmc_dir_z, tmc_enn_z;

  // TX path (stream -> fifo -> bytes)
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy;
  resp_stream_if motion_stream();
  resp_stream_if streams[1]();

  // Saída física de TX (capturada pelo TB)
  logic        wr_en;
  logic [2:0]  waddr;
  logic [7:0]  wdata;

  // DUTs
  spi_rx_slave_service u_rxbridge(
    .clk(clk), .rst_n(rst_n),
    .rd_en(rd_en), .raddr(raddr), .rdata(rdata), .irq(irq),
    .spi_byte_valid(spi_byte_valid), .spi_byte(spi_byte)
  );

  spi_rx_mosi_service u_cap(
    .clk(clk), .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(rx_fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  spi_rx_hub_service u_cons(
    .clk(clk), .rst_n(rst_n),
    .fifo(rx_fifo),
    .frame_valid(frame_valid), .frame_error(frame_error),
    .out_msgType(out_msgType),
    .move_home_frame(),
    .start_move_frame(start_move_frame),
    .move_probe_frame(),
    .queue_add_frame(queue_add_frame),
    .move_end_frame(move_end_frame),
    .queue_status_frame(queue_status_frame),
    .fpga_status_frame(),
    .led_ctrl_frame()
  );

  motion_service u_motion(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid),
    .msgType(out_msgType),
    .start_move_frame(start_move_frame),
    .queue_add_frame(queue_add_frame),
    .move_end_frame(move_end_frame),
    .move_home_frame('0),
    .probe_frame('0),
    .queue_status_frame(queue_status_frame),
    .enc_pos_x(enc_pos), .enc_pos_y(32'd0), .enc_pos_z(32'd0),
    .i_idx_pulse_x(1'b0), .i_idx_pulse_y(1'b0), .i_idx_pulse_z(1'b0),
    .i_prox_in_x(prox_in), .i_prox_in_y(1'b0), .i_prox_in_z(1'b0),
    .i_estop_in(estop_in),
    .tmc_step_x(tmc_step_x), .tmc_dir_x(tmc_dir_x), .tmc_enn_x(tmc_enn_x),
    .tmc_step_y(tmc_step_y), .tmc_dir_y(tmc_dir_y), .tmc_enn_y(tmc_enn_y),
    .tmc_step_z(tmc_step_z), .tmc_dir_z(tmc_dir_z), .tmc_enn_z(tmc_enn_z),
    .o_moving(),
    .tx_stream(motion_stream)
  );

  // Conecta stream no HUB de TX
  assign streams[0].valid = motion_stream.valid;
  assign streams[0].bits  = motion_stream.bits;
  assign streams[0].len   = motion_stream.len;
  assign motion_stream.ready = streams[0].ready;

  spi_tx_hub_service #(.NUM_STREAMS(1)) u_tx(
    .clk(clk), .rst_n(rst_n),
    .streams(streams),
    .tx_fifo(tx_fifo),
    .tx_busy(tx_busy)
  );

  spi_tx_miso_service #(.WAIT_CYCLES(2)) u_miso(
    .clk(clk), .rst_n(rst_n),
    .tx_fifo(tx_fifo),
    .wr_en(wr_en), .waddr(waddr), .wdata(wdata)
  );

  // Captura de bytes de resposta
  // buffer grande o suficiente para incluir HOME_STATUS extras
  localparam int RESP_CAP_BYTES = 96;
  spi_service_pkg::byte_t resp_bytes[RESP_CAP_BYTES];
  int unsigned resp_byte_count;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      resp_byte_count <= 0;
    end else if (wr_en) begin
      if (resp_byte_count < RESP_CAP_BYTES)
        resp_bytes[resp_byte_count] <= wdata;
      resp_byte_count <= resp_byte_count + 1;
    end
  end

  // Buffer de entrada do "master" (modela bytes prontos no wrapper)
  spi_service_pkg::byte_t inq[$];

  // Modela o comportamento do wrapper: enquanto houver bytes pendentes
  // (irq=1), o bridge solicitará leituras (rd_en) e devolvemos o próximo byte.
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      irq     <= 1'b0;
      rdata   <= '0;
    end else begin
      irq     <= (inq.size() != 0);
      if (rd_en && inq.size() != 0)
        rdata <= inq.pop_front();
    end
  end

  // Envio de frames ----------------------------------------------------------
  task automatic send_start_move(spi_service_pkg::byte_t frameId);
    start_move_request_pkg::start_move_req_bytes_t req;
    logic [31:0] raw;
    req = start_move_request_pkg::make_default();
    req.frameId = frameId;
    raw = start_move_request_pkg::encoder(req);
    for (int i = 0; i < 4; i++) begin
      // respeita busy do slave SPI
      do @(posedge clk); while (slave_busy);
      inq.push_back(raw[31 - i*8 -: 8]);
    end
  endtask

  task automatic send_move_queue_add(
      spi_service_pkg::byte_t frameId,
      spi_service_pkg::byte_t dirMask,
      logic [31:0] sx, logic [31:0] sy, logic [31:0] sz,
      spi_service_pkg::byte_t vx, spi_service_pkg::byte_t vy, spi_service_pkg::byte_t vz,
      logic [15:0] kp_x, logic [15:0] kp_y, logic [15:0] kp_z
    );
    move_queue_add_request_pkg::move_queue_add_req_bytes_t req;
    logic [move_queue_add_request_pkg::FRAME_BITS-1:0] raw;
    req = move_queue_add_request_pkg::make_default();
    req.frameId = frameId;
    req.dirMask = dirMask;
    req.sx = sx; req.sy = sy; req.sz = sz;
    req.vx = vx; req.vy = vy; req.vz = vz;
    req.kp_x = kp_x; req.ki_x = 16'd0; req.kd_x = 16'd0;
    req.kp_y = kp_y; req.ki_y = 16'd0; req.kd_y = 16'd0;
    req.kp_z = kp_z; req.ki_z = 16'd0; req.kd_z = 16'd0;
    req = move_queue_add_request_pkg::set_parity(req);
    raw = move_queue_add_request_pkg::encoder(req);
    for (int i = 0; i < (move_queue_add_request_pkg::FRAME_BITS/8); i++) begin
      do @(posedge clk); while (slave_busy);
      inq.push_back(raw[move_queue_add_request_pkg::FRAME_BITS-1 - i*8 -: 8]);
    end
  endtask

  task automatic send_move_queue_status(spi_service_pkg::byte_t frameId);
    move_queue_status_request_pkg::move_queue_status_bytes_t req;
    logic [31:0] raw;
    req = move_queue_status_request_pkg::make_default();
    req.frameId = frameId;
    raw = move_queue_status_request_pkg::encoder(req);
    for (int i = 0; i < 4; i++) begin
      do @(posedge clk); while (slave_busy);
      inq.push_back(raw[31 - i*8 -: 8]);
    end
  endtask

  task automatic send_move_end(spi_service_pkg::byte_t frameId);
    move_end_request_pkg::move_end_req_bytes_t req;
    logic [31:0] raw;
    req = move_end_request_pkg::make_default();
    req.frameId = frameId;
    raw = move_end_request_pkg::encoder(req);
    for (int i = 0; i < 4; i++) begin
      do @(posedge clk); while (slave_busy);
      inq.push_back(raw[31 - i*8 -: 8]);
    end
  endtask

  // Decodificação de respostas ----------------------------------------------
  task automatic check_start_move_resp_at(input int start_idx, input spi_service_pkg::byte_t frameId);
    logic [31:0] raw;
    start_move_resp_bytes_t dec;
    for (int i = 0; i < 4; i++) raw[31 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = start_move_response_pkg::decoder(raw);
    `TEST_ASSERT(dec.header == protocol_constants_pkg::RESP_HEADER, "sm_header")
    `TEST_ASSERT(dec.tail   == protocol_constants_pkg::RESP_TAIL,   "sm_tail")
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::START_MOVE_TYPE, "sm_type")
    `TEST_ASSERT(dec.frameIdEcho == frameId, "sm_frameid_echo")
  endtask

  task automatic check_move_queue_add_resp_at(input int start_idx, input spi_service_pkg::byte_t frameId, input spi_service_pkg::byte_t exp_status);
    logic [47:0] raw;
    move_queue_add_resp_bytes_t dec;
    for (int i = 0; i < 6; i++) raw[47 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = move_queue_add_response_pkg::decoder(raw);
    `TEST_ASSERT(move_queue_add_response_pkg::check_parity(dec), "mq_parity")
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::MOVE_TYPE, "mq_type")
    `TEST_ASSERT(dec.frameIdEcho == frameId, "mq_frameid")
    `TEST_ASSERT(dec.status == exp_status, "mq_status")
  endtask

  task automatic check_move_queue_status_resp_at(input int start_idx, input spi_service_pkg::byte_t exp_status);
    logic [95:0] raw;
    move_queue_status_resp_bytes_t dec;
    for (int i = 0; i < 12; i++) raw[95 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = move_queue_status_response_pkg::decoder(raw);
    `TEST_ASSERT(move_queue_status_response_pkg::check_parity(dec), "mqs_parity")
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::MOVE_QUEUE_STATUS_TYPE, "mqs_type")
    `TEST_ASSERT(dec.status == exp_status, "mqs_status")
  endtask

  task automatic check_home_status_resp_at(input int start_idx, input spi_service_pkg::byte_t exp_axis_mask);
    logic [143:0] raw;
    home_status_resp_bytes_t dec;
    for (int i = 0; i < 18; i++) raw[143 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = home_status_response_pkg::decoder(raw);
    `TEST_ASSERT(home_status_response_pkg::check_parity(dec), "hs_parity")
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::HOME_STATUS_TYPE, "hs_type")
    `TEST_ASSERT(dec.axisMask == {5'b0, exp_axis_mask}, "hs_axis_mask")
  endtask

  task automatic check_move_end_resp_at(input int start_idx, input spi_service_pkg::byte_t frameId);
    logic [31:0] raw;
    move_end_resp_bytes_t dec;
    for (int i = 0; i < 4; i++) raw[31 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = move_end_response_pkg::decoder(raw);
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::MOVE_END_TYPE, "me_type")
    `TEST_ASSERT(dec.frameIdEcho == frameId, "me_frameid")
  endtask

  // Contadores de passos (bordas de subida de STEP)
  int step_count_x, step_count_y, step_count_z;
  logic prev_step_x, prev_step_y, prev_step_z;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      {prev_step_x, prev_step_y, prev_step_z} <= '0;
      {step_count_x, step_count_y, step_count_z} <= '0;
    end else begin
      prev_step_x <= tmc_step_x;
      prev_step_y <= tmc_step_y;
      prev_step_z <= tmc_step_z;
      if (tmc_step_x && !prev_step_x) step_count_x <= step_count_x + 1;
      if (tmc_step_y && !prev_step_y) step_count_y <= step_count_y + 1;
      if (tmc_step_z && !prev_step_z) step_count_z <= step_count_z + 1;
    end
  end

  // Sequência do teste -------------------------------------------------------
  initial begin
    int cycles;
    int idx;
    // Reset e defaults
    inq = {};
    enc_pos = 32'd0; enc_vel = 32'sd0;
    prox_in = 1'b1; // PROX NO seguro
    estop_in = 1'b1; // E-STOP NC seguro
    // Counters reset are handled in their respective always_ff reset blocks

    repeat (4) @(posedge clk);
    rst_n = 1;

    // 1) START_MOVE
    send_start_move(8'h10);

    // 2) MOVE_QUEUE_ADD: mover 10 passos no eixo X, dir=1, vx=1 step/tick
    send_move_queue_add(8'h11, 8'b0000_0001, 32'd10, 32'd0, 32'd0,
                        8'd1, 8'd0, 8'd0,
                        16'd0, 16'd0, 16'd0);

    // 3) MOVE_QUEUE_STATUS (deve indicar Running durante os passos)
    send_move_queue_status(8'h12);

    // 4) Aguarda gerar 10 pulsos STEP_X (timeout razoável)
    cycles = 0;
    while (step_count_x < 10 && cycles < 200000) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(step_count_x >= 10, "timeout_steps_x")

    // 5) MOVE_QUEUE_STATUS (agora deve indicar Idle)
    send_move_queue_status(8'h13);

    // Aguarda envio da resposta e HOME_STATUS antes de encerrar
    cycles = 0;
    while (resp_byte_count < 70 && cycles < 2000) begin
      @(posedge clk); cycles++;
    end

    // 6) MOVE_END encerra sessão (desabilita ENN)
    send_move_end(8'h14);

    // Aguarda bytes chegarem:
    // 4 (START_MOVE) + 6 (MOVE_QUEUE_ADD)
    // + (12+18) para cada MOVE_QUEUE_STATUS seguido de HOME_STATUS
    // + 4 (MOVE_END) = 74 bytes
    cycles = 0;
    while (resp_byte_count < 74 && cycles < 4000) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(resp_byte_count >= 74, "timeout_respostas")

    // Decodifica e checa respostas
    idx = 0;
    check_start_move_resp_at(idx, 8'h10); idx += 4;
    check_move_queue_add_resp_at(idx, 8'h11, 8'h00); idx += 6;
    check_move_queue_status_resp_at(idx, 8'h00); idx += 12; // Running
    check_home_status_resp_at(idx, 8'h00);      idx += 18;
    check_move_queue_status_resp_at(idx, 8'h01); idx += 12; // Idle
    check_home_status_resp_at(idx, 8'h00);      idx += 18;
    check_move_end_resp_at(idx, 8'h14); idx += 4;

    // ENN deve ter sido desativado após MOVE_END (ativo-baixo)
    `TEST_ASSERT(tmc_enn_x == 1'b1, "enn_x_desativado")

    $display("Sucesso: spi_full_flow_motion_basic_tb");
    $finish;
  end
endmodule
