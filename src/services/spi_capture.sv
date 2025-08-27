// -----------------------------------------------------------------------------
// spi_capture.sv
//
// Captura bytes provenientes do periférico SPI (8 bits por vez) e os insere
// em uma FIFO. Caso a FIFO esteja cheia quando um novo byte chega, o sinal de
// erro `overflow_error` é acionado.
// -----------------------------------------------------------------------------
`ifndef SPI_CAPTURE_SV
`define SPI_CAPTURE_SV
module spi_capture (
    input  logic           clk,
    input  logic           rst_n,
    input  logic           spi_byte_valid,
    input  spi_service_pkg::byte_t spi_byte,
    spi_fifo_if.producer   fifo,
    output logic           overflow_error,
    output logic           slave_busy
);
  import spi_service_pkg::*;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      overflow_error <= 1'b0;
    end else begin
      overflow_error <= 1'b0; // limpa a cada ciclo
      if (spi_byte_valid) begin
        if (!fifo.full) begin
          fifo.write(spi_byte); // armazena byte na FIFO
        end else begin
          overflow_error <= 1'b1; // tentativa de escrita com FIFO cheia
        end
      end
    end
  end

  // Sinaliza quando a fila ultrapassa o limite seguro (4× MR)
  assign slave_busy = (fifo.count > spi_service_pkg::RX_BLOCK_LEVEL);
endmodule
`endif
