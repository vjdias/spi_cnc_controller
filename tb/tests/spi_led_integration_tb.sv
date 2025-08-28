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

  // DUTs
  spi_capture u_cap(
    .clk(clk), .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  spi_queue_consumer u_cons(
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

  led_service u_led(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid), .msgType(out_msgType),
    .led_req(led_ctrl_frame),
    .leds(leds), .resp_valid(resp_valid), .resp_frame(resp_frame)
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
    `TEST_ASSERT(leds == 6'b000111, "leds_three_on")
    `TEST_ASSERT(resp_frame.frameIdEcho == 8'hA1, "resp_frameid_echo")
    `TEST_ASSERT(resp_frame.ledMask == 8'h07, "resp_ledmask_echo")
    `TEST_ASSERT(resp_frame.status == 8'h00, "resp_status_ok")

    $display("Sucesso: spi_led_integration_tb");
    $finish;
  end
endmodule
