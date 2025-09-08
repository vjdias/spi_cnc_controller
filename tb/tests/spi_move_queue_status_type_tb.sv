`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_move_queue_status_type_tb;
  import protocol_constants_pkg::*;
  import move_queue_status_response_pkg::*;

  initial begin
    move_queue_status_resp_bytes_t r;
    r = move_queue_status_response_pkg::make_default();
    if (r.msgType != MOVE_QUEUE_STATUS_TYPE)
      $display("Falha: mqs_type_pkg");
    else
      $display("Sucesso: spi_move_queue_status_type_tb");
    $finish;
  end
endmodule
