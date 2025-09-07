// -----------------------------------------------------------------------------
// home_status_response_pkg.sv
//
// Frame HOME_STATUS (18B / 144 bits)
// Publica offsets de home (low16) e posições relativas (low16) por eixo.
// Usado como complemento ao término de MOVE_HOME.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AB)
//  1: MsgType(21)            // HOME_STATUS_TYPE
//  2: FrameID_Echo           // eco do MOVE_HOME.frameId
//  3: AxisMask               // eixos envolvidos (ou válidos)
//  4..5: posRelX_lo16        // low16(pos_rel_x)
//  6..7: posRelY_lo16
//  8..9: posRelZ_lo16
// 10..11: homeOffX_lo16      // low16(home_offset_x)
// 12..13: homeOffY_lo16
// 14..15: homeOffZ_lo16
// 16: ParityByte             // bit0 = XOR bytes 1..15; [7:1]=0
// 17: Tail(54)
// -----------------------------------------------------------------------------
`ifndef HOME_STATUS_RESPONSE_PKG_SV
`define HOME_STATUS_RESPONSE_PKG_SV
package home_status_response_pkg;
  import protocol_constants_pkg::*;

  localparam int FRAME_BITS = 18*8; // 144 bits

  typedef struct packed {
    byte_t header;
    byte_t msgType;
    byte_t frameIdEcho;
    byte_t axisMask;
    logic [15:0] posRelX_lo16;
    logic [15:0] posRelY_lo16;
    logic [15:0] posRelZ_lo16;
    logic [15:0] homeOffX_lo16;
    logic [15:0] homeOffY_lo16;
    logic [15:0] homeOffZ_lo16;
    byte_t parityByte;
    byte_t tail;
  } home_status_resp_bytes_t;

  function automatic home_status_resp_bytes_t make_default();
    home_status_resp_bytes_t r;
    r.header       = RESP_HEADER;
    r.msgType      = HOME_STATUS_TYPE;
    r.frameIdEcho  = 8'd0;
    r.axisMask     = 8'd0;
    r.posRelX_lo16 = 16'd0;
    r.posRelY_lo16 = 16'd0;
    r.posRelZ_lo16 = 16'd0;
    r.homeOffX_lo16= 16'd0;
    r.homeOffY_lo16= 16'd0;
    r.homeOffZ_lo16= 16'd0;
    r.parityByte   = 8'd0;
    r.tail         = RESP_TAIL;
    return r;
  endfunction

  function automatic logic [FRAME_BITS-1:0] encoder(input home_status_resp_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.axisMask,
      r.posRelX_lo16[15:8], r.posRelX_lo16[7:0],
      r.posRelY_lo16[15:8], r.posRelY_lo16[7:0],
      r.posRelZ_lo16[15:8], r.posRelZ_lo16[7:0],
      r.homeOffX_lo16[15:8], r.homeOffX_lo16[7:0],
      r.homeOffY_lo16[15:8], r.homeOffY_lo16[7:0],
      r.homeOffZ_lo16[15:8], r.homeOffZ_lo16[7:0],
      r.parityByte,
      r.tail
    };
    return v;
  endfunction

  function automatic logic calc_parity_bit(input home_status_resp_bytes_t f);
    return ^{
      f.msgType,
      f.frameIdEcho,
      f.axisMask,
      f.posRelX_lo16[15:8], f.posRelX_lo16[7:0],
      f.posRelY_lo16[15:8], f.posRelY_lo16[7:0],
      f.posRelZ_lo16[15:8], f.posRelZ_lo16[7:0],
      f.homeOffX_lo16[15:8], f.homeOffX_lo16[7:0],
      f.homeOffY_lo16[15:8], f.homeOffY_lo16[7:0],
      f.homeOffZ_lo16[15:8], f.homeOffZ_lo16[7:0]
    };
  endfunction

  function automatic home_status_resp_bytes_t set_parity(input home_status_resp_bytes_t in);
    home_status_resp_bytes_t r = in;
    r.parityByte = {7'b0, calc_parity_bit(in)};
    return r;
  endfunction

endpackage
`endif

