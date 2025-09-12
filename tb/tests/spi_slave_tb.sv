`timescale 1ns/1ps

module spi_slave_tb #(parameter SPI_MODE = 0,
                       parameter SPI_CLK_DELAY = 20,
                       parameter MAIN_CLK_DELAY = 2);
  logic w_CPOL = (SPI_MODE == 2) || (SPI_MODE == 3);
  logic w_CPHA = (SPI_MODE == 1) || (SPI_MODE == 3);

  logic r_Rst_L = 1'b0;
  logic [7:0] dataPayload [0:255];
  logic [7:0] dataLength;

  logic r_Clk = 0;
  always #(MAIN_CLK_DELAY) r_Clk = ~r_Clk;

  logic w_SPI_Clk;
  logic w_SPI_MOSI;
  wire  w_SPI_MISO;
  logic r_Master_CS_n = 1'b1;

  // Slave outputs
  logic       w_Slave_RX_DV;
  logic [7:0] w_Slave_RX_Byte;

  // Instantiate SPI Slave
  SPI_Slave #(.SPI_MODE(SPI_MODE)) SPI_Slave_UUT (
    .i_Rst_L(r_Rst_L),
    .i_Clk(r_Clk),
    .o_RX_DV(w_Slave_RX_DV),
    .o_RX_Byte(w_Slave_RX_Byte),
    .i_TX_DV(w_Slave_RX_DV),
    .i_TX_Byte(w_Slave_RX_Byte),
    .i_SPI_Clk(w_SPI_Clk),
    .o_SPI_MISO(w_SPI_MISO),
    .i_SPI_MOSI(w_SPI_MOSI),
    .i_SPI_CS_n(r_Master_CS_n)
  );

  initial begin
    w_SPI_Clk  = w_CPOL;
    w_SPI_MOSI = 1'b0;
  end

  // Transfer one byte over SPI according to mode
  task automatic spi_transfer_byte(input [7:0] tx, output [7:0] rx);
    rx = '0;
    for (int i = 7; i >= 0; i--) begin
      if (w_CPHA == 0) begin
        w_SPI_MOSI = tx[i];
        #(SPI_CLK_DELAY);
        w_SPI_Clk = ~w_SPI_Clk; // leading edge
        #(SPI_CLK_DELAY);
        rx[i] = w_SPI_MISO;
        w_SPI_Clk = ~w_SPI_Clk; // trailing edge
        #(SPI_CLK_DELAY);
      end else begin
        w_SPI_Clk = ~w_SPI_Clk; // leading edge
        #(SPI_CLK_DELAY);
        w_SPI_MOSI = tx[i];
        #(SPI_CLK_DELAY);
        w_SPI_Clk = ~w_SPI_Clk; // trailing edge
        #(SPI_CLK_DELAY);
        rx[i] = w_SPI_MISO;
      end
    end
  endtask

  // Sends a single byte from master to slave.
  task automatic SendSingleByte(input [7:0] data, output [7:0] rx);
    r_Master_CS_n = 1'b0;
    spi_transfer_byte(data, rx);
    r_Master_CS_n = 1'b1;
  endtask

  // Sends multiple bytes keeping CS low
  task automatic SendMultiByte(input [7:0] data[0:255], input [7:0] length);
    logic [7:0] rb;
    r_Master_CS_n = 1'b0;
    for (int ii = 0; ii < length; ii++) begin
      spi_transfer_byte(data[ii], rb);
      $display("MOSI=%02h MISO=%02h", data[ii], rb);
    end
    r_Master_CS_n = 1'b1;
  endtask

  logic [7:0] rb;

  initial begin
    repeat(10) @(posedge r_Clk);
    r_Rst_L = 1'b0;
    repeat(10) @(posedge r_Clk);
    r_Rst_L = 1'b1;
    SendSingleByte(8'hC1, rb);
    repeat(100) @(posedge r_Clk);
    dataPayload[0] = 8'h00;
    dataPayload[1] = 8'h01;
    dataPayload[2] = 8'h80;
    dataPayload[3] = 8'hFF;
    dataPayload[4] = 8'h55;
    dataPayload[5] = 8'hAA;
    dataLength     = 6;
    SendMultiByte(dataPayload, dataLength);
    repeat(100) @(posedge r_Clk);
    $display("Sucesso: spi_slave_tb mode %0d", SPI_MODE);
    $finish();
  end
endmodule
