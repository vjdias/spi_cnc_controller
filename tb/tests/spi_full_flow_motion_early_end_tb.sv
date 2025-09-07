`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_full_flow_motion_early_end_tb;
  // Objetivo: iniciar movimento longo e interromper no meio com MOVE_END,
  // garantindo que os drivers parem e que a resposta seja publicada.

  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_end_request_pkg::*;
  import move_end_response_pkg::*;

  logic clk=0, rst_n=0; always #5 clk=~clk;

  spi_fifo_if rx_fifo();
  logic rd_en; logic [2:0] raddr; spi_service_pkg::byte_t rdata; logic irq;
  logic spi_byte_valid; spi_service_pkg::byte_t spi_byte; logic overflow_error; logic slave_busy;
  logic frame_valid, frame_error; spi_service_pkg::byte_t out_msgType;
  start_move_request_pkg::start_move_req_bytes_t start_move_frame;
  move_queue_add_request_pkg::move_queue_add_req_bytes_t queue_add_frame;
  move_end_request_pkg::move_end_req_bytes_t move_end_frame;

  // Motion
  logic [31:0] enc_pos; logic signed [31:0] enc_vel; logic prox_in, estop_in;
  logic tmc_step_x, tmc_dir_x, tmc_enn_x;
  logic tmc_step_y, tmc_dir_y, tmc_enn_y;
  logic tmc_step_z, tmc_dir_z, tmc_enn_z;

  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy; resp_stream_if motion_stream(); resp_stream_if streams[1]();
  logic wr_en; logic [2:0] waddr; logic [7:0] wdata;

  // DUTs
  spi_rx_slave_service u_rxbridge(
    .clk(clk), .rst_n(rst_n), .rd_en(rd_en), .raddr(raddr), .rdata(rdata), .irq(irq),
    .spi_byte_valid(spi_byte_valid), .spi_byte(spi_byte)
  );
  spi_rx_mosi_service u_cap(
    .clk(clk), .rst_n(rst_n), .spi_byte_valid(spi_byte_valid), .spi_byte(spi_byte),
    .fifo(rx_fifo), .overflow_error(overflow_error), .slave_busy(slave_busy)
  );
  spi_rx_hub_service u_cons(
    .clk(clk), .rst_n(rst_n), .fifo(rx_fifo),
    .frame_valid(frame_valid), .frame_error(frame_error), .out_msgType(out_msgType),
    .move_home_frame(), .start_move_frame(start_move_frame), .move_probe_frame(),
    .queue_add_frame(queue_add_frame), .move_end_frame(move_end_frame), .queue_status_frame(),
    .fpga_status_frame(), .led_ctrl_frame()
  );
  motion_service u_motion(
    .clk(clk), .rst_n(rst_n), .frame_valid(frame_valid), .msgType(out_msgType),
    .start_move_frame(start_move_frame), .queue_add_frame(queue_add_frame),
    .move_end_frame(move_end_frame), .move_home_frame('0), .probe_frame('0), .queue_status_frame('0),
    .enc_pos_x(enc_pos), .enc_pos_y(32'd0), .enc_pos_z(32'd0), .i_idx_pulse_x(1'b0), .i_idx_pulse_y(1'b0), .i_idx_pulse_z(1'b0), .i_prox_in_x(prox_in), .i_prox_in_y(1'b0), .i_prox_in_z(1'b0), .i_estop_in(estop_in),
    .tmc_step_x(tmc_step_x), .tmc_dir_x(tmc_dir_x), .tmc_enn_x(tmc_enn_x),
    .tmc_step_y(tmc_step_y), .tmc_dir_y(tmc_dir_y), .tmc_enn_y(tmc_enn_y),
    .tmc_step_z(tmc_step_z), .tmc_dir_z(tmc_dir_z), .tmc_enn_z(tmc_enn_z),
    .o_moving(),
    .tx_stream(motion_stream)
  );
  assign streams[0].valid = motion_stream.valid;
  assign streams[0].bits  = motion_stream.bits;
  assign streams[0].len   = motion_stream.len;
  assign motion_stream.ready = streams[0].ready;
  spi_tx_hub_service #(.NUM_STREAMS(1)) u_tx(
    .clk(clk), .rst_n(rst_n), .streams(streams), .tx_fifo(tx_fifo), .tx_busy(tx_busy)
  );
  spi_tx_miso_service #(.WAIT_CYCLES(2)) u_miso(
    .clk(clk), .rst_n(rst_n), .tx_fifo(tx_fifo), .wr_en(wr_en), .waddr(waddr), .wdata(wdata)
  );

  // Captura respostas
  spi_service_pkg::byte_t resp_bytes[32]; int unsigned resp_byte_count;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) resp_byte_count <= 0; else if (wr_en) begin
      if (resp_byte_count < 32) resp_bytes[resp_byte_count] <= wdata;
      resp_byte_count <= resp_byte_count + 1;
    end
  end

  // Master wrapper
  spi_service_pkg::byte_t inq[$];
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      irq   <= 1'b0;
      rdata <= '0;
    end else begin
      irq <= (inq.size() != 0);
      if (rd_en && inq.size() != 0)
        rdata <= inq.pop_front();
    end
  end

  // Helpers
  task automatic send_start_move(spi_service_pkg::byte_t frameId);
    start_move_request_pkg::start_move_req_bytes_t req; logic [31:0] raw;
    req = start_move_request_pkg::make_default(); req.frameId = frameId; raw = start_move_request_pkg::encoder(req);
    for (int i=0;i<4;i++) begin do @(posedge clk); while (slave_busy); inq.push_back(raw[31 - i*8 -: 8]); end
  endtask
  task automatic send_move_queue_add_x(spi_service_pkg::byte_t frameId, int sx, spi_service_pkg::byte_t v);
    move_queue_add_request_pkg::move_queue_add_req_bytes_t req; logic [move_queue_add_request_pkg::FRAME_BITS-1:0] raw;
    req = move_queue_add_request_pkg::make_default();
    req.frameId=frameId; req.dirMask=8'b0000_0001; req.sx=sx; req.sy=0; req.sz=0;
    req.vx=v; req.vy=0; req.vz=0; req.kp_x=0; req.ki_x=0; req.kd_x=0; req.kp_y=0; req.ki_y=0; req.kd_y=0; req.kp_z=0; req.ki_z=0; req.kd_z=0;
    req = move_queue_add_request_pkg::set_parity(req); raw = move_queue_add_request_pkg::encoder(req);
    for (int i=0;i<(move_queue_add_request_pkg::FRAME_BITS/8);i++) begin do @(posedge clk); while (slave_busy); inq.push_back(raw[move_queue_add_request_pkg::FRAME_BITS-1 - i*8 -: 8]); end
  endtask
  task automatic send_move_end(spi_service_pkg::byte_t frameId);
    move_end_request_pkg::move_end_req_bytes_t req; logic [31:0] raw;
    req = move_end_request_pkg::make_default(); req.frameId = frameId; raw = move_end_request_pkg::encoder(req);
    for (int i=0;i<4;i++) begin do @(posedge clk); while (slave_busy); inq.push_back(raw[31 - i*8 -: 8]); end
  endtask

  // Contador de passos
  int step_count_x; logic prev_x; int cycles;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin prev_x<=0; step_count_x<=0; end else begin
      prev_x <= tmc_step_x; if (tmc_step_x && !prev_x) step_count_x <= step_count_x + 1; end
  end

  initial begin
    int prev;
    inq={}; enc_pos=0; enc_vel=0; prox_in=1; estop_in=1; cycles=0;
    repeat (4) @(posedge clk); rst_n=1;

    // Start e movimento longo (1000 passos em X @ 1 passo/tick)
    send_start_move(8'h40);
    send_move_queue_add_x(8'h41, 1000, 8'd1);

    // Aguarda alguns passos e interrompe
    while (step_count_x < 100 && cycles < 1_000_000) begin @(posedge clk); cycles++; end
    if (step_count_x < 100) begin
      $display("DBG min_steps: steps=%0d cycles=%0d", step_count_x, cycles);
    end
    `TEST_ASSERT(step_count_x >= 100, "min_steps")
    send_move_end(8'h42);

    // Aguarda o desabilitar do driver (ENN ativo-baixo volta a '1') com timeout
    cycles = 0;
    while (tmc_enn_x == 1'b0 && cycles < 1_000_000) begin @(posedge clk); cycles++; end
    `TEST_ASSERT(tmc_enn_x == 1'b1, "enn_disabled_after_end")

    // Guarda contagem e garante que não cresce mais após o END
    prev = step_count_x;
    repeat (2000) @(posedge clk);
    `TEST_ASSERT(step_count_x == prev, "stopped_after_end")

    $display("Sucesso: spi_full_flow_motion_early_end_tb");
    $finish;
  end
endmodule
