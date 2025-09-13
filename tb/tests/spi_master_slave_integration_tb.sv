`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_master_slave_integration_tb;
  import spi_service_pkg::*;
  // Não importa protocol_constants_pkg como wildcard para evitar conflito de byte_t
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;

  // Clocks e reset
  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk; // 100 MHz/2 -> 100MHz? aqui é apenas clock de sistema

  // Pinos SPI (master BFM <-> wrapper spi_slave)
  logic sclk;
  logic ss_n;
  logic mosi;
  wire  miso;

  // Barramento de registradores do wrapper
  logic        wr_en;
  logic [2:0]  waddr;
  logic [7:0]  wdata;
  logic        rd_en;
  logic [2:0]  raddr;
  logic [7:0]  rdata;
  logic        irq;

  // RX path
  spi_fifo_if rx_fifo();
  logic                          spi_byte_valid;
  spi_service_pkg::byte_t        spi_byte;
  logic                 overflow_error;
  logic                 slave_busy;

  // TX path
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy;
  resp_stream_if led_stream();
  resp_stream_if streams[1]();

  // Roteador/serviço LED
  logic                          frame_valid;
  logic                          frame_error;
  spi_service_pkg::byte_t        out_msgType;
  led_control_request_pkg::led_ctrl_req_bytes_t led_ctrl_frame;
  logic [5:0]           leds;
  logic                 resp_valid;
  led_ctrl_resp_bytes_t resp_frame;

  // DUTs
  // Wrapper do IP (SPI slave verdadeiro, com pinos)
  spi_slave u_wrap (
    .i_clk      (clk),
    .i_resetn   (rst_n),
    .wr_en      (wr_en),
    .waddr      (waddr),
    .wdata      (wdata),
    .rd_en      (rd_en),
    .raddr      (raddr),
    .rdata      (rdata),
    .irq        (irq),
    .sclk_slave (sclk),
    .ss_n_slave (ss_n),
    .mosi_slave (mosi),
    .miso_slave (miso)
  );

  // Bridge: wrapper -> bytes
  spi_rx_slave_service u_rxbridge(
    .clk(clk), .rst_n(rst_n),
    .rd_en(rd_en), .raddr(raddr), .rdata(rdata), .irq(irq),
    .spi_byte_valid(spi_byte_valid), .spi_byte(spi_byte)
  );

  // Captura MOSI em FIFO
  spi_rx_mosi_service u_cap(
    .clk(clk), .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(rx_fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  // Roteador
  spi_rx_hub_service u_cons(
    .clk(clk), .rst_n(rst_n),
    .fifo(rx_fifo),
    .frame_valid(frame_valid), .frame_error(frame_error),
    .out_msgType(out_msgType),
    .move_home_frame(), .start_move_frame(), .move_probe_frame(), .queue_add_frame(),
    .move_end_frame(), .queue_status_frame(), .fpga_status_frame(),
    .led_ctrl_frame(led_ctrl_frame)
  );

  // Serviço LED
  led_service u_led(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid), .msgType(out_msgType),
    .led_req(led_ctrl_frame),
    .leds(leds), .resp_valid(resp_valid), .resp_frame(resp_frame),
    .tx_stream(led_stream)
  );

  // Conexão stream -> HUB TX
  assign streams[0].valid = led_stream.valid;
  assign streams[0].bits  = led_stream.bits;
  assign streams[0].len   = led_stream.len;
  assign led_stream.ready = streams[0].ready;

  spi_tx_hub_service #(.NUM_STREAMS(1)) u_tx(
    .clk(clk), .rst_n(rst_n),
    .streams(streams),
    .tx_fifo(tx_fifo),
    .tx_busy(tx_busy)
  );

  // Escrita no registrador de TX do wrapper (alimenta o IP para MISO)
  spi_tx_miso_service u_miso(
    .clk(clk), .rst_n(rst_n),
    .tx_fifo(tx_fifo),
    .wr_en(wr_en), .waddr(waddr), .wdata(wdata)
  );

  // ------------------------
  // Master BFM (SPI Mode 0)
  // ------------------------
  localparam int SCLK_HALF = 2; // ns

  task automatic spi_begin();
    ss_n = 1'b0;
    sclk = 1'b0;
  endtask

  task automatic spi_end();
    sclk = 1'b0;
    ss_n = 1'b1;
  endtask

  // transfere 1 byte (MSB primeiro) no modo 0
  task automatic spi_transfer_byte(input spi_service_pkg::byte_t tx,
                                   output spi_service_pkg::byte_t rx);
    rx = '0;
    for (int i = 7; i >= 0; i--) begin
      mosi = tx[i];
      #SCLK_HALF; sclk = 1'b1; // amostra MISO na subida
      rx[i] = miso;
      #SCLK_HALF; sclk = 1'b0;
    end
  endtask

  // envia um frame LED_CTRL via MOSI e monta a resposta via wr_en/wdata
  task automatic spi_led_roundtrip(
      input spi_service_pkg::byte_t frameId,
      input spi_service_pkg::byte_t mask,
      input spi_service_pkg::byte_t value,
      output led_ctrl_resp_bytes_t resp
  );
    led_control_request_pkg::led_ctrl_req_bytes_t req;
    logic [55:0] raw_req;
    logic [55:0] raw_resp;
    spi_service_pkg::byte_t rb;
    int wait_cycles;
    // Decls must precede statements in this block
    spi_service_pkg::byte_t resp_bytes[0:6];
    int rc;
    int cap_cycles;
    req          = led_control_request_pkg::make_default();
    req.frameId  = frameId;
    req.ledMask  = mask;
    req.ledValue = value;
    req          = led_control_request_pkg::set_parity(req);
    raw_req      = led_control_request_pkg::encoder(req);

    // envia 7 bytes do request
    spi_begin();
    for (int i = 0; i < 7; i++) begin
      spi_transfer_byte(raw_req[55 - i*8 -: 8], rb);
    end
    spi_end();

    // Aguarda a geração da resposta (TX FIFO cheia o suficiente)
    wait_cycles = 0;
    while (tx_fifo.count < 7 && wait_cycles < 500) begin
      @(posedge clk); wait_cycles++;
    end

    // Captura bytes da resposta diretamente nas escritas do wrapper
    rc = 0;
    cap_cycles = 0;
    while (rc < 7 && cap_cycles < 2000) begin
      @(posedge clk);
      cap_cycles++;
      if (wr_en && waddr == 3'd0) begin
        resp_bytes[rc] = wdata;
        rc++;
      end
    end
    `TEST_EXPECT_TRUE(rc == 7, "resp_bytes_captured")

    for (int i2 = 0; i2 < 7; i2++) begin
      raw_resp[55 - i2*8 -: 8] = resp_bytes[i2];
      $display("resp_bytes[%0d]=%02h", i2, resp_bytes[i2]);
    end

    resp = led_control_response_pkg::decoder(raw_resp);
  endtask

  // Reads 7 dummy bytes expecting no response
  task automatic spi_idle_read(output spi_service_pkg::byte_t first);
    spi_service_pkg::byte_t tmp;
    spi_begin();
    for (int i = 0; i < 7; i++) begin
      spi_transfer_byte(8'h00, tmp);
      if (i == 0) first = tmp;
    end
    spi_end();
  endtask

  initial begin
    led_ctrl_resp_bytes_t dec;
    spi_service_pkg::byte_t first;
    // defaults
    sclk = 1'b0; ss_n = 1'b1; mosi = 1'b0;
    repeat (2) @(posedge clk);
    rst_n = 1;
    // leitura antes de qualquer request não deve ter header de resposta
    spi_idle_read(first);
    `TEST_EXPECT_TRUE(first != protocol_constants_pkg::RESP_HEADER, "no_response_before_req")

    // Liga LEDs 0..2
    spi_led_roundtrip(8'hA1, 8'h07, 8'h01, dec);
    `TEST_EXPECT_EQ_HEX(dec.msgType, protocol_constants_pkg::LED_CTRL_TYPE, "resp_type")
    `TEST_EXPECT_EQ_HEX(dec.frameIdEcho, 8'hA1,     "frameid")
    `TEST_EXPECT_EQ_HEX(dec.ledMask,     8'h07,     "mask")
    `TEST_EXPECT_EQ_HEX(dec.status,      8'h00,     "status")
    `TEST_EXPECT_TRUE  (led_control_response_pkg::check_parity(dec), "parity")

    $display("Sucesso: spi_master_slave_integration_tb");
    $finish;
  end
endmodule
