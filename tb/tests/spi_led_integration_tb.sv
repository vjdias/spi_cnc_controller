`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_led_integration_tb;
  import spi_service_pkg::*;
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;

  // FIFO compartilhada entre captura e consumidor
  spi_fifo_if fifo();

  // Clock e reset
  logic clk = 0;
  logic rst_n = 0;

  // SPI capture inputs
  logic                 spi_byte_valid;
  byte_t                spi_byte;
  logic                 overflow_error;
  logic                 slave_busy;

  // Queue consumer -> router outputs
  logic                 frame_valid;
  logic                 frame_error;
  byte_t                out_msgType;
  led_ctrl_req_bytes_t  led_ctrl_frame;

  // LED service outputs
  logic [5:0]                         leds;
  logic                               resp_valid;
  led_ctrl_resp_bytes_t               resp_frame;

  // FIFO de transmissão e TX buffer
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy;
  // Stream genérico de respostas do LED
  resp_stream_if led_stream();
  // Array de streams para o HUB genérico (1 fonte)
  resp_stream_if streams[1]();

  // DUTs
  spi_rx_mosi_service u_cap(
    .clk(clk), .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  spi_rx_hub_service u_cons(
    .clk(clk), .rst_n(rst_n),
    .fifo(fifo),
    .frame_valid(frame_valid), .frame_error(frame_error),
    .out_msgType(out_msgType),
    // somente o frame de LED é usado neste teste (demais desconectados)
    .move_home_frame(),
    .start_move_frame(),
    .move_probe_frame(),
    .queue_add_frame(),
    .move_end_frame(),
    .queue_status_frame(),
    .fpga_status_frame(),
    .led_ctrl_frame(led_ctrl_frame)
  );

  localparam bit ACTIVE_LOW = 1;

  led_service #(.ACTIVE_LOW(ACTIVE_LOW)) u_led(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid), .msgType(out_msgType),
    .led_req(led_ctrl_frame),
    .leds(leds), .resp_valid(resp_valid), .resp_frame(resp_frame),
    .tx_stream(led_stream)
  );

  // Conecta LED stream no array de streams[0]
  assign streams[0].valid = led_stream.valid;
  assign streams[0].bits  = led_stream.bits;
  assign streams[0].len   = led_stream.len;
  assign led_stream.ready = streams[0].ready;

  // HUB genérico (1 fonte)
  spi_tx_hub_service #(.NUM_STREAMS(1)) u_tx(
    .clk(clk), .rst_n(rst_n),
    .streams(streams),
    .tx_fifo(tx_fifo),
    .tx_busy(tx_busy)
  );

  // clock
  always #5 clk = ~clk;

  // tarefas auxiliares
  task automatic send_byte(byte_t b);
    spi_byte       = b;
    spi_byte_valid = 1'b1;
    @(posedge clk);
    spi_byte_valid = 1'b0;
    @(posedge clk);
  endtask

  // envia um frame LED_CTRL via SPI (captura -> fifo -> consumer -> service)
  task automatic send_led_ctrl_frame(byte_t frameId, byte_t mask, byte_t value);
    led_ctrl_req_bytes_t req;
    logic [55:0] raw;
    req            = led_control_request_pkg::make_default();
    req.frameId    = frameId;
    req.ledMask    = mask;
    req.ledValue   = value;
    req            = led_control_request_pkg::set_parity(req);
    raw            = led_control_request_pkg::encoder(req);
    for (int i = 0; i < 7; i++) begin
      send_byte(raw[55 - i*8 -: 8]);
    end
  endtask

  initial begin
    int cycles;
    int i;
    logic [55:0] raw_resp;
    spi_service_pkg::byte_t rb;
    led_ctrl_resp_bytes_t dec;
    spi_byte_valid = 0;
    spi_byte       = 0;

    // Libera reset
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Acende 3 LEDs (bits 0..2)
    send_led_ctrl_frame(8'hA1, 8'h07, 8'h01);

    // Aguarda resposta do serviço
    cycles = 0;
    while (!resp_valid && cycles < 50) begin
      @(posedge clk);
      cycles++;
    end
    `TEST_ASSERT(resp_valid, "resp_valid_timeout")
    `TEST_ASSERT(leds == (ACTIVE_LOW ? 6'b111000 : 6'b000111), "leds_three_on")
    `TEST_ASSERT(resp_frame.frameIdEcho == 8'hA1, "resp_frameid_echo")
    `TEST_ASSERT(resp_frame.ledMask == 8'h07, "resp_ledmask_echo")
    `TEST_ASSERT(resp_frame.status == 8'h00, "resp_status_ok")

    // Verifica que 7 bytes foram colocados na TX FIFO e redecodifica
    cycles = 0;
    while (tx_fifo.count < 7 && cycles < 50) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(tx_fifo.count >= 7, "tx_fifo_timeout")
    for (i = 0; i < 7; i++) begin
      tx_fifo.read(rb);
      raw_resp[55 - i*8 -: 8] = rb;
    end
    dec = led_control_response_pkg::decoder(raw_resp);
    `TEST_ASSERT(dec.frameIdEcho == 8'hA1, "dec_frameid_echo")
    `TEST_ASSERT(dec.ledMask == 8'h07, "dec_ledmask")
    `TEST_ASSERT(dec.status == 8'h00, "dec_status_ok")

    $display("Sucesso: spi_led_integration_tb");
    $finish;
  end
endmodule
