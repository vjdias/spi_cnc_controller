`timescale 1ns/1ps
`include "lib/test_macros.svh"

module axis_home_service_tb;
  // clock/reset
  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk;

  // DUT with coarse-only homing
  logic start0, prox0, idx0;
  logic running0, coarse_done0, done0;
  axis_home_service #(.USE_INDEX(1'b0)) dut_coarse (
    .clk(clk), .rst_n(rst_n),
    .start_pulse(start0), .prox_active(prox0), .idx_pulse(idx0),
    .running(running0), .coarse_done(coarse_done0), .done(done0)
  );

  // DUT with coarse+fine (index)
  logic start1, prox1, idx1;
  logic running1, coarse_done1, done1;
  axis_home_service #(.USE_INDEX(1'b1)) dut_fine (
    .clk(clk), .rst_n(rst_n),
    .start_pulse(start1), .prox_active(prox1), .idx_pulse(idx1),
    .running(running1), .coarse_done(coarse_done1), .done(done1)
  );

  // Quadrature encoder signals (A/B) only for simulation realism
  logic enc_a, enc_b;

  // gera ppr ciclos de quadratura e um pulso de índice ao final
  task automatic gen_abz(input int ppr);
    enc_a = 0; enc_b = 0; idx1 = 0;
    for (int i = 0; i < ppr-1; i++) begin
      case (i % 4)
        0: {enc_a, enc_b} = 2'b00;
        1: {enc_a, enc_b} = 2'b01;
        2: {enc_a, enc_b} = 2'b11;
        3: {enc_a, enc_b} = 2'b10;
      endcase
      @(posedge clk);
      `TEST_ASSERT(!done1, "espera_idx")
    end
    // último passo + pulso de índice
    {enc_a, enc_b} = 2'b00;
    idx1 = 1; @(posedge clk); idx1 = 0;
  endtask

  task automatic test_coarse_only();
    // reset
    rst_n = 0; start0 = 0; prox0 = 0; idx0 = 0;
    start1 = 0; prox1 = 0; idx1 = 0;
    repeat (2) @(posedge clk); rst_n = 1;

    // inicia homing
    start0 = 1; @(posedge clk); start0 = 0; @(posedge clk);
    `TEST_ASSERT(running0, "coarse_running")

    // ativa prox -> deve finalizar sem idx
    repeat (5) @(posedge clk);
    prox0 = 1; @(posedge clk);
    `TEST_ASSERT(coarse_done0 && done0, "coarse_done")
  endtask

  task automatic test_fine(input int ppr);
    // reset
    rst_n = 0; start0 = 0; prox0 = 0; idx0 = 0;
    start1 = 0; prox1 = 0; idx1 = 0;
    repeat (2) @(posedge clk); rst_n = 1;

    // inicia homing
    start1 = 1; @(posedge clk); start1 = 0; @(posedge clk);
    `TEST_ASSERT(running1 && !coarse_done1 && !done1, "fine_start")

    // ativa prox -> entra em FINE aguardando índice
    repeat (5) @(posedge clk);
    prox1 = 1; @(posedge clk);
    `TEST_ASSERT(coarse_done1 && !done1, "fine_waiting")

    // gera pulsos AB e índice conforme PPR
    gen_abz(ppr);
    `TEST_ASSERT(done1, $sformatf("fine_done_%0d", ppr))
  endtask

  initial begin
    test_coarse_only();
    test_fine(40000);
    test_fine(2500);
    $display("Sucesso: axis_home_service_tb");
    $finish;
  end
endmodule

