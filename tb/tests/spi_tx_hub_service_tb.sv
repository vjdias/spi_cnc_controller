`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_tx_hub_service_tb;
  import spi_service_pkg::*;
  import led_control_response_pkg::*;
  import start_move_response_pkg::*;

  // Clock/reset
  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk;

  // TX FIFO (onde o HUB empurra os bytes codificados)
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();

  // Streams de entrada (2 fontes)
  resp_stream_if streams[2]();

  // Saídas
  logic tx_busy;

  // DUT: HUB de TX
  spi_tx_hub_service #(.NUM_STREAMS(2)) dut(
    .clk(clk), .rst_n(rst_n),
    .streams(streams),
    .tx_fifo(tx_fifo),
    .tx_busy(tx_busy)
  );

  // Aux: espera até haver pelo menos n bytes na FIFO, com timeout
  task automatic wait_tx_bytes(input int n, input int max_cycles=200);
    int cycles = 0;
    while (tx_fifo.count < n && cycles < max_cycles) begin
      @(posedge clk);
      cycles++;
    end
    `TEST_ASSERT(tx_fifo.count >= n, "tx_fifo_timeout")
  endtask

  // Produtor: publica um frame no stream[i]
  task automatic publish_on_stream(
      input int i,
      input logic [RESP_MAX_BYTES*8-1:0] bits,
      input int unsigned len_bytes
  );
    // valida até o HUB aceitar (ready)
    case (i)
      0: begin
        streams[0].bits  = bits;
        streams[0].len   = len_bytes;
        streams[0].valid = 1'b1;
        do @(posedge clk); while (streams[0].ready !== 1'b1);
        @(posedge clk);
        streams[0].valid = 1'b0;
      end
      1: begin
        streams[1].bits  = bits;
        streams[1].len   = len_bytes;
        streams[1].valid = 1'b1;
        do @(posedge clk); while (streams[1].ready !== 1'b1);
        @(posedge clk);
        streams[1].valid = 1'b0;
      end
      default: begin end
    endcase
  endtask

  // Teste 1: LED apenas, verifica encode e tamanho (7 bytes)
  task automatic test_led_only();
    logic [55:0] raw;
    led_ctrl_resp_bytes_t r;
    led_ctrl_resp_bytes_t dec;
    logic [RESP_MAX_BYTES*8-1:0] bits;

    // prepara
    r = led_control_response_pkg::make_default();
    r.frameIdEcho = 8'hA1;
    r.ledMask     = 8'h3F; // 6 bits
    r.status      = 8'h00;
    r             = led_control_response_pkg::set_parity(r);

    // publica no stream[0]
    bits = '0;
    bits[RESP_MAX_BYTES*8-1 -: 56] = led_control_response_pkg::encoder(r);
    publish_on_stream(0, bits, 7);

    // espera HUB iniciar
    wait (tx_busy == 1'b1);

    // aguarda enfileirar 7 bytes
    wait_tx_bytes(7, 200);

    // coleta e redecodifica
    for (int i = 0; i < 7; i++) begin
      byte_t b;
      tx_fifo.read(b);
      raw[55 - i*8 -: 8] = b;
    end

    dec = led_control_response_pkg::decoder(raw);
    `TEST_ASSERT(dec.msgType == 8'h07, "led_msg_type")
    `TEST_ASSERT(dec.frameIdEcho == 8'hA1, "led_frameid_echo")
    `TEST_ASSERT(dec.ledMask == 8'h3F, "led_mask")
    `TEST_ASSERT(led_control_response_pkg::check_parity(dec), "led_parity")
  endtask

  // Teste 2: round-robin entre stream[0] e stream[1]
  task automatic test_round_robin_two_streams();
    // publica dois frames curtos em sequência e observa ordem RR
    start_move_resp_bytes_t sm;
    start_move_resp_bytes_t dec;
    logic [31:0] raw_sm;
    logic [RESP_MAX_BYTES*8-1:0] bits0, bits1;

    sm = start_move_response_pkg::make_default();
    sm.frameIdEcho = 8'h11;

    bits0 = '0;
    bits0[RESP_MAX_BYTES*8-1 -: 32] = start_move_response_pkg::encoder(sm);
    bits1 = '0;
    sm.frameIdEcho = 8'h22;
    bits1[RESP_MAX_BYTES*8-1 -: 32] = start_move_response_pkg::encoder(sm);

    // publica quase simultâneo em [0] e [1]
    fork
      publish_on_stream(0, bits0, 4);
      publish_on_stream(1, bits1, 4);
    join

    // deve sair 8 bytes (dois frames)
    wait_tx_bytes(8, 200);

    // lê primeiro frame
    for (int i = 0; i < 4; i++) begin
      byte_t b;
      tx_fifo.read(b);
      raw_sm[31 - i*8 -: 8] = b;
    end
    dec = start_move_response_pkg::decoder(raw_sm);
    `TEST_ASSERT(dec.frameIdEcho == 8'h11 || dec.frameIdEcho == 8'h22, "rr_first_any")

    // lê segundo frame
    for (int i = 0; i < 4; i++) begin
      byte_t b;
      tx_fifo.read(b);
      raw_sm[31 - i*8 -: 8] = b;
    end
    dec = start_move_response_pkg::decoder(raw_sm);
    `TEST_ASSERT(dec.frameIdEcho == 8'h11 || dec.frameIdEcho == 8'h22, "rr_second_any")
  endtask

  initial begin
    // defaults streams
    streams[0].valid = 1'b0; streams[0].bits = '0; streams[0].len = '0;
    streams[1].valid = 1'b0; streams[1].bits = '0; streams[1].len = '0;

    // release reset
    repeat (2) @(posedge clk);
    rst_n = 1;

    test_led_only();
    test_round_robin_two_streams();

    $display("Sucesso: spi_tx_hub_service_tb");
    $finish;
  end
endmodule
