`timescale 1ns/1ps
`include "spi_slave_tb.sv"
module spi_slave_mode2_tb;
  spi_slave_tb #(.SPI_MODE(2)) tb();
endmodule
