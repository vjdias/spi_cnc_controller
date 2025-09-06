`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_full_flow_motion_10_moves_tb;
  // Exercita START_MOVE -> 10x MOVE_QUEUE_ADD (sequenciais, respeitando execução)
  // Coleta métricas de fluxo (busy, ocupação de FIFOs, latência, throughput)

  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import start_move_response_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_queue_add_response_pkg::*;
  import move_end_request_pkg::*;
  import move_end_response_pkg::*;

  // Parâmetros do TB
  parameter int TB_NUM_MOVES    = 10;
  parameter bit TB_RESPECT_BUSY = 1;  // respeita busy do slave SPI (backpressure)
  parameter int TB_WAIT_CYCLES  = 2;  // espaçamento de TX (param do u_miso)

  // Clock/reset (100 MHz)
  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk;

  // RX path
  spi_fifo_if rx_fifo();
  logic                       rd_en;
  logic [2:0]                 raddr;
  spi_service_pkg::byte_t     rdata;
  logic                       irq;
  logic                       spi_byte_valid;
  spi_service_pkg::byte_t     spi_byte;
  logic                       overflow_error;
  logic                       slave_busy;

  // Router outputs
  logic                       frame_valid;
  logic                       frame_error;
  spi_service_pkg::byte_t     out_msgType;
  start_move_request_pkg::start_move_req_bytes_t        start_move_frame;
  move_queue_add_request_pkg::move_queue_add_req_bytes_t queue_add_frame;
  move_end_request_pkg::move_end_req_bytes_t             move_end_frame;

  // Motion IOs
  logic [31:0]                enc_pos;
  logic signed [31:0]         enc_vel;
  logic                       prox_in, estop_in;
  logic tmc_step_x, tmc_dir_x, tmc_enn_x;
  logic tmc_step_y, tmc_dir_y, tmc_enn_y;
  logic tmc_step_z, tmc_dir_z, tmc_enn_z;

  // TX path (stream -> fifo -> bytes)
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy;
  resp_stream_if motion_stream();
  resp_stream_if streams[1]();

  // Saída física do TX (capturada no TB)
  logic        wr_en;
  logic [2:0]  waddr;
  logic [7:0]  wdata;

  // DUTs ------------------------------------------------------------------
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
    .queue_status_frame(),
    .fpga_status_frame(),
    .led_ctrl_frame()
  );

  motion_service u_motion(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid), .msgType(out_msgType),
    .start_move_frame(start_move_frame),
    .queue_add_frame(queue_add_frame),
    .move_end_frame(move_end_frame),
    .move_home_frame('0), .probe_frame('0), .queue_status_frame('0),
    .enc_pos_x(enc_pos), .enc_pos_y(32'd0), .enc_pos_z(32'd0),
    .i_prox_in_x(prox_in), .i_prox_in_y(1'b0), .i_prox_in_z(1'b0), .i_estop_in(estop_in),
    .tmc_step_x(tmc_step_x), .tmc_dir_x(tmc_dir_x), .tmc_enn_x(tmc_enn_x),
    .tmc_step_y(tmc_step_y), .tmc_dir_y(tmc_dir_y), .tmc_enn_y(tmc_enn_y),
    .tmc_step_z(tmc_step_z), .tmc_dir_z(tmc_dir_z), .tmc_enn_z(tmc_enn_z),
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

  spi_tx_miso_service #(.WAIT_CYCLES(TB_WAIT_CYCLES)) u_miso(
    .clk(clk), .rst_n(rst_n),
    .tx_fifo(tx_fifo),
    .wr_en(wr_en), .waddr(waddr), .wdata(wdata)
  );

  // Captura de respostas físicas ------------------------------------------
  localparam int RESP_BYTES_TOTAL = 4 + TB_NUM_MOVES*6 + 4; // start + 10 ack + end
  spi_service_pkg::byte_t resp_bytes[RESP_BYTES_TOTAL];
  int unsigned resp_byte_count;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      resp_byte_count <= 0;
    end else if (wr_en) begin
      if (resp_byte_count < RESP_BYTES_TOTAL)
        resp_bytes[resp_byte_count] <= wdata;
      resp_byte_count <= resp_byte_count + 1;
    end
  end

  // Métricas de fluxo ------------------------------------------------------
  int cycle_ctr;
  int busy_rise_count;
  int busy_cycle_count;
  int max_rx_occupancy;
  int max_tx_occupancy;
  int tx_pause_cycles;
  int start_cycle;
  int end_cycle;
  bit started;
  int messages_sent;
  logic prev_busy;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      cycle_ctr          <= 0;
      busy_rise_count    <= 0;
      busy_cycle_count   <= 0;
      max_rx_occupancy   <= 0;
      max_tx_occupancy   <= 0;
      tx_pause_cycles    <= 0;
      prev_busy          <= 1'b0;
      messages_sent      <= 0;
    end else begin
      cycle_ctr <= cycle_ctr + 1;
      if (slave_busy) busy_cycle_count <= busy_cycle_count + 1;
      if (slave_busy && !prev_busy) busy_rise_count <= busy_rise_count + 1;
      prev_busy <= slave_busy;
      if (rx_fifo.count > max_rx_occupancy) max_rx_occupancy <= rx_fifo.count;
      if (tx_fifo.count > max_tx_occupancy) max_tx_occupancy <= tx_fifo.count;
      if (tx_busy && tx_fifo.full) tx_pause_cycles <= tx_pause_cycles + 1;
    end
  end

  // Contagem de passos no eixo X ------------------------------------------
  int step_count_x;
  logic prev_step_x;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      prev_step_x  <= 1'b0;
      step_count_x <= 0;
    end else begin
      prev_step_x <= tmc_step_x;
      if (tmc_step_x && !prev_step_x) step_count_x <= step_count_x + 1;
    end
  end

  // Buffer de entrada do "master" (modela bytes prontos no wrapper)
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

  // Envio de frames --------------------------------------------------------
  task automatic send_start_move(spi_service_pkg::byte_t frameId);
    start_move_request_pkg::start_move_req_bytes_t req;
    logic [31:0] raw;
    req = start_move_request_pkg::make_default();
    req.frameId = frameId;
    raw = start_move_request_pkg::encoder(req);
    for (int i = 0; i < 4; i++) begin
      if (TB_RESPECT_BUSY) begin
        do @(posedge clk); while (slave_busy);
      end else begin
        @(posedge clk);
      end
      if (!started) begin
        start_cycle = cycle_ctr; started = 1'b1;
      end
      inq.push_back(raw[31 - i*8 -: 8]);
    end
    messages_sent++;
  endtask

  task automatic send_move_queue_add(
      spi_service_pkg::byte_t frameId,
      spi_service_pkg::byte_t dirMask,
      logic [31:0] sx, logic [31:0] sy, logic [31:0] sz,
      spi_service_pkg::byte_t vx, spi_service_pkg::byte_t vy, spi_service_pkg::byte_t vz
    );
    move_queue_add_request_pkg::move_queue_add_req_bytes_t req;
    logic [move_queue_add_request_pkg::FRAME_BITS-1:0] raw;
    req = move_queue_add_request_pkg::make_default();
    req.frameId = frameId;
    req.dirMask = dirMask;
    req.sx = sx; req.sy = sy; req.sz = sz;
    req.vx = vx; req.vy = vy; req.vz = vz;
    req.kp_x = 16'd0; req.ki_x = 16'd0; req.kd_x = 16'd0;
    req.kp_y = 16'd0; req.ki_y = 16'd0; req.kd_y = 16'd0;
    req.kp_z = 16'd0; req.ki_z = 16'd0; req.kd_z = 16'd0;
    req = move_queue_add_request_pkg::set_parity(req);
    raw = move_queue_add_request_pkg::encoder(req);
    for (int i = 0; i < (move_queue_add_request_pkg::FRAME_BITS/8); i++) begin
      if (TB_RESPECT_BUSY) begin
        do @(posedge clk); while (slave_busy);
      end else begin
        @(posedge clk);
      end
      if (!started) begin
        start_cycle = cycle_ctr; started = 1'b1;
      end
      inq.push_back(raw[move_queue_add_request_pkg::FRAME_BITS-1 - i*8 -: 8]);
    end
    messages_sent++;
  endtask

  task automatic send_move_end(spi_service_pkg::byte_t frameId);
    move_end_request_pkg::move_end_req_bytes_t req;
    logic [31:0] raw;
    req = move_end_request_pkg::make_default();
    req.frameId = frameId;
    raw = move_end_request_pkg::encoder(req);
    for (int i = 0; i < 4; i++) begin
      if (TB_RESPECT_BUSY) begin
        do @(posedge clk); while (slave_busy);
      end else begin
        @(posedge clk);
      end
      inq.push_back(raw[31 - i*8 -: 8]);
    end
    messages_sent++;
  endtask

  // Utilitário: aguarda incremento de passos
  task automatic wait_steps_delta(input int target_delta, input int timeout_cycles);
    int start_steps = step_count_x;
    int cycles = 0;
    while ((step_count_x - start_steps) < target_delta && cycles < timeout_cycles) begin
      @(posedge clk); cycles++;
    end
    if ((step_count_x - start_steps) < target_delta) begin
      $display("DBG timeout_steps_delta: start_steps=%0d curr_steps=%0d delta=%0d target=%0d cycles=%0d tick_div=%0d", 
               start_steps, step_count_x, (step_count_x-start_steps), target_delta, cycles, 1000);
      $display("DBG fifo_rx_count=%0d fifo_tx_count=%0d slave_busy=%0b tx_busy=%0b", rx_fifo.count, tx_fifo.count, slave_busy, tx_busy);
    end
    `TEST_ASSERT((step_count_x - start_steps) >= target_delta, "timeout_steps_delta")
  endtask

  // Execução ---------------------------------------------------------------
  initial begin
    int move_steps [TB_NUM_MOVES];
    spi_service_pkg::byte_t frameIds [TB_NUM_MOVES];
    int total_expected_steps;
    int cycles;

    // Reset e defaults
    inq = {};
    enc_pos = 32'd0; enc_vel = 32'sd0;
    // Sensores seguros (compatíveis com drivers default: PROX NPN/NO, E-STOP NC)
    prox_in = 1'b1; // NO seguro => nível alto
    estop_in = 1'b1; // NC seguro => contato fechado => nível alto
    started = 1'b0;
    total_expected_steps = 0;
    repeat (3) @(posedge clk);
    rst_n = 1;

    // Prepara 10 movimentos em X com passos crescentes
    for (int i = 0; i < TB_NUM_MOVES; i++) begin
      frameIds[i] = spi_service_pkg::byte_t'(8'h20 + i);
      move_steps[i] = 5 + (i*3); // 5,8,11,...
      total_expected_steps += move_steps[i];
    end

    // 1) START_MOVE
    send_start_move(8'h10);

    // 2) Envia 10 MOVE_QUEUE_ADD (e aguarda execução de cada um)
    for (int i = 0; i < TB_NUM_MOVES; i++) begin
      send_move_queue_add(frameIds[i], 8'b0000_0001, move_steps[i], 32'd0, 32'd0,
                          8'd1, 8'd0, 8'd0);
      // Espera cada segmento completar no eixo X
      wait_steps_delta(move_steps[i], 500000);
    end

    // 3) MOVE_END
    send_move_end(8'hF0);

    // Aguarda todas respostas (start + 10 ack + end)
    cycles = 0;
    while (resp_byte_count < RESP_BYTES_TOTAL && cycles < 20000) begin
      @(posedge clk); cycles++;
    end
    if (resp_byte_count < RESP_BYTES_TOTAL) begin
      $display("DBG timeout_respostas: resp_byte_count=%0d expected=%0d cycles=%0d", resp_byte_count, RESP_BYTES_TOTAL, cycles);
    end
    `TEST_ASSERT(resp_byte_count >= RESP_BYTES_TOTAL, "timeout_respostas")

    end_cycle = cycle_ctr;

    // Verificações básicas
    if (step_count_x < total_expected_steps) begin
      $display("DBG total_steps_x: step_count_x=%0d expected=%0d", step_count_x, total_expected_steps);
    end
    `TEST_ASSERT(step_count_x >= total_expected_steps, "total_steps_x")
    `TEST_ASSERT(tmc_enn_x == 1'b1, "enn_x_desativado")

    // Relatório de métricas
    $display("=== Motion 10-Moves Flow Metrics ===");
    $display("busy_rise_count        = %0d", busy_rise_count);
    $display("busy_cycle_count       = %0d", busy_cycle_count);
    $display("max_rx_occupancy       = %0d / RX_DEPTH=%0d", max_rx_occupancy, spi_service_pkg::RX_FIFO_DEPTH);
    $display("max_tx_occupancy       = %0d / TX_DEPTH=%0d", max_tx_occupancy, spi_service_pkg::TX_FIFO_DEPTH);
    $display("tx_pause_cycles        = %0d", tx_pause_cycles);
    $display("latency_cycles         = %0d (from first byte to last resp byte)", (end_cycle - start_cycle));
    $display("bytes_sent_est         = %0d (start+10*6+end=%0d)", messages_sent, RESP_BYTES_TOTAL);
    $display("steps_total_x          = %0d", step_count_x);
    $display("===============================");

    $display("Sucesso: spi_full_flow_motion_10_moves_tb");
    $finish;
  end
endmodule
