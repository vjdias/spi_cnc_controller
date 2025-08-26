// -----------------------------------------------------------------------------
// move_queue_status_response_pkg.sv
//
// Frame RESPONSE MOVE_QUEUE_STATUS (12B / 96 bits)
// Reporta o status do movimento ATUAL (item em execução na fila).
//
// Campos:
// - frameIdEcho : eco do FrameID do MOVE em execução.
// - status      : 0=Running, 1=Idle, 2=Error, 3=Completed.
// - pidErrX/Y/Z : códigos de erro PID por eixo (0=OK; outros = falhas/limites).
// - pctX/Y/Z    : 0..100 (%) do trajeto concluído em cada eixo.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AB)
//  1: MsgType(02)            // MOVE_QUEUE_STATUS_TYPE
//  2: FrameID_Echo           // ID do item da fila em execução
//  3: Status                 // 0=Running,1=Idle,2=Error,3=Completed
//  4: PidErrX
//  5: PidErrY
//  6: PidErrZ
//  7: PctX (0..100 recomendado)
//  8: PctY (0..100 recomendado)
//  9: PctZ (0..100 recomendado)
// 10: ParityByte             // bit0 = XOR(bytes 1..9); [7:1]=0
// 11: Tail(54)
// -----------------------------------------------------------------------------
`ifndef MOVE_QUEUE_STATUS_RESPONSE_PKG_SV
`define MOVE_QUEUE_STATUS_RESPONSE_PKG_SV
package move_queue_status_response_pkg;

  import protocol_constants_pkg::*; // RESP_HEADER/RESP_TAIL, byte_t

  typedef struct packed {
    byte_t header;       // RESP_HEADER (0xAB)
    byte_t msgType;      // MOVE_QUEUE_STATUS_TYPE (0x02)
    byte_t frameIdEcho;  // eco do request.frameId
    byte_t status;       // 0=Running,1=Idle,2=Error,3=Completed
    byte_t pidErrX;      // 0=OK; demais: códigos de erro PID eixo X
    byte_t pidErrY;      // idem Y
    byte_t pidErrZ;      // idem Z
    byte_t pctX;         // 0..100 (% concluído) — recomendado
    byte_t pctY;         // 0..100
    byte_t pctZ;         // 0..100
    byte_t parityByte;   // bit0 = paridade; [7:1] = 0
    byte_t tail;         // RESP_TAIL (0x54)
  } move_queue_status_resp_bytes_t;

  // Decoder (96b -> struct)
  function automatic move_queue_status_resp_bytes_t decoder(input logic [95:0] raw);
    move_queue_status_resp_bytes_t r;
    r.header      = raw[95:88];
    r.msgType     = raw[87:80];
    r.frameIdEcho = raw[79:72];
    r.status      = raw[71:64];
    r.pidErrX     = raw[63:56];
    r.pidErrY     = raw[55:48];
    r.pidErrZ     = raw[47:40];
    r.pctX        = raw[39:32];
    r.pctY        = raw[31:24];
    r.pctZ        = raw[23:16];
    r.parityByte  = raw[15:8];
    r.tail        = raw[7:0];
    return r;
  endfunction

  // Encoder (struct -> 96b)
  function automatic logic [95:0] encoder(input move_queue_status_resp_bytes_t r);
    return {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.status,
      r.pidErrX, r.pidErrY, r.pidErrZ,
      r.pctX, r.pctY, r.pctZ,
      r.parityByte,
      r.tail
    };
  endfunction

  // Paridade (XOR de todos os bits dos bytes 1..9)
  function automatic logic calc_parity_bit(input move_queue_status_resp_bytes_t f);
    return ^{
      f.msgType,
      f.frameIdEcho,
      f.status,
      f.pidErrX, f.pidErrY, f.pidErrZ,
      f.pctX, f.pctY, f.pctZ
    };
  endfunction

  function automatic logic check_parity(input move_queue_status_resp_bytes_t f);
    return (f.parityByte[0] == calc_parity_bit(f));
  endfunction

  function automatic move_queue_status_resp_bytes_t set_parity(input move_queue_status_resp_bytes_t in);
    move_queue_status_resp_bytes_t r = in;
    r.parityByte = {7'b0, calc_parity_bit(in)};
    return r;
  endfunction

  // Defaults seguros
  function automatic move_queue_status_resp_bytes_t make_default();
    move_queue_status_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = MOVE_QUEUE_STATUS_TYPE;
    r.frameIdEcho = 8'd0;
    r.status      = 8'd1;   // Idle por padrão
    r.pidErrX     = 8'd0;
    r.pidErrY     = 8'd0;
    r.pidErrZ     = 8'd0;
    r.pctX        = 8'd0;
    r.pctY        = 8'd0;
    r.pctZ        = 8'd0;
    r.parityByte  = 8'd0;   // ajustado por set_parity()
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif
