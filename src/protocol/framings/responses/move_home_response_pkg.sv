// -----------------------------------------------------------------------------
// move_home_response_pkg.sv
//
// Frame RESPONSE MOVE_HOME (8B / 64 bits)
// Confirma conclusão do homing em cada eixo.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AB)
//  1: MsgType(04)        // MOVE_HOME_TYPE
//  2: FrameID_Echo       // eco do request
//  3: Status             // 0=ALL_OK,1=BUSY,2=ERR_TIMEOUT,3=ERR_SENSOR
//  4: AxisHomeMask       // b0=X, b1=Y, b2=Z
//  5: ErrorFlags         // b0=timeout, b1=sensor_fail, ...
//  6: Parity             // XOR bytes 1..5
//  7: Tail(54)
// -----------------------------------------------------------------------------
`ifndef MOVE_HOME_RESPONSE_PKG_SV
`define MOVE_HOME_RESPONSE_PKG_SV
package move_home_response_pkg;

  import protocol_constants_pkg::*;

  localparam int FRAME_BITS = 64;

  typedef struct packed {
    byte_t header;        // RESP_HEADER (0xAB)
    byte_t msgType;       // MOVE_HOME_TYPE (0x04)
    byte_t frameIdEcho;   // eco do request
    byte_t status;        // 0=ALL_OK,1=BUSY,2=ERR_TIMEOUT,3=ERR_SENSOR
    byte_t axisHomeMask;  // eixos homenizados
    byte_t errorFlags;    // flags de erro
    byte_t parity;        // XOR bytes 1..5
    byte_t tail;          // RESP_TAIL (0x54)
  } move_home_resp_bytes_t;

  // -------- Decoder (FRAME_BITS -> struct) --------
  function automatic move_home_resp_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    move_home_resp_bytes_t r;
    r.header       = raw[63:56];
    r.msgType      = raw[55:48];
    r.frameIdEcho  = raw[47:40];
    r.status       = raw[39:32];
    r.axisHomeMask = raw[31:24];
    r.errorFlags   = raw[23:16];
    r.parity       = raw[15:8];
    r.tail         = raw[7:0];
    return r;
  endfunction

  // -------- Encoder (struct -> FRAME_BITS) --------
  function automatic logic [FRAME_BITS-1:0] encoder(input move_home_resp_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.status,
      r.axisHomeMask,
      r.errorFlags,
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // -------- Parity --------
  function automatic byte_t calc_parity(input move_home_resp_bytes_t f);
    return f.msgType ^ f.frameIdEcho ^ f.status ^ f.axisHomeMask ^ f.errorFlags;
  endfunction

  function automatic logic check_parity(input move_home_resp_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic move_home_resp_bytes_t set_parity(input move_home_resp_bytes_t in);
    move_home_resp_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // -------- Default seguro --------
  function automatic move_home_resp_bytes_t make_default();
    move_home_resp_bytes_t r;
    r.header       = RESP_HEADER;
    r.msgType      = MOVE_HOME_TYPE;
    r.frameIdEcho  = 8'd0;
    r.status       = 8'd0;
    r.axisHomeMask = 8'd0;
    r.errorFlags   = 8'd0;
    r.parity       = 8'd0;   // ajustado por set_parity()
    r.tail         = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif

