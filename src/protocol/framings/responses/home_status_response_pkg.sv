// -----------------------------------------------------------------------------
// home_status_response_pkg.sv
//
// Frame RESPONSE HOME_STATUS (18B / 144 bits)
// Publica offsets de homing e posição relativa dos eixos.
// Layout:
//  0: Header(AB)
//  1: MsgType(21)
//  2: FrameID_Echo
//  3: AxisMask (b0=X, b1=Y, b2=Z) indica eixos com offset válido
//  4-5 : posRelX_lo16
//  6-7 : posRelY_lo16
//  8-9 : posRelZ_lo16
// 10-11: homeOffX_lo16
// 12-13: homeOffY_lo16
// 14-15: homeOffZ_lo16
// 16: Parity (XOR bytes 1..15)
// 17: Tail(54)
// -----------------------------------------------------------------------------
`ifndef HOME_STATUS_RESPONSE_PKG_SV
`define HOME_STATUS_RESPONSE_PKG_SV
package home_status_response_pkg;

  import protocol_constants_pkg::*;

  localparam int FRAME_BITS = 144;

  typedef struct packed {
    byte_t header;
    byte_t msgType;
    byte_t frameIdEcho;
    byte_t axisMask;
    byte_t posRelX_hi; byte_t posRelX_lo;
    byte_t posRelY_hi; byte_t posRelY_lo;
    byte_t posRelZ_hi; byte_t posRelZ_lo;
    byte_t homeOffX_hi; byte_t homeOffX_lo;
    byte_t homeOffY_hi; byte_t homeOffY_lo;
    byte_t homeOffZ_hi; byte_t homeOffZ_lo;
    byte_t parity;
    byte_t tail;
  } home_status_resp_bytes_t;

  // Decoder
  function automatic home_status_resp_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    home_status_resp_bytes_t r;
    r.header      = raw[143:136];
    r.msgType     = raw[135:128];
    r.frameIdEcho = raw[127:120];
    r.axisMask    = raw[119:112];
    r.posRelX_hi  = raw[111:104]; r.posRelX_lo  = raw[103:96];
    r.posRelY_hi  = raw[95:88];   r.posRelY_lo  = raw[87:80];
    r.posRelZ_hi  = raw[79:72];   r.posRelZ_lo  = raw[71:64];
    r.homeOffX_hi = raw[63:56];   r.homeOffX_lo = raw[55:48];
    r.homeOffY_hi = raw[47:40];   r.homeOffY_lo = raw[39:32];
    r.homeOffZ_hi = raw[31:24];   r.homeOffZ_lo = raw[23:16];
    r.parity      = raw[15:8];
    r.tail        = raw[7:0];
    return r;
  endfunction

  // Encoder
  function automatic logic [FRAME_BITS-1:0] encoder(input home_status_resp_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.axisMask,
      r.posRelX_hi, r.posRelX_lo,
      r.posRelY_hi, r.posRelY_lo,
      r.posRelZ_hi, r.posRelZ_lo,
      r.homeOffX_hi, r.homeOffX_lo,
      r.homeOffY_hi, r.homeOffY_lo,
      r.homeOffZ_hi, r.homeOffZ_lo,
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // Parity
  function automatic byte_t calc_parity(input home_status_resp_bytes_t f);
    return f.msgType ^ f.frameIdEcho ^ f.axisMask ^
           f.posRelX_hi ^ f.posRelX_lo ^
           f.posRelY_hi ^ f.posRelY_lo ^
           f.posRelZ_hi ^ f.posRelZ_lo ^
           f.homeOffX_hi ^ f.homeOffX_lo ^
           f.homeOffY_hi ^ f.homeOffY_lo ^
           f.homeOffZ_hi ^ f.homeOffZ_lo;
  endfunction

  function automatic logic check_parity(input home_status_resp_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic home_status_resp_bytes_t set_parity(input home_status_resp_bytes_t in);
    home_status_resp_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // Default
  function automatic home_status_resp_bytes_t make_default();
    home_status_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = HOME_STATUS_TYPE;
    r.frameIdEcho = 8'd0;
    r.axisMask    = 8'd0;
    r.posRelX_hi  = 8'd0; r.posRelX_lo  = 8'd0;
    r.posRelY_hi  = 8'd0; r.posRelY_lo  = 8'd0;
    r.posRelZ_hi  = 8'd0; r.posRelZ_lo  = 8'd0;
    r.homeOffX_hi = 8'd0; r.homeOffX_lo = 8'd0;
    r.homeOffY_hi = 8'd0; r.homeOffY_lo = 8'd0;
    r.homeOffZ_hi = 8'd0; r.homeOffZ_lo = 8'd0;
    r.parity      = 8'd0;
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif
