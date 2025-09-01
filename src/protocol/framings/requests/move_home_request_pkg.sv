// -----------------------------------------------------------------------------
// move_home_request_pkg.sv
//
// Frame REQUEST MOVE_HOME (9B / 72 bits)
// Inicia homing nos eixos X/Y/Z conforme máscaras e velocidade.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AA)
//  1: MsgType(04)      // MOVE_HOME_TYPE
//  2: FrameID          // identificador do host
//  3: AxisMask         // b0=X, b1=Y, b2=Z (1=homenizar)
//  4: DirMask          // b0=X…b2=Z (1=CW; 0=CCW)
//  5..6: Vhome         // uint16 BE – velocidade de homing
//  7: Parity           // XOR bytes 1..6
//  8: Tail(55)
// -----------------------------------------------------------------------------
`ifndef MOVE_HOME_REQUEST_PKG_SV
`define MOVE_HOME_REQUEST_PKG_SV
package move_home_request_pkg;

  import protocol_constants_pkg::*;

  localparam int FRAME_BITS = 72;

  typedef struct packed {
    byte_t header;      // REQ_HEADER (0xAA)
    byte_t msgType;     // MOVE_HOME_TYPE (0x04)
    byte_t frameId;     // tag do host
    byte_t axisMask;    // quais eixos homenizar
    byte_t dirMask;     // direção por eixo
    logic [15:0] vhome; // velocidade de homing
    byte_t parity;      // XOR bytes 1..6
    byte_t tail;        // REQ_TAIL (0x55)
  } move_home_req_bytes_t;

  // -------- Decoder (FRAME_BITS -> struct) --------
  function automatic move_home_req_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    move_home_req_bytes_t r;
    r.header   = raw[71:64];
    r.msgType  = raw[63:56];
    r.frameId  = raw[55:48];
    r.axisMask = raw[47:40];
    r.dirMask  = raw[39:32];
    r.vhome    = raw[31:16];
    r.parity   = raw[15:8];
    r.tail     = raw[7:0];
    return r;
  endfunction

  // -------- Encoder (struct -> FRAME_BITS) --------
  function automatic logic [FRAME_BITS-1:0] encoder(input move_home_req_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameId,
      r.axisMask,
      r.dirMask,
      r.vhome[15:8], r.vhome[7:0],
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // -------- Parity --------
  function automatic byte_t calc_parity(input move_home_req_bytes_t f);
    return f.msgType ^ f.frameId ^ f.axisMask ^ f.dirMask ^
           f.vhome[15:8] ^ f.vhome[7:0];
  endfunction

  function automatic logic check_parity(input move_home_req_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic move_home_req_bytes_t set_parity(input move_home_req_bytes_t in);
    move_home_req_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // -------- Default seguro --------
  function automatic move_home_req_bytes_t make_default();
    move_home_req_bytes_t r;
    r.header   = REQ_HEADER;
    r.msgType  = MOVE_HOME_TYPE;
    r.frameId  = 8'd0;
    r.axisMask = 8'd0;
    r.dirMask  = 8'd0;
    r.vhome    = 16'd0;
    r.parity   = 8'd0;   // ajustado por set_parity()
    r.tail     = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif

