// -----------------------------------------------------------------------------
// led_control_request_pkg.sv
//
// Frame REQUEST LED_CTRL (7B / 56 bits)
// Controla o estado de até 6 LEDs discretos.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AA)
//  1: MsgType(07)      // LED_CTRL_TYPE
//  2: FrameID          // identificador do host
//  3: LedMask          // b0..b5 representam LED0..LED5
//  4: LedValue         // 1=acende bits do mask, 0=apaga
//  5: Parity           // XOR bytes 1..4
//  6: Tail(55)
// -----------------------------------------------------------------------------
`ifndef LED_CONTROL_REQUEST_PKG_SV
`define LED_CONTROL_REQUEST_PKG_SV
package led_control_request_pkg;
  import protocol_constants_pkg::*;

  localparam int FRAME_BITS = 56;

  typedef struct packed {
    byte_t header;    // REQ_HEADER (0xAA)
    byte_t msgType;   // LED_CTRL_TYPE (0x07)
    byte_t frameId;   // tag do host
    byte_t ledMask;   // quais LEDs alterar
    byte_t ledValue;  // 1=acende,0=apaga
    byte_t parity;    // XOR bytes 1..4
    byte_t tail;      // REQ_TAIL (0x55)
  } led_ctrl_req_bytes_t;

  // -------- Decoder (FRAME_BITS -> struct) --------
  function automatic led_ctrl_req_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    led_ctrl_req_bytes_t r;
    r.header   = raw[55:48];
    r.msgType  = raw[47:40];
    r.frameId  = raw[39:32];
    r.ledMask  = raw[31:24];
    r.ledValue = raw[23:16];
    r.parity   = raw[15:8];
    r.tail     = raw[7:0];
    return r;
  endfunction

  // -------- Encoder (struct -> FRAME_BITS) --------
  function automatic logic [FRAME_BITS-1:0] encoder(input led_ctrl_req_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameId,
      r.ledMask,
      r.ledValue,
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // -------- Parity --------
  function automatic byte_t calc_parity(input led_ctrl_req_bytes_t f);
    return f.msgType ^ f.frameId ^ f.ledMask ^ f.ledValue;
  endfunction

  function automatic logic check_parity(input led_ctrl_req_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic led_ctrl_req_bytes_t set_parity(input led_ctrl_req_bytes_t in);
    led_ctrl_req_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // -------- Default seguro --------
  function automatic led_ctrl_req_bytes_t make_default();
    led_ctrl_req_bytes_t r;
    r.header   = REQ_HEADER;
    r.msgType  = LED_CTRL_TYPE;
    r.frameId  = 8'd0;
    r.ledMask  = 8'd0;
    r.ledValue = 8'd0;
    r.parity   = 8'd0;   // ajustado por set_parity()
    r.tail     = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif
