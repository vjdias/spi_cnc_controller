// -----------------------------------------------------------------------------
// move_end_response_pkg.sv
//
// Frame RESPONSE MOVE_END (4B): AB 06 ID_ECHO 54
// Confirma saída do modo MOVE.
//
// [31:24] Header        = RESP_HEADER (0xAB)
// [23:16] Message Type  = MOVE_END_TYPE (0x06)
// [15:8 ] FrameID_Echo  = eco do request
// [7 :0 ] Tail          = RESP_TAIL (0x54)
// -----------------------------------------------------------------------------
`ifndef MOVE_END_RESPONSE_PKG_SV
`define MOVE_END_RESPONSE_PKG_SV
package move_end_response_pkg;

  import protocol_constants_pkg::*;

  typedef struct packed {
    byte_t header;       // RESP_HEADER
    byte_t msgType;      // MOVE_END_TYPE (0x06)
    byte_t frameIdEcho;  // eco do MOVE_END
    byte_t tail;         // RESP_TAIL
  } move_end_resp_bytes_t;

  // Decoder (32b -> struct)
  function automatic move_end_resp_bytes_t decoder(input logic [31:0] raw);
    move_end_resp_bytes_t r;
    r.header      = raw[31:24];
    r.msgType     = raw[23:16];
    r.frameIdEcho = raw[15:8];
    r.tail        = raw[7:0];
    return r;
  endfunction

  // Encoder (struct -> 32b)
  function automatic logic [31:0] encoder(input move_end_resp_bytes_t r);
    return {r.header, r.msgType, r.frameIdEcho, r.tail};
  endfunction

  // Default seguro
  function automatic move_end_resp_bytes_t make_default();
    move_end_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = MOVE_END_TYPE;
    r.frameIdEcho = 8'd0;
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif

