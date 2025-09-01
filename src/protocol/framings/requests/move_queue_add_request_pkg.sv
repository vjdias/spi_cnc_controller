// -----------------------------------------------------------------------------
// move_queue_request_pkg.sv
//
// Frame REQUEST ADD MOVE (44B / 352 bits) — **Fila de movimentos (Move Queue)**
//
// Contexto de uso (queue):
// - Cada frame é um item da fila de movimentos.
// - O host pode enviar múltiplos frames MOVE em sequência.
// - O FPGA enfileira (FIFO) e executa na ordem recebida.
// - O campo FrameID atua como "tag" de cada item na fila.
// - DirMask define quais eixos se movem e em qual direção.
// - Velocidades, contagens e PID são capturados por item.
// - ParityByte garante integridade (XOR dos bytes 1..39).
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AA)   1: Cmd(01)   2: FrameID(tag)  3: DirMask
//  4..5: Vx        6..9: Sx
// 10..11: Vy      12..15: Sy
// 16..17: Vz      18..21: Sz
// 22..23: Kp_x    24..25: Ki_x   26..27: Kd_x
// 28..29: Kp_y    30..31: Ki_y   32..33: Kd_y
// 34..35: Kp_z    36..37: Ki_z   38..39: Kd_z
// 40: ParityByte (bit0 = XOR bytes 1..39; [7:1]=0)
// 41: Tail(55)
// -----------------------------------------------------------------------------
`ifndef MOVE_QUEUE_ADD_REQUEST_PKG_SV
`define MOVE_QUEUE_ADD_REQUEST_PKG_SV
package move_queue_add_request_pkg;

  import protocol_constants_pkg::*; // REQ_HEADER/REQ_TAIL, byte_t

  // Largura total do vetor serializado em BITS (42 bytes = 336 bits)
  localparam int FRAME_BITS = 336;


  typedef struct packed {
    byte_t header;        // REQ_HEADER
    byte_t msgType;       // MOVE_TYPE (0x01)
    byte_t frameId;       // 0..255 (tag do item na fila)
    byte_t dirMask;       // b0=X, b1=Y, b2=Z (1=positivo,0=negativo)

    // Velocidades/contagens (X,Y,Z)
    logic [15:0] vx;      // uint16
    logic [31:0] sx;      // uint32
    logic [15:0] vy;
    logic [31:0] sy;
    logic [15:0] vz;
    logic [31:0] sz;

    // Parâmetros PID (X, Y, Z)
    logic [15:0] kp_x, ki_x, kd_x;
    logic [15:0] kp_y, ki_y, kd_y;
    logic [15:0] kp_z, ki_z, kd_z;

    // Paridade (byte, usa apenas bit0)
    byte_t parityByte;
    byte_t tail;          // REQ_TAIL
  } move_queue_add_req_bytes_t;

  // -------- Decoder (FRAME_BITS -> struct) --------
  function automatic move_queue_add_req_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    move_queue_add_req_bytes_t r;

    r.header   = raw[335:328];
    r.msgType  = raw[327:320];
    r.frameId  = raw[319:312];
    r.dirMask  = raw[311:304];

    r.vx = raw[303:288];
    r.sx = raw[287:256];

    r.vy = raw[255:240];
    r.sy = raw[239:208];

    r.vz = raw[207:192];
    r.sz = raw[191:160];

    r.kp_x = raw[159:144];
    r.ki_x = raw[143:128];
    r.kd_x = raw[127:112];

    r.kp_y = raw[111:96];
    r.ki_y = raw[95:80];
    r.kd_y = raw[79:64];

    r.kp_z = raw[63:48];
    r.ki_z = raw[47:32];
    r.kd_z = raw[31:16];

    r.parityByte = raw[15:8];
    r.tail       = raw[7:0];
    return r;
  endfunction

  // -------- Encoder (struct -> FRAME_BITS) --------
  function automatic logic [FRAME_BITS-1:0] encoder(input move_queue_add_req_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header, r.msgType, r.frameId, r.dirMask,
      r.vx[15:8], r.vx[7:0],
      r.sx[31:24], r.sx[23:16], r.sx[15:8], r.sx[7:0],
      r.vy[15:8], r.vy[7:0],
      r.sy[31:24], r.sy[23:16], r.sy[15:8], r.sy[7:0],
      r.vz[15:8], r.vz[7:0],
      r.sz[31:24], r.sz[23:16], r.sz[15:8], r.sz[7:0],
      r.kp_x[15:8], r.kp_x[7:0],
      r.ki_x[15:8], r.ki_x[7:0],
      r.kd_x[15:8], r.kd_x[7:0],
      r.kp_y[15:8], r.kp_y[7:0],
      r.ki_y[15:8], r.ki_y[7:0],
      r.kd_y[15:8], r.kd_y[7:0],
      r.kp_z[15:8], r.kp_z[7:0],
      r.ki_z[15:8], r.ki_z[7:0],
      r.kd_z[15:8], r.kd_z[7:0],
      r.parityByte,
      r.tail
    };
    return v;
  endfunction

  // -------- Paridade (XOR de todos os bits dos bytes 1..39) --------
  function automatic logic calc_parity_bit(input move_queue_add_req_bytes_t f);
    return ^{
      f.msgType, f.frameId, f.dirMask,
      f.vx[15:8], f.vx[7:0],
      f.sx[31:24], f.sx[23:16], f.sx[15:8], f.sx[7:0],
      f.vy[15:8], f.vy[7:0],
      f.sy[31:24], f.sy[23:16], f.sy[15:8], f.sy[7:0],
      f.vz[15:8], f.vz[7:0],
      f.sz[31:24], f.sz[23:16], f.sz[15:8], f.sz[7:0],
      f.kp_x[15:8], f.kp_x[7:0], f.ki_x[15:8], f.ki_x[7:0], f.kd_x[15:8], f.kd_x[7:0],
      f.kp_y[15:8], f.kp_y[7:0], f.ki_y[15:8], f.ki_y[7:0], f.kd_y[15:8], f.kd_y[7:0],
      f.kp_z[15:8], f.kp_z[7:0], f.ki_z[15:8], f.ki_z[7:0], f.kd_z[15:8], f.kd_z[7:0]
    };
  endfunction

  function automatic logic check_parity(input move_queue_add_req_bytes_t f);
    return (f.parityByte[0] == calc_parity_bit(f));
  endfunction

  function automatic move_queue_add_req_bytes_t set_parity(input move_queue_add_req_bytes_t in);
    move_queue_add_req_bytes_t r = in;
    r.parityByte = {7'b0, calc_parity_bit(in)};
    return r;
  endfunction

  // -------- Default seguro (item "vazio" para fila) --------
  function automatic move_queue_add_req_bytes_t make_default();
    move_queue_add_req_bytes_t r;
    r.header   = REQ_HEADER;
    r.msgType  = MOVE_TYPE;
    r.frameId  = 8'd0;     // recomendável usar sequência monotônica no host
    r.dirMask  = 8'd0;

    r.vx = '0; r.sx = '0;
    r.vy = '0; r.sy = '0;
    r.vz = '0; r.sz = '0;

    r.kp_x = '0; r.ki_x = '0; r.kd_x = '0;
    r.kp_y = '0; r.ki_y = '0; r.kd_y = '0;
    r.kp_z = '0; r.ki_z = '0; r.kd_z = '0;

    r.parityByte = 8'd0;
    r.tail       = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif
