// -----------------------------------------------------------------------------
// move_queue_status_request_pkg.sv
//
// Frame REQUEST MOVE_QUEUE_STATUS_REQUEST (4B / 32 bits)
// Pede o status do movimento ATUAL (item em execução na fila).
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AA)
//  1: MsgType(02)      // MOVE_STATUS_TYPE
//  2: FrameID          // identificador do frame (tag do host)
//  3: Tail(55)
// -----------------------------------------------------------------------------
`ifndef MOVE_QUEUE_STATUS_REQUEST_PKG_SV
`define MOVE_QUEUE_STATUS_REQUEST_PKG_SV
package move_queue_status_request_pkg;

  import protocol_constants_pkg::*; // REQ_HEADER/REQ_TAIL, byte_t

  typedef logic [7:0] byte_t;

  // Tipo específico para "status de movimento em execução"
  localparam byte_t MOVE__MOVE_QUEUE_STATUS_TYPE = 8'h02;

  typedef struct packed {
    byte_t header;   // REQ_HEADER (0xAA)
    byte_t msgType;  // MOVE_STATUS_TYPE (0x02)
    byte_t frameId;  // tag do host para correlacionar a resposta
    byte_t tail;     // REQ_TAIL (0x55)
  } move_queue_status_bytes_t;

  // Decoder (32b -> struct)
  function automatic move_queue_status_bytes_t decoder(input logic [31:0] raw);
    move_queue_status_bytes_t r;
    r.header  = raw[31:24];
    r.msgType = raw[23:16];
    r.frameId = raw[15:8];
    r.tail    = raw[7:0];
    return r;
  endfunction

  // Encoder (struct -> 32b)
  function automatic logic [31:0] encoder(input move_queue_status_bytes_t r);
    return {r.header, r.msgType, r.frameId, r.tail};
  endfunction

  // Default seguro
  function automatic move_queue_status_bytes_t make_default();
    move_queue_status_bytes_t r;
    r.header  = REQ_HEADER;
    r.msgType = MOVE_STATUS_TYPE;
    r.frameId = 8'd0;
    r.tail    = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif
