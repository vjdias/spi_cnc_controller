`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_full_flow_motion_home_tb;
  // Objetivo: Exercitar START_MOVE -> MOVE_HOME até sensor de proximidade acionar
  // e verificar geração de passos contínuos e resposta de homing.

  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import start_move_response_pkg::*;
  import move_home_request_pkg::*;
  import move_home_response_pkg::*;
  import home_status_response_pkg::*;

  // Dump de ondas para inspeção (Verilator)
`ifdef VERILATOR
  initial begin
    $dumpfile("tb/tests/temp/spi_full_flow_motion_home_tb.vcd");
    $dumpvars(0, spi_full_flow_motion_home_tb);
  end
`endif

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

  // Router outputs relevantes
  logic                 frame_valid;
  logic                 frame_error;
  spi_service_pkg::byte_t out_msgType;
  start_move_request_pkg::start_move_req_bytes_t      start_move_frame;
  move_home_request_pkg::move_home_req_bytes_t        move_home_frame;

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
    .move_home_frame(move_home_frame),
    .start_move_frame(start_move_frame),
    .move_probe_frame(),
    .queue_add_frame(),
    .move_end_frame(),
    .queue_status_frame(),
    .fpga_status_frame(),
    .led_ctrl_frame()
  );

  motion_service u_motion(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid),
    .msgType(out_msgType),
    .start_move_frame(start_move_frame),
    .queue_add_frame('0),
    .move_end_frame('0),
    .move_home_frame(move_home_frame),
    .probe_frame('0),
    .queue_status_frame('0),
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
  localparam int RESP_CAP_BYTES = 64;
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

  // Buffer de entrada do "master"
  spi_service_pkg::byte_t inq[$];
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

  // Envios ---------------------------------------------------------------
  task automatic send_start_move(spi_service_pkg::byte_t frameId);
    start_move_request_pkg::start_move_req_bytes_t req;
    logic [31:0] raw;
    req = start_move_request_pkg::make_default();
    req.frameId = frameId;
    raw = start_move_request_pkg::encoder(req);
    for (int i = 0; i < 4; i++) begin
      do @(posedge clk); while (slave_busy);
      inq.push_back(raw[31 - i*8 -: 8]);
    end
  endtask

  task automatic send_move_home(spi_service_pkg::byte_t frameId, spi_service_pkg::byte_t axisMask, spi_service_pkg::byte_t dirMask, logic [15:0] vhome);
    move_home_request_pkg::move_home_req_bytes_t req;
    logic [71:0] raw;
    req = move_home_request_pkg::make_default();
    req.frameId  = frameId;
    req.axisMask = axisMask;
    req.dirMask  = dirMask;
    req.vhome    = vhome;
    req          = move_home_request_pkg::set_parity(req);
    raw = move_home_request_pkg::encoder(req);
    for (int i = 0; i < 9; i++) begin
      do @(posedge clk); while (slave_busy);
      inq.push_back(raw[71 - i*8 -: 8]);
    end
  endtask

  // Decodificações --------------------------------------------------------
  task automatic check_start_move_resp_at(input int start_idx, input spi_service_pkg::byte_t frameId);
    logic [31:0] raw;
    start_move_resp_bytes_t dec;
    for (int i = 0; i < 4; i++) raw[31 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = start_move_response_pkg::decoder(raw);
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::START_MOVE_TYPE, "sm_type")
    `TEST_ASSERT(dec.frameIdEcho == frameId, "sm_echo")
  endtask

  task automatic check_move_home_resp_at(input int start_idx, input spi_service_pkg::byte_t frameId, input spi_service_pkg::byte_t axisMask);
    logic [63:0] raw;
    move_home_resp_bytes_t dec;
    for (int i = 0; i < 8; i++) raw[63 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = move_home_response_pkg::decoder(raw);
    `TEST_ASSERT(move_home_response_pkg::check_parity(dec), "mh_parity")
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::MOVE_HOME_TYPE, "mh_type")
    `TEST_ASSERT(dec.frameIdEcho == frameId, "mh_echo")
    `TEST_ASSERT(dec.status == 8'd0, "mh_status_ok")
    `TEST_ASSERT(dec.axisHomeMask[2:0] == axisMask[2:0], "mh_axis_mask")
  endtask

  task automatic check_home_status_resp_at(input int start_idx, input spi_service_pkg::byte_t frameId, input spi_service_pkg::byte_t axisMask);
    logic [home_status_response_pkg::FRAME_BITS-1:0] raw;
    home_status_resp_bytes_t dec;
    for (int i = 0; i < (home_status_response_pkg::FRAME_BITS/8); i++) raw[home_status_response_pkg::FRAME_BITS-1 - i*8 -: 8] = resp_bytes[start_idx + i];
    dec = home_status_response_pkg::decoder(raw);
    `TEST_ASSERT(home_status_response_pkg::check_parity(dec), "hs_parity")
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::HOME_STATUS_TYPE, "hs_type")
    `TEST_ASSERT(dec.frameIdEcho == frameId, "hs_echo")
    `TEST_ASSERT(dec.axisMask[2:0] == axisMask[2:0], "hs_mask")
  endtask

  // Contagem de passos (X)
  int step_count_x;
  logic prev_step_x;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      prev_step_x <= 1'b0;
      step_count_x <= 0;
    end else begin
      prev_step_x <= tmc_step_x;
      if (tmc_step_x && !prev_step_x) step_count_x <= step_count_x + 1;
    end
  end

  // Sequência do teste ---------------------------------------------------
  initial begin
    int cycles;
    int idx;
    int prev_cnt;
    inq = {};
    enc_pos = 32'd0; enc_vel = 32'sd0;
    // Em simulação o driver de proximidade é configurado como PNP/NO (ativo-alto).
    // Portanto, o nível "seguro" (não acionado) é 0, e 1 aciona o sensor.
    prox_in = 1'b0; // PROX seguro (não acionado)
    estop_in = 1'b1; // E-STOP NC seguro
    // Resets performed in always_ff blocks

    repeat (4) @(posedge clk);
    rst_n = 1;

    // START_MOVE
    send_start_move(8'h20);
    // MOVE_HOME em X com vhome=1 e dir=1
    send_move_home(8'h21, 8'b0000_0001, 8'b0000_0001, 16'd1);

    // Aguarda alguns passos contínuos
    cycles = 0;
    while (step_count_x < 5 && cycles < 500000) begin
      @(posedge clk); cycles++;
    end
    if (step_count_x < 5) begin
      $display("DBG timeout_steps_home_start: steps=%0d cycles=%0d", step_count_x, cycles);
    end
    `TEST_ASSERT(step_count_x >= 5, "timeout_steps_home_start")

    // Dispara sensor de proximidade (ativo-alto) -> deve gerar resposta MOVE_HOME
    prox_in = 1'b1;

    // Espera bytes: 4 (start_move) + 8 (move_home resp) + 18 (home_status) = 30
    cycles = 0;
    while (resp_byte_count < 30 && cycles < 2000) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(resp_byte_count >= 30, "timeout_home_resp")

    // Checa respostas
    idx = 0;
    check_start_move_resp_at(idx, 8'h20); idx += 4;
    check_move_home_resp_at(idx, 8'h21, 8'b0000_0001); idx += 8;
    check_home_status_resp_at(idx, 8'h21, 8'b0000_0001); idx += 18;

    // Após homing completo, movimento contínuo deve parar (contadores estabilizam)
    prev_cnt = step_count_x;
    cycles = 0;
    while (cycles < 5000) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(step_count_x == prev_cnt, "home_stopped_steps")

    $display("Sucesso: spi_full_flow_motion_home_tb");
    $finish;
  end
endmodule
