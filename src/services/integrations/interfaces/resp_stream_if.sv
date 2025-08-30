// -----------------------------------------------------------------------------
// resp_stream_if.sv
//
// Interface de stream genérica para publicação de frames de resposta já
// codificados em bytes. Fornece handshake valid/ready e carrega o vetor de
// bits alinhado no topo, além do comprimento em bytes.
// -----------------------------------------------------------------------------
`ifndef RESP_STREAM_IF_SV
`define RESP_STREAM_IF_SV
interface resp_stream_if;
  import spi_service_pkg::*;

  localparam int SHIFT_BITS = RESP_MAX_BYTES * 8;

  // Handshake e payload
  logic                         valid;
  logic                         ready;
  logic [SHIFT_BITS-1:0]        bits;   // alinhado no topo (SHIFT_BITS-1 ..)
  int unsigned                  len;    // em bytes (1..RESP_MAX_BYTES)

  // Produtor publica frames
  modport producer (input ready, output valid, output bits, output len);

  // Consumidor aceita frames
  modport consumer (output ready, input valid, input bits, input len);
endinterface
`endif
