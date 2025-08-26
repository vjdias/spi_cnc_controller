// -----------------------------------------------------------------------------
// move_probe_level_request_pkg.sv
//
// Frame REQUEST MOVE_PROBE_LEVEL (8B / 64 bits)
// Movimento lento até sondagem nos eixos selecionados.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AA)
//  1: MsgType(05)      // MOVE_PROBE_LEVEL_TYPE
//  2: FrameID          // identificador
//  3: AxisMask         // b0=X, b1=Y, b2=Z
//  4..5: Vprobe        // uint16 BE – velocidade de descida
//  6: Parity           // XOR bytes 1..5
//  7: Tail(55)
// -----------------------------------------------------------------------------
`ifndef MOVE_PROBE_LEVEL_REQUEST_PKG_SV
`define MOVE_PROBE_LEVEL_REQUEST_PKG_SV
package move_probe_level_request_pkg;

  import protocol_constants_pkg::*;

  parameter int FRAME_BITS = 64;

  typedef struct packed {
    byte_t header;    // REQ_HEADER (0xAA)
    byte_t msgType;   // MOVE_PROBE_LEVEL_TYPE (0x05)
    byte_t frameId;   // tag do host
    byte_t axisMask;  // quais eixos sondar
    logic [15:0] vprobe; // velocidade de descida
    byte_t parity;   // XOR bytes 1..5
    byte_t tail;      // REQ_TAIL (0x55)
  } move_probe_level_req_bytes_t;

  // -------- Decoder (FRAME_BITS -> struct) --------
  function automatic move_probe_level_req_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    move_probe_level_req_bytes_t r;
    r.header   = raw[63:56];
    r.msgType  = raw[55:48];
    r.frameId  = raw[47:40];
    r.axisMask = raw[39:32];
    r.vprobe   = raw[31:16];
    r.parity   = raw[15:8];
    r.tail     = raw[7:0];
    return r;
  endfunction

  // -------- Encoder (struct -> FRAME_BITS) --------
  function automatic logic [FRAME_BITS-1:0] encoder(input move_probe_level_req_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameId,
      r.axisMask,
      r.vprobe[15:8], r.vprobe[7:0],
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // -------- Parity --------
  function automatic byte_t calc_parity(input move_probe_level_req_bytes_t f);
    return f.msgType ^ f.frameId ^ f.axisMask ^ f.vprobe[15:8] ^ f.vprobe[7:0];
  endfunction

  function automatic logic check_parity(input move_probe_level_req_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic move_probe_level_req_bytes_t set_parity(input move_probe_level_req_bytes_t in);
    move_probe_level_req_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // -------- Default seguro --------
  function automatic move_probe_level_req_bytes_t make_default();
    move_probe_level_req_bytes_t r;
    r.header   = REQ_HEADER;
    r.msgType  = MOVE_PROBE_LEVEL_TYPE;
    r.frameId  = 8'd0;
    r.axisMask = 8'd0;
    r.vprobe   = 16'd0;
    r.parity   = 8'd0;   // ajustado por set_parity()
    r.tail     = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif

