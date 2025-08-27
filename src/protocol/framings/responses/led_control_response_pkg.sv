// -----------------------------------------------------------------------------
// led_control_response_pkg.sv
//
// Frame RESPONSE LED_CTRL (7B / 56 bits)
// Confirma alteração de LEDs ou reporta erro de LED inexistente.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AB)
//  1: MsgType(07)       // LED_CTRL_TYPE
//  2: FrameID_Echo      // eco do request
//  3: LedMaskEcho       // máscara recebida
//  4: Status            // 0=OK,1=ERR_LED
//  5: Parity            // XOR bytes 1..4
//  6: Tail(54)
// -----------------------------------------------------------------------------
`ifndef LED_CONTROL_RESPONSE_PKG_SV
`define LED_CONTROL_RESPONSE_PKG_SV
package led_control_response_pkg;
  import protocol_constants_pkg::*;

  parameter int FRAME_BITS = 56;

  typedef struct packed {
    byte_t header;       // RESP_HEADER (0xAB)
    byte_t msgType;      // LED_CTRL_TYPE (0x07)
    byte_t frameIdEcho;  // eco do request
    byte_t ledMask;      // máscara devolvida
    byte_t status;       // 0=OK,1=LED inválido
    byte_t parity;       // XOR bytes 1..4
    byte_t tail;         // RESP_TAIL (0x54)
  } led_ctrl_resp_bytes_t;

  // -------- Decoder --------
  function automatic led_ctrl_resp_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    led_ctrl_resp_bytes_t r;
    r.header      = raw[55:48];
    r.msgType     = raw[47:40];
    r.frameIdEcho = raw[39:32];
    r.ledMask     = raw[31:24];
    r.status      = raw[23:16];
    r.parity      = raw[15:8];
    r.tail        = raw[7:0];
    return r;
  endfunction

  // -------- Encoder --------
  function automatic logic [FRAME_BITS-1:0] encoder(input led_ctrl_resp_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.ledMask,
      r.status,
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // -------- Parity --------
  function automatic byte_t calc_parity(input led_ctrl_resp_bytes_t f);
    return f.msgType ^ f.frameIdEcho ^ f.ledMask ^ f.status;
  endfunction

  function automatic logic check_parity(input led_ctrl_resp_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic led_ctrl_resp_bytes_t set_parity(input led_ctrl_resp_bytes_t in);
    led_ctrl_resp_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // -------- Default seguro --------
  function automatic led_ctrl_resp_bytes_t make_default();
    led_ctrl_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = LED_CTRL_TYPE;
    r.frameIdEcho = 8'd0;
    r.ledMask     = 8'd0;
    r.status      = 8'd0;
    r.parity      = 8'd0;   // ajustado por set_parity()
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif
