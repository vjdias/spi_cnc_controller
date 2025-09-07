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
  // MOVE (Queue Add)
  // ---------------------------
  localparam byte_t MOVE_TYPE = 8'h01;

  // ---------------------------
  // MOVE_QUEUE_STATUS
  // ---------------------------
  localparam byte_t MOVE_QUEUE_STATUS_TYPE = 8'h02;

  // ---------------------------
  // START_MOVE
  // ---------------------------
  localparam byte_t START_MOVE_TYPE = 8'h03;

  // ---------------------------
  // MOVE_HOME
  // ---------------------------
  localparam byte_t MOVE_HOME_TYPE = 8'h04;

  // ---------------------------
  // MOVE_PROBE_LEVEL
  // ---------------------------
  localparam byte_t MOVE_PROBE_LEVEL_TYPE = 8'h05;

  // ---------------------------
  // MOVE_END
  // ---------------------------
  localparam byte_t MOVE_END_TYPE = 8'h06;

  // ---------------------------
  // LED_CTRL
  // ---------------------------
  localparam byte_t LED_CTRL_TYPE = 8'h07;

  // ---------------------------
  // FPGA_STATUS
  // ---------------------------
  localparam byte_t FPGA_STATUS_TYPE   = 8'h20;

  // ---------------------------
  // HOME_STATUS
  // ---------------------------
  localparam byte_t HOME_STATUS_TYPE   = 8'h21;
  
endpackage
`endif
