// -----------------------------------------------------------------------------
// fpga_status_request_pkg.sv
//
// Frame FPGA_STATUS_REQUEST.
//
// Layout (Big-Endian por byte; 32 bits):
//  [31:24] Header   = REQ_HEADER
//  [23:16] MsgType  = FPGA_STATUS_TYPE
//  [15:8 ] FrameID  = definido pelo host
//  [7 :0 ] Tail     = REQ_TAIL
//
// Funções:
//   - decoder      : [31:0] -> struct
//   - encoder      : struct  -> [31:0]
//   - make_default : struct padrão segura
// -----------------------------------------------------------------------------
`ifndef FPGA_STATUS_REQUEST_PKG_SV
`define FPGA_STATUS_REQUEST_PKG_SV
package fpga_status_request_pkg;

  import protocol_constants_pkg::*; // REQ_HEADER/TAIL, FPGA_STATUS_TYPE, byte_t

  typedef struct packed {
    byte_t header;   // REQ_HEADER (0xAA)
    byte_t msgType;  // FPGA_STATUS_TYPE (0x20)
    byte_t frameId;  // definido pelo host
    byte_t tail;     // REQ_TAIL (0x55)
  } request_fpga_status_bytes_t;

  // Converte vetor bruto (32b) em struct
  function automatic request_fpga_status_bytes_t decoder(input logic [31:0] raw);
    request_fpga_status_bytes_t r;
    r.header  = raw[31:24];
    r.msgType = raw[23:16];
    r.frameId = raw[15:8];
    r.tail    = raw[7:0];
    return r;
  endfunction

  // Monta vetor bruto (32b) a partir da struct
  function automatic logic [31:0] encoder(input request_fpga_status_bytes_t r);
    return {r.header, r.msgType, r.frameId, r.tail};
  endfunction

  // Inicialização segura (valores padrão)
  function automatic request_fpga_status_bytes_t make_default();
    request_fpga_status_bytes_t r;
    r.header  = REQ_HEADER;
    r.msgType = FPGA_STATUS_TYPE;
    r.frameId = 8'd0;
    r.tail    = REQ_TAIL;
    return r;
  endfunction

endpackage
`endif
