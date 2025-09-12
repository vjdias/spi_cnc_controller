// -----------------------------------------------------------------------------
// spi_rx_slave_stream_bridge.sv
//
// Bridge simples: converte sinais de byte DV (rx_dv/rx_byte) do SPI_Slave
// para o fluxo de bytes do pipeline (spi_byte_valid/spi_byte).
// -----------------------------------------------------------------------------
`ifndef SPI_RX_SLAVE_STREAM_BRIDGE_SV
`define SPI_RX_SLAVE_STREAM_BRIDGE_SV
module spi_rx_slave_stream_bridge (
    input  logic clk,
    input  logic rst_n,
    input  logic        rx_dv,
    input  logic [7:0]  rx_byte,
    output logic        spi_byte_valid,
    output spi_service_pkg::byte_t spi_byte
  );
  import spi_service_pkg::*;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      spi_byte_valid <= 1'b0;
      spi_byte       <= '0;
    end else begin
      spi_byte_valid <= rx_dv;
      if (rx_dv) begin
        spi_byte <= rx_byte;
      end
    end
  end
endmodule
`endif

