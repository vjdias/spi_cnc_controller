// -----------------------------------------------------------------------------
// start_move_response_pkg.sv
//
// Frame RESPONSE START_MOVE (4B): AB 03 ID_ECHO 54
//
// [31:24] Header        = RESP_HEADER (0xAB)
// [23:16] Message Type  = START_MOVE_TYPE (0x03)
// [15:8 ] FrameID_Echo  = eco do request
// [7 :0 ] Tail          = RESP_TAIL (0x54)
// -----------------------------------------------------------------------------
`ifndef START_MOVE_RESPONSE_PKG_SV
`define START_MOVE_RESPONSE_PKG_SV
package start_move_response_pkg;

  import protocol_constants_pkg::*;
  typedef logic [7:0] byte_t;

  // MsgType específico
  localparam byte_t START_MOVE_TYPE = 8'h03;

  typedef struct packed {
    byte_t header;       // RESP_HEADER
    byte_t msgType;      // 0x03
    byte_t frameIdEcho;  // eco do START_MOVE
    byte_t tail;         // RESP_TAIL
  } start_move_resp_bytes_t;

  // Decoder (32b -> struct)
  function automatic start_move_resp_bytes_t decoder(input logic [31:0] raw);
    start_move_resp_bytes_t r;
    r.header      = raw[31:24];
    r.msgType     = raw[23:16];
    r.frameIdEcho = raw[15:8];
    r.tail        = raw[7:0];
    return r;
  endfunction

  // Encoder (struct -> 32b)
  function automatic logic [31:0] encoder(input start_move_resp_bytes_t r);
    return {r.header, r.msgType, r.frameIdEcho, r.tail};
  endfunction

  // Default seguro
  function automatic start_move_resp_bytes_t make_default();
    start_move_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = START_MOVE_TYPE;
    r.frameIdEcho = 8'd0;
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif
