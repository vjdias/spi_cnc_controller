// -----------------------------------------------------------------------------
// protocol_constants_pkg.sv
//
// Constantes comuns do protocolo.
// Define headers, tails e types de cada frame.
// -----------------------------------------------------------------------------
`ifndef PROTOCOL_CONSTANTS_PKG_SV
`define PROTOCOL_CONSTANTS_PKG_SV
package protocol_constants_pkg;

  typedef logic [7:0] byte_t;

  // ---------------------------
  // REQUEST_FPGA
  // ---------------------------
  localparam byte_t REQ_HEADER = 8'hAA;
  localparam byte_t REQ_TAIL   = 8'h55;
  localparam byte_t REQ_TYPE   = 8'h20;

  // ---------------------------
  // RESPONSE_FPGA
  // ---------------------------
  localparam byte_t RESP_HEADER = 8'hAB;
  localparam byte_t RESP_TAIL   = 8'h54;

  // ---------------------------
  // FPGA_STATUS
  // ---------------------------
  localparam byte_t FPGA_STATUS_TYPE   = 8'h20;

  // ---------------------------
  // START_MOVE
  // ---------------------------
  localparam byte_t START_MOVE_TYPE = 8'h03;
  
endpackage
`endif
