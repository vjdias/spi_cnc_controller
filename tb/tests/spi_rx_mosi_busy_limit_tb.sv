`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_rx_mosi_busy_limit_tb;
  import spi_service_pkg::*;
  spi_fifo_if fifo();

  logic clk = 0;
  logic rst_n = 0;
  logic spi_byte_valid;
  byte_t spi_byte;
  logic overflow_error;
  logic slave_busy;

  spi_rx_mosi_service dut(
    .clk(clk), .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  always #5 clk = ~clk;

  initial begin
    spi_byte_valid = 0;
    spi_byte       = 0;
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Envia RX_BLOCK_LEVEL+1 bytes para exceder o limite
    for (int i = 0; i < RX_BLOCK_LEVEL + 1; i++) begin
      send_byte(8'hFF);
    end
    @(posedge clk);
    $display("Contagem=%0d busy=%0b", fifo.count, slave_busy);
    if (fifo.count != RX_BLOCK_LEVEL + 1 || !slave_busy)
      $display("Falha: busy_limite_sub");
    else
      $display("Sucesso: spi_rx_mosi_busy_limit_tb");
    $finish;
  end

  task send_byte(byte_t b);
    spi_byte       = b;
    spi_byte_valid = 1'b1;
    @(posedge clk);
    spi_byte_valid = 1'b0;
    @(posedge clk);
  endtask
endmodule
