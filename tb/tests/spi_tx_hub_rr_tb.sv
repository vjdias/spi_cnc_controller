`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_tx_hub_rr_tb;
  import spi_service_pkg::*;
  import start_move_response_pkg::*;

  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk;

  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  resp_stream_if streams[2]();
  logic tx_busy;

  spi_tx_hub_service #(.NUM_STREAMS(2)) dut(
    .clk(clk), .rst_n(rst_n),
    .streams(streams),
    .tx_fifo(tx_fifo),
    .tx_busy(tx_busy)
  );

  task automatic wait_tx_bytes(input int n, input int max_cycles=200);
    int cycles = 0;
    while (tx_fifo.count < n && cycles < max_cycles) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(tx_fifo.count >= n, "tx_fifo_timeout")
  endtask

  task automatic publish_on_stream(
      input int i,
      input logic [RESP_MAX_BYTES*8-1:0] bits,
      input int unsigned len_bytes
  );
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

  start_move_resp_bytes_t sm;
  logic [31:0] raw_sm;
  logic [RESP_MAX_BYTES*8-1:0] bits0, bits1;

  initial begin
    streams[0].valid = 0; streams[0].bits = '0; streams[0].len = '0;
    streams[1].valid = 0; streams[1].bits = '0; streams[1].len = '0;

    repeat (2) @(posedge clk);
    rst_n = 1;

    sm = start_move_response_pkg::make_default();
    sm.frameIdEcho = 8'h11;
    bits0 = '0; bits0[RESP_MAX_BYTES*8-1 -: 32] = start_move_response_pkg::encoder(sm);
    sm.frameIdEcho = 8'h22;
    bits1 = '0; bits1[RESP_MAX_BYTES*8-1 -: 32] = start_move_response_pkg::encoder(sm);

    fork
      publish_on_stream(0, bits0, 4);
      publish_on_stream(1, bits1, 4);
    join

    wait_tx_bytes(8, 200);

    // lê primeiro frame
    for (int i = 0; i < 4; i++) begin
      byte_t b; tx_fifo.read(b); raw_sm[31 - i*8 -: 8] = b; end
    sm = start_move_response_pkg::decoder(raw_sm);
    `TEST_ASSERT(sm.frameIdEcho == 8'h11 || sm.frameIdEcho == 8'h22, "rr_first_any")

    // lê segundo frame
    for (int i = 0; i < 4; i++) begin
      byte_t b; tx_fifo.read(b); raw_sm[31 - i*8 -: 8] = b; end
    sm = start_move_response_pkg::decoder(raw_sm);
    `TEST_ASSERT(sm.frameIdEcho == 8'h11 || sm.frameIdEcho == 8'h22, "rr_second_any")

    $display("Sucesso: spi_tx_hub_rr_tb");
    $finish;
  end
endmodule
