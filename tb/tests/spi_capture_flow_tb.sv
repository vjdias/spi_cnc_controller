`timescale 1ns/1ps
`define TEST_ASSERT(cond, name) if(!(cond)) begin $display("Falha: %s", name); $finish; end

module spi_capture_flow_tb;
  import spi_service_pkg::*;

  // FIFO com profundidade padrão para testar sinal de ocupação
  spi_fifo_if fifo();

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

    #12 rst_n = 1;

    // Envia exatamente 4*MR bytes: sinal deve permanecer baixo
    for (int i = 0; i < RX_BLOCK_LEVEL; i++) begin
      send_byte(8'h00);
    end
    if (slave_busy) begin
      $display("Falha: busy_antes_limite");
      $finish;
    end

    // Envia mais um byte: deve ativar o busy
    send_byte(8'hAA);
    if (!slave_busy) begin
      $display("Falha: busy_apos_limite");
      $finish;
    end

    $display("Sucesso: spi_capture_flow_tb");
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
