`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_full_flow_led_basic_tb;
  // Objetivo: enviar um único LED_CTRL via SPI (bridge->captura->router->serviço)
  // e verificar que os LEDs acendem e a resposta é publicada corretamente.

  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;

  // Clock/reset
  logic clk = 0; logic rst_n = 0; always #5 clk = ~clk;

  // RX path
  spi_fifo_if rx_fifo();
  logic rd_en; logic [2:0] raddr; spi_service_pkg::byte_t rdata; logic irq;
  logic spi_byte_valid; spi_service_pkg::byte_t spi_byte; logic overflow_error; logic slave_busy;
  // Router outputs (só LED)
  logic frame_valid, frame_error; spi_service_pkg::byte_t out_msgType;
  led_control_request_pkg::led_ctrl_req_bytes_t led_ctrl_frame;

  // LED service outputs
  logic [5:0] leds; logic resp_valid; led_ctrl_resp_bytes_t resp_frame;

  // TX path
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy; resp_stream_if led_stream(); resp_stream_if streams[1]();
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
    .move_home_frame(), .start_move_frame(), .move_probe_frame(), .queue_add_frame(), .move_end_frame(),
    .queue_status_frame(), .fpga_status_frame(), .led_ctrl_frame(led_ctrl_frame)
  );
  localparam bit ACTIVE_LOW = 1;

  led_service #(.ACTIVE_LOW(ACTIVE_LOW)) u_led(
    .clk(clk), .rst_n(rst_n), .frame_valid(frame_valid), .msgType(out_msgType),
    .led_req(led_ctrl_frame), .leds(leds), .resp_valid(resp_valid), .resp_frame(resp_frame),
    .tx_stream(led_stream)
  );
  assign streams[0].valid = led_stream.valid;
  assign streams[0].bits  = led_stream.bits;
  assign streams[0].len   = led_stream.len;
  assign led_stream.ready = streams[0].ready;
  spi_tx_hub_service #(.NUM_STREAMS(1)) u_tx(
    .clk(clk), .rst_n(rst_n), .streams(streams), .tx_fifo(tx_fifo), .tx_busy(tx_busy)
  );
  spi_tx_miso_service #(.WAIT_CYCLES(2)) u_miso(
    .clk(clk), .rst_n(rst_n), .tx_fifo(tx_fifo), .wr_en(wr_en), .waddr(waddr), .wdata(wdata)
  );

  // Master wrapper buffer
  spi_service_pkg::byte_t inq[$];
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin irq<=1'b0; rdata<='0; end
    else begin irq <= (inq.size()!=0); if (rd_en && inq.size()!=0) rdata <= inq.pop_front(); end
  end

  // Envio de LED_CTRL via SPI respeitando busy
  task automatic send_led_ctrl_frame(spi_service_pkg::byte_t frameId, spi_service_pkg::byte_t mask, spi_service_pkg::byte_t value);
    led_control_request_pkg::led_ctrl_req_bytes_t req; logic [55:0] raw;
    req = led_control_request_pkg::make_default(); req.frameId = frameId; req.ledMask = mask; req.ledValue = value;
    req = led_control_request_pkg::set_parity(req); raw = led_control_request_pkg::encoder(req);
    for (int i=0; i<7; i++) begin do @(posedge clk); while (slave_busy); inq.push_back(raw[55 - i*8 -: 8]); end
  endtask

  // Teste: 10 mudanças com combinações diferentes (liga/desliga) via SPI
  initial begin
    int cycles;
    spi_service_pkg::byte_t masks    [10];
    spi_service_pkg::byte_t vals     [10];
    spi_service_pkg::byte_t frameIds [10];
    logic [5:0] expected_leds;

    // Reset
    expected_leds = ACTIVE_LOW ? 6'b111111 : 6'b0;
    repeat (2) @(posedge clk); rst_n = 1;

    // Programa 10 combinações (liga alguns, desliga outros, e final all-on)
    masks[0] = 8'h01; vals[0] = 8'h01; frameIds[0] = 8'hA1; // L0 ON
    masks[1] = 8'h02; vals[1] = 8'h01; frameIds[1] = 8'hA2; // L1 ON
    masks[2] = 8'h04; vals[2] = 8'h01; frameIds[2] = 8'hA3; // L2 ON
    masks[3] = 8'h08; vals[3] = 8'h01; frameIds[3] = 8'hA4; // L3 ON
    masks[4] = 8'h10; vals[4] = 8'h01; frameIds[4] = 8'hA5; // L4 ON
    masks[5] = 8'h20; vals[5] = 8'h01; frameIds[5] = 8'hA6; // L5 ON
    masks[6] = 8'h09; vals[6] = 8'h00; frameIds[6] = 8'hA7; // L3,L0 OFF
    masks[7] = 8'h12; vals[7] = 8'h00; frameIds[7] = 8'hA8; // L4,L1 OFF
    masks[8] = 8'h24; vals[8] = 8'h00; frameIds[8] = 8'hA9; // L5,L2 OFF
    masks[9] = 8'h3F; vals[9] = 8'h01; frameIds[9] = 8'hAA; // ALL ON

    // Envia 10 frames e valida estado e eco da resposta a cada passo
    for (int i = 0; i < 10; i++) begin
      led_control_response_pkg::led_ctrl_resp_bytes_t dec;
      logic [55:0] raw_resp;
      spi_service_pkg::byte_t rb;
      int got;
      logic val;

      send_led_ctrl_frame(frameIds[i], masks[i], vals[i]);

      // Aguarda resp_valid
      cycles = 0; while (!resp_valid && cycles < 100) begin @(posedge clk); cycles++; end
      `TEST_ASSERT(resp_valid, "resp_valid_timeout")
      // Atualiza esperado conforme semântica do serviço
      val = vals[i][0];
      if (ACTIVE_LOW) val = ~val;
      if (val) expected_leds = expected_leds |  masks[i][5:0];
      else     expected_leds = expected_leds & ~masks[i][5:0];
      `TEST_ASSERT(leds == expected_leds, "leds_state_match")

      // Captura 7 bytes enviados ao wrapper (via wr_en/wdata)
      got = 0; cycles = 0;
      raw_resp = '0;
      while (got < 7 && cycles < 200) begin
        @(posedge clk); cycles++;
        if (wr_en) begin
          raw_resp[55 - got*8 -: 8] = wdata;
          got++;
        end
      end
      `TEST_ASSERT(got == 7, "tx_fifo_timeout")
      dec = led_control_response_pkg::decoder(raw_resp);
      `TEST_ASSERT(dec.msgType == protocol_constants_pkg::LED_CTRL_TYPE, "resp_type")
      `TEST_ASSERT(dec.frameIdEcho == frameIds[i], "resp_frameid_echo")
      `TEST_ASSERT(dec.ledMask == masks[i], "resp_ledmask_echo")
      `TEST_ASSERT(dec.status == 8'h00, "resp_status_ok")
    end

    $display("Sucesso: spi_full_flow_led_basic_tb (10 mudanças)");
    $finish;
  end
endmodule
