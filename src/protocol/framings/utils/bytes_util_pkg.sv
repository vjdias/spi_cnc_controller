package bytes_util_pkg;
  typedef logic [7:0] byte_t;

  // Retorna o byte de posição idx de um vetor de 32 bits (idx 0 = MSB)
  function automatic byte_t get_byte(input logic [31:0] raw, input int idx);
    get_byte = raw[31 - 8*idx -: 8];
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
