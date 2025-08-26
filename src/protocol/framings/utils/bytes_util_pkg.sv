// -----------------------------------------------------------------------------
// bytes_util_pkg.sv
//
// Pacote de utilidades comuns para manipulação de vetores largos.
// Inclui:
//   - typedef byte_t
//   - função get_byte(raw, idx): retorna um byte de posição idx em um vetor largo.
//   - função be16(b_hi,b_lo): monta uint16 Big-Endian a partir de 2 bytes.
//   - função be32(b3..b0): monta uint32 Big-Endian a partir de 4 bytes.
//
// Notas:
//   - VECTOR_WIDTH_BITS: largura total do vetor de entrada, em BITS.
//   - idx = 0 => retorna o byte mais significativo (MSB).
//   - idx = 1 => próximo byte, e assim por diante até o LSB.
// -----------------------------------------------------------------------------
`ifndef BYTES_UTIL_PKG_SV
`define BYTES_UTIL_PKG_SV
package bytes_util_pkg;

  typedef logic [7:0] byte_t;

  // Largura padrão dos vetores manipulados pelo pacote (em bits)
  localparam int VECTOR_WIDTH_BITS = 440;

  // Retorna o byte de posição idx de um vetor raw[VECTOR_WIDTH_BITS-1:0].
  function automatic byte_t get_byte(
      input logic [VECTOR_WIDTH_BITS-1:0] raw,
      input int idx
    );
    get_byte = raw[VECTOR_WIDTH_BITS-1 - 8*idx -: 8];
  endfunction

  // Monta um uint16 Big-Endian a partir de 2 bytes
  function automatic logic [15:0] be16(input logic [7:0] b_hi,
                                       input logic [7:0] b_lo);
    return {b_hi, b_lo};
  endfunction

  // Monta um uint32 Big-Endian a partir de 4 bytes
  function automatic logic [31:0] be32(input logic [7:0] b3,
                                       input logic [7:0] b2,
                                       input logic [7:0] b1,
                                       input logic [7:0] b0);
    return {b3, b2, b1, b0};
  endfunction

endpackage
`endif
