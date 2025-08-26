// -----------------------------------------------------------------------------
// start_move_request_pkg.sv
//
// Frame REQUEST START_MOVE (4B): AA 03 ID 55
//
// [31:24] Header   = REQ_HEADER (0xAA)
// [23:16] MsgType  = START_MOVE_TYPE (0x03)
// [15:8 ] FrameID  = definido pelo host
// [7 :0 ] Tail     = REQ_TAIL (0x55)
// -----------------------------------------------------------------------------
`ifndef START_MOVE_REQUEST_PKG_SV
`define START_MOVE_REQUEST_PKG_SV
package start_move_request_pkg;

  import protocol_constants_pkg::*;
  typedef logic [7:0] byte_t;

  // MsgType específico
  localparam byte_t START_MOVE_TYPE = 8'h03;

  typedef struct packed {
    byte_t header;   // REQ_HEADER
    byte_t msgType;  // 0x03
    byte_t frameId;  // definido pelo host
    byte_t tail;     // REQ_TAIL
  } start_move_req_bytes_t;

  // Decoder (32b -> struct)
  function automatic start_move_req_bytes_t decoder(input logic [31:0] raw);
    start_move_req_bytes_t r;
    r.header  = raw[31:24];
    r.msgType = raw[23:16];
    r.frameId = raw[15:8];
    r.tail    = raw[7:0];
    return r;
  endfunction

  // Encoder (struct -> 32b)
  function automatic logic [31:0] encoder(input start_move_req_bytes_t r);
    return {r.header, r.msgType, r.frameId, r.tail};
  endfunction

  // Default seguro
  function automatic start_move_req_bytes_t make_default();
    start_move_req_bytes_t r;
    r.header  = REQ_HEADER;
    r.msgType = START_MOVE_TYPE;
    r.frameId = 8'd0;
    r.tail    = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif
