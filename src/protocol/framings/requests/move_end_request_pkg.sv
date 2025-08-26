// -----------------------------------------------------------------------------
// move_end_request_pkg.sv
//
// Frame REQUEST MOVE_END (4B): AA 06 ID 55
// Sai do modo de movimento contínuo iniciado por START_MOVE.
//
// [31:24] Header   = REQ_HEADER (0xAA)
// [23:16] MsgType  = MOVE_END_TYPE (0x06)
// [15:8 ] FrameID  = definido pelo host
// [7 :0 ] Tail     = REQ_TAIL (0x55)
// -----------------------------------------------------------------------------
`ifndef MOVE_END_REQUEST_PKG_SV
`define MOVE_END_REQUEST_PKG_SV
package move_end_request_pkg;

  import protocol_constants_pkg::*;

  typedef struct packed {
    byte_t header;   // REQ_HEADER
    byte_t msgType;  // MOVE_END_TYPE (0x06)
    byte_t frameId;  // definido pelo host
    byte_t tail;     // REQ_TAIL
  } move_end_req_bytes_t;

  // Decoder (32b -> struct)
  function automatic move_end_req_bytes_t decoder(input logic [31:0] raw);
    move_end_req_bytes_t r;
    r.header  = raw[31:24];
    r.msgType = raw[23:16];
    r.frameId = raw[15:8];
    r.tail    = raw[7:0];
    return r;
  endfunction

  // Encoder (struct -> 32b)
  function automatic logic [31:0] encoder(input move_end_req_bytes_t r);
    return {r.header, r.msgType, r.frameId, r.tail};
  endfunction

  // Default seguro
  function automatic move_end_req_bytes_t make_default();
    move_end_req_bytes_t r;
    r.header  = REQ_HEADER;
    r.msgType = MOVE_END_TYPE;
    r.frameId = 8'd0;
    r.tail    = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif

