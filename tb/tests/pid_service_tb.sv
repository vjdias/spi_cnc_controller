`timescale 1ns/1ps
`include "lib/test_macros.svh"

module pid_service_tb;
  // Testa o cálculo do PID (atualmente apenas termo proporcional + feed-forward)

  // DUT IOs
  logic clk = 0;
  logic rst_n = 0;
  logic enable;
  logic pid_tick;
  logic [31:0] target_x, target_y, target_z;
  logic [31:0] ff_rate_x, ff_rate_y, ff_rate_z;
  logic [15:0] kp_x, ki_x, kd_x;
  logic [15:0] kp_y, ki_y, kd_y;
  logic [15:0] kp_z, ki_z, kd_z;
  logic [31:0] enc_pos_x, enc_pos_y, enc_pos_z;
  logic [31:0] rate_x, rate_y, rate_z;
  logic [7:0]  pid_err_x, pid_err_y, pid_err_z;

  // Clock para sincronismo (não é estritamente necessário, DUT é combinacional)
  always #5 clk = ~clk;
  // pid_tick só para silenciar avisos (DUT não usa na lógica atual)
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) pid_tick <= 1'b0; else pid_tick <= ~pid_tick;
  end

  // DUT
  pid_service dut(
    .clk(clk), .rst_n(rst_n),
    .enable(enable), .pid_tick(pid_tick),
    .target_x(target_x), .target_y(target_y), .target_z(target_z),
    .ff_rate_x(ff_rate_x), .ff_rate_y(ff_rate_y), .ff_rate_z(ff_rate_z),
    .kp_x(kp_x), .ki_x(ki_x), .kd_x(kd_x),
    .kp_y(kp_y), .ki_y(ki_y), .kd_y(kd_y),
    .kp_z(kp_z), .ki_z(ki_z), .kd_z(kd_z),
    .enc_pos_x(enc_pos_x), .enc_pos_y(enc_pos_y), .enc_pos_z(enc_pos_z),
    .rate_x(rate_x), .rate_y(rate_y), .rate_z(rate_z),
    .pid_err_x(pid_err_x), .pid_err_y(pid_err_y), .pid_err_z(pid_err_z)
  );

  // Aux: espera um ciclo para a combinacional estabilizar
  task automatic settle(); @(posedge clk); endtask

  initial begin
    // Reset
    enable = 1'b0;
    {target_x, target_y, target_z} = '0;
    {ff_rate_x, ff_rate_y, ff_rate_z} = '0;
    {kp_x, ki_x, kd_x, kp_y, ki_y, kd_y, kp_z, ki_z, kd_z} = '0;
    {enc_pos_x, enc_pos_y, enc_pos_z} = '0;
    repeat (2) @(posedge clk); rst_n = 1;

    // 1) enable=0 => saídas zero
    settle();
    `TEST_ASSERT(rate_x == 0 && rate_y == 0 && rate_z == 0, "disable_zero_rates")

    // 2) Kp=0 => saída igual ao feed-forward
    enable = 1'b1;
    ff_rate_x = 32'd1000; ff_rate_y = 32'd500; ff_rate_z = 32'd0;
    kp_x = 16'd0; kp_y = 16'd0; kp_z = 16'd0;
    target_x = 32'd1000; target_y = 32'd200; target_z = 32'd0;
    enc_pos_x = 32'd0; enc_pos_y = 32'd0; enc_pos_z = 32'd0;
    settle();
    `TEST_ASSERT(rate_x == 1000 && rate_y == 500 && rate_z == 0, "kp0_equals_ff")

    // 3) Erro positivo (target > pos), Kp=256 (1.0 em Q8) => adj = err
    //    err = 100 -> adj = 100 => rate = ff + 100
    kp_x = 16'd256; ff_rate_x = 32'd100; target_x = 32'd1000; enc_pos_x = 32'd900;
    settle();
    `TEST_ASSERT(rate_x == (100 + 100), "pos_err_kp1")

    // 4) Erro negativo (target < pos), Kp=256 => adj = -|err|
    //    err = -100 -> adj = -100 => rate = ff - 100 = 50
    ff_rate_x = 32'd150; target_x = 32'd1000; enc_pos_x = 32'd1100;
    settle();
    `TEST_ASSERT(rate_x == 50, "neg_err_kp1")

    // 5) Saturação em zero (não pode ficar negativo)
    ff_rate_x = 32'd10; target_x = 32'd1000; enc_pos_x = 32'd1100; // ff - 100 => < 0
    settle();
    `TEST_ASSERT(rate_x == 0, "saturates_zero")

    // 6) Teste multieixo: X (0.5x), Y (2x), Z (0)
    //    Kp_x = 128 (0.5), err_x=200 => adj=100, ff=900 => 1000
    //    Kp_y = 512 (2.0), err_y=50  => adj=100, ff=0   => 100
    //    Kp_z = 0 => rate_z = ff_z
    kp_x = 16'd128; ff_rate_x = 32'd900; target_x = 32'd1200; enc_pos_x = 32'd1000;
    kp_y = 16'd512; ff_rate_y = 32'd0;   target_y = 32'd150;  enc_pos_y = 32'd100;
    kp_z = 16'd0;   ff_rate_z = 32'd123; target_z = 32'd999;  enc_pos_z = 32'd1000;
    settle();
    `TEST_ASSERT(rate_x == 1000, "multi_x")
    `TEST_ASSERT(rate_y == 100,  "multi_y")
    `TEST_ASSERT(rate_z == 123,  "multi_z")

    // 7) enable=0 derruba saídas
    enable = 1'b0; settle();
    `TEST_ASSERT(rate_x == 0 && rate_y == 0 && rate_z == 0, "disable_again")

    $display("Sucesso: pid_service_tb");
    $finish;
  end
endmodule

