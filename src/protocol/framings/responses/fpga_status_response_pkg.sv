// -----------------------------------------------------------------------------
// response_fpga_status_pkg.sv
//
// Frame FPGA_STATUS_RESPONSE (12B).
//
// Layout (Big-Endian por byte; 96 bits):
//  [95:88] Header           = RESP_HEADER
//  [87:80] MsgType          = FPGA_STATUS_TYPE
//  [79:72] FrameID_Echo
//  [71:64] Status           = 0=OK, 1=ERR
//  [63:56] State            = 0=Idle,1=Running,2=Error,3=Busy
//  [55:48] Mode             = 0=Idle,1=Move,2=Read,3=Write,4=Home,5=Probe
//  [47:16] FirmwareVersion  = uint32 BE (6..9)
//  [15:8 ] ParityByte       = {7'b0, parity_bit}  (bit0 carrega a paridade)
//                            parity_bit = XOR de todos os bits dos bytes 1..9
//  [7 :0 ] Tail             = RESP_TAIL
//
// Funções:
//   - decoder         : [95:0] -> struct
//   - encoder         : struct  -> [95:0]
//   - calc_parity_bit : XOR dos bytes 1..9 (msgType..fwVersion[7:0])
//   - check_parity    : confere ParityByte[0] com o cálculo
//   - set_parity      : ajusta ParityByte = {7'b0, calc_parity_bit()}
//   - make_default    : struct padrão segura
// -----------------------------------------------------------------------------
`ifndef FPGA_STATUS_RESPONSE_PKG_SV
`define FPGA_STATUS_RESPONSE_PKG_SV
package fpga_status_response_pkg;

  import protocol_constants_pkg::*; // RESP_HEADER/TAIL, FPGA_STATUS_TYPE, byte_t

  typedef struct packed {
    byte_t header;        // RESP_HEADER (0xAB)
    byte_t msgType;       // FPGA_STATUS_TYPE (0x20)
    byte_t frameIdEcho;   // eco do request
    byte_t status;        // 0=OK, 1=ERR
    byte_t state;         // 0=Idle,1=Running,2=Error,3=Busy
    byte_t mode;          // 0=Idle,1=Move,2=Read,3=Write,4=Home,5=Probe
    logic [31:0] fwVersion; // uint32 (Big-Endian por byte)
    byte_t parityByte;    // bit0 = paridade; [7:1] = 0
    byte_t tail;          // RESP_TAIL (0x54)
  } response_fpga_status_bytes_t;

  // Converte vetor bruto (96b) em struct
  function automatic response_fpga_status_bytes_t decoder(input logic [95:0] raw);
    response_fpga_status_bytes_t r;
    r.header      = raw[95:88];
    r.msgType     = raw[87:80];
    r.frameIdEcho = raw[79:72];
    r.status      = raw[71:64];
    r.state       = raw[63:56];
    r.mode        = raw[55:48];
    r.fwVersion   = { raw[47:40], raw[39:32], raw[31:24], raw[23:16] };
    r.parityByte  = raw[15:8];
    r.tail        = raw[7:0];
    return r;
  endfunction

  // Monta vetor bruto (96b) a partir da struct
  function automatic logic [95:0] encoder(input response_fpga_status_bytes_t r);
    return {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.status,
      r.state,
      r.mode,
      r.fwVersion[31:24], r.fwVersion[23:16], r.fwVersion[15:8], r.fwVersion[7:0],
      r.parityByte,
      r.tail
    };
  endfunction

  // XOR de todos os bits dos bytes 1..9
  function automatic logic calc_parity_bit(input response_fpga_status_bytes_t frame);
    return ^{
      frame.msgType,
      frame.frameIdEcho,
      frame.status,
      frame.state,
      frame.mode,
      frame.fwVersion[31:24],
      frame.fwVersion[23:16],
      frame.fwVersion[15:8],
      frame.fwVersion[7:0]
    };
  endfunction

  // Confere se ParityByte[0] == calc_parity_bit()
  function automatic logic check_parity(input response_fpga_status_bytes_t frame);
    return (frame.parityByte[0] == calc_parity_bit(frame));
  endfunction

  // Ajusta ParityByte = {7'b0, calc_parity_bit()}
  function automatic response_fpga_status_bytes_t set_parity(input response_fpga_status_bytes_t frame_in);
    response_fpga_status_bytes_t r = frame_in;
    r.parityByte = {7'b0, calc_parity_bit(frame_in)};
    return r;
  endfunction

  // Inicialização segura (valores padrão coerentes)
  function automatic response_fpga_status_bytes_t make_default();
    response_fpga_status_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = FPGA_STATUS_TYPE;
    r.frameIdEcho = '0;
    r.status      = 8'd0;
    r.state       = 8'd0;
    r.mode        = 8'd0;
    r.fwVersion   = 32'h0001_0000; // exemplo: v1.0.0
    r.parityByte  = 8'd0;          // será ajustado por set_parity()
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif
