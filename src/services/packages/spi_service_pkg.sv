// -----------------------------------------------------------------------------
// spi_service_pkg.sv
//
// Tipos e constantes compartilhados entre os serviços SPI. Define o tipo de
// byte padrão e dimensões das filas de recepção e transmissão.
// -----------------------------------------------------------------------------
`ifndef SPI_SERVICE_PKG_SV
`define SPI_SERVICE_PKG_SV
package spi_service_pkg;
  import move_queue_add_request_pkg::*;       // maior frame de requisição
  import move_probe_level_response_pkg::*;    // maior frame de resposta

  // Byte padrão utilizado nos serviços SPI
  typedef logic [7:0] byte_t;

  // Comprimento máximo dos frames de entrada e saída (em bytes)
  parameter int REQ_MAX_BYTES  = move_queue_add_request_pkg::FRAME_BITS / 8;  // 42
  parameter int RESP_MAX_BYTES = move_probe_level_response_pkg::FRAME_BITS / 8; // 20

  // Profundidade da FIFO de recepção: 5 vezes o maior frame de requisição
  parameter int RX_FIFO_DEPTH   = REQ_MAX_BYTES * 5;   // 210 bytes
  // Nível de bloqueio: acima de 4 frames completos ocupados
  parameter int RX_BLOCK_LEVEL  = REQ_MAX_BYTES * 4;   // 168 bytes

  // Profundidade da fila de transmissão: 10 vezes o maior frame de resposta
  parameter int TX_FIFO_DEPTH   = RESP_MAX_BYTES * 10; // 200 bytes
endpackage
`endif
