`timescale 1ns/1ps
`include "lib/test_macros.svh"

module lj12a3_proximity_driver_tb;
  // Verifica mapeamento de polaridades (PNP/NPN, NO/NC), geração de pulsos e debounce

  // Checagem de pulsos:
  // - Em Verilator, a observação de pulsos de 1 ciclo no mesmo timestep do
  //   posedge pode ser sensível ao agendamento. Por padrão, desabilite.
  // - Em outros simuladores (ModelSim/Questa), habilite com +CHECK_PULSES.
  bit CHECK_PULSES = 1'b0;
  initial begin
`ifndef VERILATOR
    if ($test$plusargs("CHECK_PULSES")) CHECK_PULSES = 1'b1;
`endif
  end

  // Clock/reset
  logic clk = 0; logic rst_n = 0; always #5 clk = ~clk; // 100 MHz

  // Instâncias sem debounce --------------------------------------------------
  // PNP NO: ativo quando entrada=1
  logic s_pnp_no, act_pnp_no, ap_pnp_no, ip_pnp_no;
  lj12a3_proximity_driver #(.IS_PNP(1'b1), .IS_NORMALLY_OPEN(1'b1), .DEBOUNCE_CYCLES(0)) u_pnp_no (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(s_pnp_no), .o_active(act_pnp_no),
    .o_active_pulse(ap_pnp_no), .o_inactive_pulse(ip_pnp_no)
  );

  // NPN NO: ativo quando entrada=0
  logic s_npn_no, act_npn_no, ap_npn_no, ip_npn_no;
  lj12a3_proximity_driver #(.IS_PNP(1'b0), .IS_NORMALLY_OPEN(1'b1), .DEBOUNCE_CYCLES(0)) u_npn_no (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(s_npn_no), .o_active(act_npn_no),
    .o_active_pulse(ap_npn_no), .o_inactive_pulse(ip_npn_no)
  );

  // NPN NC: ativo quando entrada=1
  logic s_npn_nc, act_npn_nc, ap_npn_nc, ip_npn_nc;
  lj12a3_proximity_driver #(.IS_PNP(1'b0), .IS_NORMALLY_OPEN(1'b0), .DEBOUNCE_CYCLES(0)) u_npn_nc (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(s_npn_nc), .o_active(act_npn_nc),
    .o_active_pulse(ap_npn_nc), .o_inactive_pulse(ip_npn_nc)
  );

  // PNP NC: ativo quando entrada=0
  logic s_pnp_nc, act_pnp_nc, ap_pnp_nc, ip_pnp_nc;
  lj12a3_proximity_driver #(.IS_PNP(1'b1), .IS_NORMALLY_OPEN(1'b0), .DEBOUNCE_CYCLES(0)) u_pnp_nc (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(s_pnp_nc), .o_active(act_pnp_nc),
    .o_active_pulse(ap_pnp_nc), .o_inactive_pulse(ip_pnp_nc)
  );

  // Instância com debounce ---------------------------------------------------
  localparam int DB_CYC = 4;
  logic s_db, act_db, ap_db, ip_db;
  lj12a3_proximity_driver #(.IS_PNP(1'b1), .IS_NORMALLY_OPEN(1'b1), .DEBOUNCE_CYCLES(DB_CYC)) u_db (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(s_db), .o_active(act_db),
    .o_active_pulse(ap_db), .o_inactive_pulse(ip_db)
  );

  // Helpers ------------------------------------------------------------------
  task automatic wait_sync2(); repeat (2) @(posedge clk); endtask // latência do sincronizador
  // Latência efetiva (sync2 + registros internos): use espera com timeout observando a saída
  task automatic wait_active_with_pulse(
      input logic expect_active,
      ref   logic ap, ref logic ip,
      ref   logic act,
      input int   max_cycles
    );
    int c; bit pulse_seen; pulse_seen = 0;
    for (c = 0; c < max_cycles; c++) begin
      @(posedge clk);
      // Avança para a região de NBAs no mesmo timestep para capturar pulsos
      #0;
      if (ap === 1'b1 || ip === 1'b1) pulse_seen = 1;
      if (act === expect_active) begin
        // Se ainda não viu o pulso, dá mais um ciclo para observá-lo
        if (!pulse_seen) begin
          @(posedge clk); #0;
          if (ap === 1'b1 || ip === 1'b1) pulse_seen = 1;
        end
        break;
      end
    end
    `TEST_ASSERT(act === expect_active, "wait_active_target")
    if (CHECK_PULSES) begin
      `TEST_ASSERT(pulse_seen,         "wait_active_pulse_seen")
    end
  endtask

  initial begin
    // Reset e defaults
    {s_pnp_no, s_npn_no, s_npn_nc, s_pnp_nc, s_db} = '0;
    repeat (3) @(posedge clk); rst_n = 1;

    // --- PNP NO: ativo com entrada 1 ---
    s_pnp_no = 1'b1;
    wait_active_with_pulse(1, ap_pnp_no, ip_pnp_no, act_pnp_no, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_pnp_no === 1'b0 && ip_pnp_no === 1'b0, "pnp_no_pulses_clear")
    s_pnp_no = 1'b0;
    wait_active_with_pulse(0, ip_pnp_no, ap_pnp_no, act_pnp_no, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_pnp_no === 1'b0 && ip_pnp_no === 1'b0, "pnp_no_pulses_clear2")

    // --- NPN NO: ativo com entrada 0 ---
    s_npn_no = 1'b0;
    wait_active_with_pulse(1, ap_npn_no, ip_npn_no, act_npn_no, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_npn_no === 1'b0 && ip_npn_no === 1'b0, "npn_no_pulses_clear")
    s_npn_no = 1'b1;
    wait_active_with_pulse(0, ip_npn_no, ap_npn_no, act_npn_no, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_npn_no === 1'b0 && ip_npn_no === 1'b0, "npn_no_pulses_clear2")

    // --- NPN NC: ativo com entrada 1 ---
    s_npn_nc = 1'b1;
    wait_active_with_pulse(1, ap_npn_nc, ip_npn_nc, act_npn_nc, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_npn_nc === 1'b0 && ip_npn_nc === 1'b0, "npn_nc_pulses_clear")
    s_npn_nc = 1'b0;
    wait_active_with_pulse(0, ip_npn_nc, ap_npn_nc, act_npn_nc, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_npn_nc === 1'b0 && ip_npn_nc === 1'b0, "npn_nc_pulses_clear2")

    // --- PNP NC: ativo com entrada 0 ---
    s_pnp_nc = 1'b0;
    wait_active_with_pulse(1, ap_pnp_nc, ip_pnp_nc, act_pnp_nc, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_pnp_nc === 1'b0 && ip_pnp_nc === 1'b0, "pnp_nc_pulses_clear")
    s_pnp_nc = 1'b1;
    wait_active_with_pulse(0, ip_pnp_nc, ap_pnp_nc, act_pnp_nc, 16);
    @(posedge clk); #0; `TEST_ASSERT(ap_pnp_nc === 1'b0 && ip_pnp_nc === 1'b0, "pnp_nc_pulses_clear2")

    // --- Debounce: glitch não deve ativar ---
    // Glitch curto (1 ciclo de clk): devido ao sincronizador 2-flop + debounce=4, não deve alterar saída
    s_db = 1'b1; @(posedge clk); s_db = 1'b0; // glitch curto
    // aguarda tempo suficiente para qualquer propagação sem estabilidade
    repeat (10) @(posedge clk);
    `TEST_ASSERT(act_db === 1'b0 && ap_db === 1'b0 && ip_db === 1'b0, "debounce_glitch_ignored")

    // Ativação estável: usa helper que observa pulso e estado
    s_db = 1'b1;
    wait_active_with_pulse(1, ap_db, ip_db, act_db, 50);
    @(posedge clk); #0; `TEST_ASSERT(ap_db === 1'b0 && ip_db === 1'b0, "debounce_pulses_clear")

    // Desativação estável
    s_db = 1'b0;
    wait_active_with_pulse(0, ip_db, ap_db, act_db, 50);
    @(posedge clk); #0; `TEST_ASSERT(ap_db === 1'b0 && ip_db === 1'b0, "debounce_pulses_clear2")

    $display("Sucesso: lj12a3_proximity_driver_tb");
    $finish;
  end
endmodule
