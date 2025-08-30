`timescale 1ns/1ps
`include "lib/test_macros.svh"

`ifdef INCLUDE_MASTER_VO_TB
module spi_master_vo_integration_tb;
  import spi_service_pkg::*;
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;
  // Nota: constantes do protocolo devem ser qualificadas quando usadas

  // Clocks/resets
  logic sys_clk = 0;     // clock de sistema para os serviços
  logic rst_n   = 0;
  always #5  sys_clk = ~sys_clk; // 100 MHz para lógica interna

  // Clock do master VO (espera 50 MHz nominal)
  logic clk_50m = 0;
  always #10 clk_50m = ~clk_50m; // 50 MHz

  // Pinos SPI (master VO <-> wrapper spi_slave)
  logic sclk;
  logic ss_n;
  logic mosi;
  wire  miso;

  // Instância global exigida pela simlib da Gowin.
  // A primitiva GSR dentro de prim_sim.v referencia o caminho hierárquico
  // GSR.GSRO; por isso o nome da instância deve ser exatamente "GSR".
  // Mantemos GSRI em nível alto durante toda a simulação.
  GSR GSR(.GSRI(1'b0));

  // Barramento do wrapper (registradores)
  logic        wr_en;
  logic [2:0]  waddr;
  logic [7:0]  wdata;
  logic        rd_en;
  logic [2:0]  raddr;
  logic [7:0]  rdata;
  logic        irq;

  // RX path
  spi_fifo_if rx_fifo();
  logic                 spi_byte_valid;
  spi_service_pkg::byte_t spi_byte;
  logic                 overflow_error;
  logic                 slave_busy;

  // TX path
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy;
  resp_stream_if led_stream();
  resp_stream_if streams[1]();

  // Router/serviço LED
  logic                 frame_valid;
  logic                 frame_error;
  spi_service_pkg::byte_t out_msgType;
  led_control_request_pkg::led_ctrl_req_bytes_t led_ctrl_frame;
  logic [5:0]           leds;
  logic                 resp_valid;
  led_ctrl_resp_bytes_t resp_frame;

  // DUTs
  // Wrapper do IP (usa STUB quando compilado com +define+SIM_STUB_SPI_CORE)
  spi_slave u_wrap (
    .i_clk      (sys_clk),
    .i_resetn   (rst_n),
    .wr_en      (wr_en),
    .waddr      (waddr),
    .wdata      (wdata),
    .rd_en      (rd_en),
    .raddr      (raddr),
    .rdata      (rdata),
    .irq        (irq),
    .sclk_slave (sclk),
    .ss_n_slave (ss_n),
    .mosi_slave (mosi),
    .miso_slave (miso)
  );

  // Bridge: wrapper -> bytes
  spi_rx_slave_service u_rxbridge(
    .clk(sys_clk), .rst_n(rst_n),
    .rd_en(rd_en), .raddr(raddr), .rdata(rdata), .irq(irq),
    .spi_byte_valid(spi_byte_valid), .spi_byte(spi_byte)
  );

  // Captura MOSI em FIFO
  spi_rx_mosi_service u_cap(
    .clk(sys_clk), .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(rx_fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  // Roteador
  spi_rx_hub_service u_cons(
    .clk(sys_clk), .rst_n(rst_n),
    .fifo(rx_fifo),
    .frame_valid(frame_valid), .frame_error(frame_error),
    .out_msgType(out_msgType),
    .move_home_frame(), .start_move_frame(), .move_probe_frame(), .queue_add_frame(),
    .move_end_frame(), .queue_status_frame(), .fpga_status_frame(),
    .led_ctrl_frame(led_ctrl_frame)
  );

  // Serviço LED
  led_service u_led(
    .clk(sys_clk), .rst_n(rst_n),
    .frame_valid(frame_valid), .msgType(out_msgType),
    .led_req(led_ctrl_frame),
    .leds(leds), .resp_valid(resp_valid), .resp_frame(resp_frame),
    .tx_stream(led_stream)
  );

  // Stream -> HUB TX
  assign streams[0].valid = led_stream.valid;
  assign streams[0].bits  = led_stream.bits;
  assign streams[0].len   = led_stream.len;
  assign led_stream.ready = streams[0].ready;

  spi_tx_hub_service #(.NUM_STREAMS(1)) u_tx(
    .clk(sys_clk), .rst_n(rst_n),
    .streams(streams),
    .tx_fifo(tx_fifo),
    .tx_busy(tx_busy)
  );

  // Escrita no registrador de TX do wrapper (alimenta MISO do IP)
  spi_tx_miso_service u_miso(
    .clk(sys_clk), .rst_n(rst_n),
    .tx_fifo(tx_fifo),
    .wr_en(wr_en), .waddr(waddr), .wdata(wdata)
  );

  // ------------------------
  // Master VO (gw_spi_master)
  // ------------------------
  // Este módulo vem de simulate_vo/gw_spi_master.vo
  // Gere clock/reset/tecla como no exemplo de referência.
  logic key2;
  logic error_out;
  logic r_data_flag;

  gw_spi_master u_master (
    .clk_50m     (clk_50m),
    .rst_n       (rst_n),
    .key2        (key2),
    .MISO_MASTER (miso),
    .SCLK_MASTER (sclk),
    .SS_N_MASTER (ss_n),
    .MOSI_MASTER (mosi),
    .error_out   (error_out),
    .r_data_flag (r_data_flag)
  );

  // Contadores de atividade
  int rx_pulses = 0;
  int sclk_edges = 0;
  int ss_actives = 0;
  always_ff @(posedge sys_clk or negedge rst_n) begin
    if (!rst_n) rx_pulses <= 0;
    else if (spi_byte_valid) rx_pulses <= rx_pulses + 1;
  end
  always @(posedge sclk) sclk_edges++;
  always @(negedge ss_n) ss_actives++;

  // Sequência de inicialização
  initial begin
    int cycles;
    // defaults
    rst_n = 0; key2 = 0;
    repeat (4) @(posedge sys_clk);
    rst_n = 1;
    // Pulso em key2 para iniciar a transação no VO (conforme design de referência)
    repeat (10) @(posedge clk_50m);
    // O design de referência debounça a tecla; mantenha pressionado
    // Mantenha em nível alto contínuo para garantir start
    key2 = 1'b1;

    // Aguarda um tempo razoável e valida que não houve erro no VO
    // Observação: o design de referência do VO não envia frame LED_CTRL.
    // Este teste apenas verifica integração elétrica básica.
    repeat (10000) @(posedge sys_clk);
    `TEST_ASSERT(error_out == 1'b0, "error_out_should_be_low")

    $display("Sucesso: spi_master_vo_integration_tb");
    $finish;
  end
endmodule

`endif // INCLUDE_MASTER_VO_TB
