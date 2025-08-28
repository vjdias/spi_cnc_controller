`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_capture_tb;
  import spi_service_pkg::*;

  // FIFO com profundidade pequena para testar overflow
  spi_fifo_if #(.DEPTH(2), .DROP_OLD_ON_FULL(0)) fifo();

  logic clk = 0;
  logic rst_n = 0;
  logic spi_byte_valid;
  byte_t spi_byte;
  logic overflow_error;
  logic slave_busy;

  spi_capture dut(
    .clk(clk),
    .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  // Geração de clock
  always #5 clk = ~clk;

  initial begin
    spi_byte_valid = 0;
    spi_byte       = 0;

    // Libera o reset
    #12 rst_n = 1;

    // Cenário de sucesso: dois bytes armazenados corretamente
    send_byte(8'hAA);
    send_byte(8'h55);
    @(posedge clk);
    #1;
    `TEST_ASSERT(!fifo.empty, "fifo_not_empty");

    // Cenário de erro: enche a FIFO e envia mais um byte
    send_byte(8'h01);
    send_byte(8'h02);
    spi_byte       = 8'h03;
    spi_byte_valid = 1'b1;
    @(posedge clk); // tentativa de escrita com FIFO cheia
    `TEST_ASSERT(overflow_error, "overflow_flag");
    spi_byte_valid = 1'b0;
    @(posedge clk);

    $display("Sucesso: spi_capture_tb");
    $finish;
  end

  // Tarefa auxiliar para enviar um byte
  task send_byte(byte_t b);
    spi_byte        = b;
    spi_byte_valid  = 1'b1;
    @(posedge clk);
    spi_byte_valid  = 1'b0;
    @(posedge clk);
  endtask
endmodule
