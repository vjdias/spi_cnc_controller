// -----------------------------------------------------------------------------
// move_probe_level_response_pkg.sv
//
// Frame RESPONSE MOVE_PROBE_LEVEL (20B / 160 bits)
// Retorna posições quando o probe dispara.
//
// Layout (Big-Endian por byte; offsets em bytes):
//  0: Header(AB)
//  1: MsgType(05)        // MOVE_PROBE_LEVEL_TYPE
//  2: FrameID_Echo       // eco do request
//  3: Status             // 0=OK,1=BUSY,2=ERR_TIMEOUT,3=ERR_SENSOR
//  4: AxisDoneMask       // b0=X, b1=Y, b2=Z
//  5: ErrorFlags         // flags de erro
//  6..9:  LatchedPos_X   // uint32 BE
// 10..13: LatchedPos_Y   // uint32 BE
// 14..17: LatchedPos_Z   // uint32 BE
// 18: Parity             // XOR bytes 1..17
// 19: Tail(54)
// -----------------------------------------------------------------------------
`ifndef MOVE_PROBE_LEVEL_RESPONSE_PKG_SV
`define MOVE_PROBE_LEVEL_RESPONSE_PKG_SV
package move_probe_level_response_pkg;

  import protocol_constants_pkg::*;

  localparam int FRAME_BITS = 160;

  typedef struct packed {
    byte_t header;         // RESP_HEADER (0xAB)
    byte_t msgType;        // MOVE_PROBE_LEVEL_TYPE (0x05)
    byte_t frameIdEcho;    // eco do request
    byte_t status;         // 0=OK,1=BUSY,2=ERR_TIMEOUT,3=ERR_SENSOR
    byte_t axisDoneMask;   // eixos sondados com sucesso
    byte_t errorFlags;     // flags de erro
    logic [31:0] latchedPosX; // posição X capturada
    logic [31:0] latchedPosY; // posição Y capturada
    logic [31:0] latchedPosZ; // posição Z capturada
    byte_t parity;         // XOR bytes 1..17
    byte_t tail;           // RESP_TAIL (0x54)
  } move_probe_level_resp_bytes_t;

  // -------- Decoder (FRAME_BITS -> struct) --------
  function automatic move_probe_level_resp_bytes_t decoder(input logic [FRAME_BITS-1:0] raw);
    move_probe_level_resp_bytes_t r;
    r.header       = raw[159:152];
    r.msgType      = raw[151:144];
    r.frameIdEcho  = raw[143:136];
    r.status       = raw[135:128];
    r.axisDoneMask = raw[127:120];
    r.errorFlags   = raw[119:112];
    r.latchedPosX  = raw[111:80];
    r.latchedPosY  = raw[79:48];
    r.latchedPosZ  = raw[47:16];
    r.parity       = raw[15:8];
    r.tail         = raw[7:0];
    return r;
  endfunction

  // -------- Encoder (struct -> FRAME_BITS) --------
  function automatic logic [FRAME_BITS-1:0] encoder(input move_probe_level_resp_bytes_t r);
    logic [FRAME_BITS-1:0] v;
    v = {
      r.header,
      r.msgType,
      r.frameIdEcho,
      r.status,
      r.axisDoneMask,
      r.errorFlags,
      r.latchedPosX[31:24], r.latchedPosX[23:16], r.latchedPosX[15:8], r.latchedPosX[7:0],
      r.latchedPosY[31:24], r.latchedPosY[23:16], r.latchedPosY[15:8], r.latchedPosY[7:0],
      r.latchedPosZ[31:24], r.latchedPosZ[23:16], r.latchedPosZ[15:8], r.latchedPosZ[7:0],
      r.parity,
      r.tail
    };
    return v;
  endfunction

  // -------- Parity --------
  function automatic byte_t calc_parity(input move_probe_level_resp_bytes_t f);
    return f.msgType ^ f.frameIdEcho ^ f.status ^ f.axisDoneMask ^ f.errorFlags ^
           f.latchedPosX[31:24] ^ f.latchedPosX[23:16] ^ f.latchedPosX[15:8] ^ f.latchedPosX[7:0] ^
           f.latchedPosY[31:24] ^ f.latchedPosY[23:16] ^ f.latchedPosY[15:8] ^ f.latchedPosY[7:0] ^
           f.latchedPosZ[31:24] ^ f.latchedPosZ[23:16] ^ f.latchedPosZ[15:8] ^ f.latchedPosZ[7:0];
  endfunction

  function automatic logic check_parity(input move_probe_level_resp_bytes_t f);
    return (f.parity == calc_parity(f));
  endfunction

  function automatic move_probe_level_resp_bytes_t set_parity(input move_probe_level_resp_bytes_t in);
    move_probe_level_resp_bytes_t r = in;
    r.parity = calc_parity(in);
    return r;
  endfunction

  // -------- Default seguro --------
  function automatic move_probe_level_resp_bytes_t make_default();
    move_probe_level_resp_bytes_t r;
    r.header       = RESP_HEADER;
    r.msgType      = MOVE_PROBE_LEVEL_TYPE;
    r.frameIdEcho  = 8'd0;
    r.status       = 8'd0;
    r.axisDoneMask = 8'd0;
    r.errorFlags   = 8'd0;
    r.latchedPosX  = 32'd0;
    r.latchedPosY  = 32'd0;
    r.latchedPosZ  = 32'd0;
    r.parity       = 8'd0;   // ajustado por set_parity()
    r.tail         = RESP_TAIL;
    return r;
  endfunction

endpackage
`endif

