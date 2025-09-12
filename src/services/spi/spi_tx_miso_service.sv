// -----------------------------------------------------------------------------
// spi_tx_miso_service.sv
//
// Reads bytes from the TX FIFO and feeds them to the SPI_Slave
// using the (i_TX_DV/i_TX_Byte) interface.
// -----------------------------------------------------------------------------
`ifndef SPI_TX_MISO_SERVICE_SV
`define SPI_TX_MISO_SERVICE_SV
`ifdef MODEL_TECH
`define __SIM_BUILD__
`endif
`ifdef VERILATOR
`define __SIM_BUILD__
`endif

`ifdef __SIM_BUILD__
module spi_tx_miso_service #(
    parameter int WAIT_CYCLES = 2
  )(
    input  logic clk,
    input  logic rst_n,
    spi_fifo_if.consumer tx_fifo,
    output logic        tx_dv,
    output logic [7:0]  tx_byte
  );
  import spi_service_pkg::*;
  logic [$clog2(WAIT_CYCLES+1)-1:0] gap;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      tx_dv   <= 1'b0;
      tx_byte <= '0;
      gap     <= '0;
    end else begin
      tx_dv <= 1'b0;
      if (gap != 0) begin
        gap <= gap - 1'b1;
      end else if (!tx_fifo.empty) begin
        spi_service_pkg::byte_t b;
        tx_fifo.read(b);
        tx_byte <= b;
        tx_dv   <= 1'b1;
        gap     <= WAIT_CYCLES[$clog2(WAIT_CYCLES+1)-1:0];
      end
    end
  end
endmodule
`else
module spi_tx_miso_service #(
    parameter int WAIT_CYCLES = 2
  )(
    input  logic clk,
    input  logic rst_n,
    input  logic        fifo_empty,
    output logic        fifo_rd_en,
    input  logic [7:0]  fifo_rd_data,
    input  logic        fifo_rd_valid,
    output logic        tx_dv,
    output logic [7:0]  tx_byte
  );
  import spi_service_pkg::*;
  logic [$clog2(WAIT_CYCLES+1)-1:0] gap;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      fifo_rd_en <= 1'b0;
      tx_dv      <= 1'b0;
      tx_byte    <= '0;
      gap        <= '0;
    end else begin
      fifo_rd_en <= 1'b0;
      tx_dv      <= 1'b0;
      if (gap != 0) begin
        gap <= gap - 1'b1;
      end else if (fifo_rd_valid) begin
        tx_byte <= fifo_rd_data;
        tx_dv   <= 1'b1;
        gap     <= WAIT_CYCLES[$clog2(WAIT_CYCLES+1)-1:0];
      end else if (!fifo_empty) begin
        fifo_rd_en <= 1'b1;
      end
    end
  end
endmodule
`endif
`endif // SPI_TX_MISO_SERVICE_SV
