// -----------------------------------------------------------------------------
// move_queue_response_pkg.sv
//
// Frame RESPONSE MOVE_QUEUE_ADD_ACK (6B / 48 bits)
// Confirma se o item de MOVE (fila de movimentos) foi salvo/enfileirado.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AB)
//  1: MsgType(01)     // mesmo tipo do comando MOVE
//  2: FrameID_Echo    // eco do item salvo
//  3: Status          // 0=OK, 1=ERR
//  4: ParityByte      // bit0 = XOR(bytes 1..3); [7:1]=0
//  5: Tail(54)
//
// Observações:
// - Paridade confere integridade do trio {MsgType, FrameID_Echo, Status}.
// - Status=OK confirma que o item entrou na fila com sucesso.
// - Status=ERR indica falha (fila cheia, parâmetros inválidos, etc).
// -----------------------------------------------------------------------------
`ifndef MOVE_QUEUE_ADD_RESPONSE_PKG_SV
`define MOVE_QUEUE_ADD_RESPONSE_PKG_SV
package move_queue_add_response_pkg;

  import protocol_constants_pkg::*; // RESP_HEADER/RESP_TAIL, byte_t
  import bytes_util_pkg::*;         // get_byte()

  // Largura total do vetor serializado em BITS (6 bytes = 48 bits)
  parameter int FRAME_BITS = 48;


  typedef struct packed {
    byte_t header;        // RESP_HEADER (0xAB)
    byte_t msgType;       // MOVE_TYPE (0x01)
    byte_t frameIdEcho;   // eco do request
    byte_t status;        // 0=OK, 1=ERR
    byte_t parityByte;    // bit0 = paridade; [7:1]=0
    byte_t tail;          // RESP_TAIL (0x54)
  } move_queue_add_resp_bytes_t;

  // -------- Decoder (FRAME_BITS -> struct) --------
  function automatic move_queue_add_resp_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    move_queue_add_resp_bytes_t r;
    r.header      = get_byte#(FRAME_BITS)(raw, 0);
    r.msgType     = get_byte#(FRAME_BITS)(raw, 1);
    r.frameIdEcho = get_byte#(FRAME_BITS)(raw, 2);
    r.status      = get_byte#(FRAME_BITS)(raw, 3);
    r.parityByte  = get_byte#(FRAME_BITS)(raw, 4);
    r.tail        = get_byte#(FRAME_BITS)(raw, 5);
    return r;
  endfunction

  // -------- Encoder (struct -> FRAME_BITS) --------
  function automatic logic [FRAME_BITS-1:0] encoder(input move_queue_add_resp_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.status,
      r.parityByte,
      r.tail
    };
    return v;
  endfunction

  // -------- Paridade (XOR de todos os bits dos bytes 1..3) --------
  function automatic logic calc_parity_bit(input move_queue_add_resp_bytes_t f);
    return ^{ f.msgType, f.frameIdEcho, f.status };
  endfunction

  function automatic logic check_parity(input move_queue_add_resp_bytes_t f);
    return (f.parityByte[0] == calc_parity_bit(f));
  endfunction

  function automatic move_queue_add_resp_bytes_t set_parity(input move_queue_add_resp_bytes_t in);
    move_queue_add_resp_bytes_t r = in;
    r.parityByte = {7'b0, calc_parity_bit(in)};
    return r;
  endfunction

  // -------- Default seguro --------
  function automatic move_queue_add_resp_bytes_t make_default_ok(input byte_t id_echo = 8'd0);
    move_queue_add_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = MOVE_TYPE;
    r.frameIdEcho = id_echo;
    r.status      = 8'd0;        // OK
    r.parityByte  = 8'd0;        // ajustado por set_parity()
    r.tail        = RESP_TAIL;
    return r;
  endfunction

  function automatic move_queue_add_resp_bytes_t make_default_err(input byte_t id_echo = 8'd0);
    move_queue_add_resp_bytes_t r;
    r.header      = RESP_HEADER;
    r.msgType     = MOVE_TYPE;
    r.frameIdEcho = id_echo;
    r.status      = 8'd1;        // ERR
    r.parityByte  = 8'd0;        // ajustado por set_parity()
    r.tail        = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif
