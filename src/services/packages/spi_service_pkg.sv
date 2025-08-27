// -----------------------------------------------------------------------------
// spi_service_pkg.sv
//
// Tipos e constantes compartilhados entre os serviços de captura e consumo
// da fila SPI. Define o tipo de byte padrão e o tamanho da FIFO.
// -----------------------------------------------------------------------------
`ifndef SPI_SERVICE_PKG_SV
`define SPI_SERVICE_PKG_SV
package spi_service_pkg;
  // Byte padrão utilizado nos serviços SPI
  typedef logic [7:0] byte_t;

  // Profundidade padrão da FIFO de bytes
  parameter int FIFO_DEPTH = 16;
endpackage
`endif
