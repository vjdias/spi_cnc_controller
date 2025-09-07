// -----------------------------------------------------------------------------
// home_status_response_pkg.sv
//
// Frame RESPONSE HOME_STATUS (18B / 144 bits)
// Reporta o status de homing e offsets capturados por eixo.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AB)
//  1: MsgType(21)         // HOME_STATUS_TYPE
//  2: FrameID_Echo        // eco do request
//  3: AxisMask            // b0=X, b1=Y, b2=Z válidos
//  4: PosRelX[15:8]
//  5: PosRelX[7:0]
//  6: HomeOffX[15:8]
//  7: HomeOffX[7:0]
//  8: PosRelY[15:8]
//  9: PosRelY[7:0]
// 10: HomeOffY[15:8]
// 11: HomeOffY[7:0]
// 12: PosRelZ[15:8]
// 13: PosRelZ[7:0]
// 14: HomeOffZ[15:8]
// 15: HomeOffZ[7:0]
// 16: Parity             // XOR bytes 1..15
// 17: Tail(54)
// -----------------------------------------------------------------------------
`ifndef HOME_STATUS_RESPONSE_PKG_SV
`define HOME_STATUS_RESPONSE_PKG_SV
package home_status_response_pkg;

  import protocol_constants_pkg::*;

  localparam int FRAME_BITS = 144;

  typedef struct packed {
    byte_t header;      // RESP_HEADER (0xAB)
    byte_t msgType;     // HOME_STATUS_TYPE (0x21)
    byte_t frameIdEcho; // eco do request
    byte_t axisMask;    // eixos com home válido
    logic [15:0] posRelX;
    logic [15:0] homeOffX;
    logic [15:0] posRelY;
    logic [15:0] homeOffY;
    logic [15:0] posRelZ;
    logic [15:0] homeOffZ;
    byte_t parity;      // XOR bytes 1..15
    byte_t tail;        // RESP_TAIL (0x54)
  } home_status_resp_bytes_t;

  // Decoder (FRAME_BITS -> struct)
  function automatic home_status_resp_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    home_status_resp_bytes_t r;
    r.header      = raw[143:136];
    r.msgType     = raw[135:128];
    r.frameIdEcho = raw[127:120];
    r.axisMask    = raw[119:112];
    r.posRelX     = raw[111:96];
    r.homeOffX    = raw[95:80];
    r.posRelY     = raw[79:64];
    r.homeOffY    = raw[63:48];
    r.posRelZ     = raw[47:32];
    r.homeOffZ    = raw[31:16];
    r.parity      = raw[15:8];
    r.tail        = raw[7:0];
    return r;
  endfunction

  // Encoder (struct -> FRAME_BITS)
  function automatic logic [FRAME_BITS-1:0] encoder(input home_status_resp_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.axisMask,
      r.posRelX,
      r.homeOffX,
      r.posRelY,
      r.homeOffY,
      r.posRelZ,
      r.homeOffZ,
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // Parity
  function automatic byte_t calc_parity(input home_status_resp_bytes_t f);
    return f.msgType ^ f.frameIdEcho ^ f.axisMask ^
           f.posRelX[15:8] ^ f.posRelX[7:0] ^
           f.homeOffX[15:8] ^ f.homeOffX[7:0] ^
           f.posRelY[15:8] ^ f.posRelY[7:0] ^
           f.homeOffY[15:8] ^ f.homeOffY[7:0] ^
           f.posRelZ[15:8] ^ f.posRelZ[7:0] ^
           f.homeOffZ[15:8] ^ f.homeOffZ[7:0];
  endfunction

  function automatic logic check_parity(input home_status_resp_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic home_status_resp_bytes_t set_parity(input home_status_resp_bytes_t in);
    home_status_resp_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // Default seguro
  function automatic home_status_resp_bytes_t make_default();
    home_status_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = HOME_STATUS_TYPE;
    r.frameIdEcho = 8'd0;
    r.axisMask    = 8'd0;
    r.posRelX     = 16'd0;
    r.homeOffX    = 16'd0;
    r.posRelY     = 16'd0;
    r.homeOffY    = 16'd0;
    r.posRelZ     = 16'd0;
    r.homeOffZ    = 16'd0;
    r.parity      = 8'd0; // ajustado por set_parity
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif
