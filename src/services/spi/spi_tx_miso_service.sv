// -----------------------------------------------------------------------------
// spi_tx_miso_service.sv
//
// Lê bytes da FIFO de TX e escreve no barramento de registradores do wrapper
// spi_slave (wr_en/waddr/wdata), inserindo um espaçamento configurável entre
// bytes (WAIT_CYCLES) para facilitar depuração.
// -----------------------------------------------------------------------------
`ifndef SPI_TX_MISO_SERVICE_SV
`define SPI_TX_MISO_SERVICE_SV
`ifdef SPI_USE_INTERFACES
module spi_tx_miso_service #(
    parameter int WAIT_CYCLES = 2
  )(
    input  logic clk,
    input  logic rst_n,
    spi_fifo_if.consumer tx_fifo,
    output logic        wr_en,
    output logic [2:0]  waddr,
    output logic [7:0]  wdata
  );
  import spi_service_pkg::*;
  logic [$clog2(WAIT_CYCLES+1)-1:0] gap;

  assign waddr = 3'd0;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_en <= 1'b0;
      wdata <= '0;
      gap   <= '0;
    end else begin
      wr_en <= 1'b0;
      if (gap != 0) begin
        gap <= gap - 1'b1;
      end else if (!tx_fifo.empty) begin
        spi_service_pkg::byte_t b;
        tx_fifo.read(b);
        wdata <= b;
        wr_en <= 1'b1;
        gap   <= WAIT_CYCLES[$clog2(WAIT_CYCLES+1)-1:0];
      end
    end
  end
endmodule
`endif // SPI_USE_INTERFACES
`endif // SPI_TX_MISO_SERVICE_SV
