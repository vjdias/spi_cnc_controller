`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_full_flow_led_20_tb;
  // Switches para varrer cenários
  parameter int TB_NUM_FRAMES   = 20; // número de mensagens a enviar
  parameter bit TB_RESPECT_BUSY = 1;  // 1=espera busy, 0=ignora busy
  parameter int TB_WAIT_CYCLES  = 2;  // espaçamento no TX físico (param do u_miso)
  import spi_service_pkg::*;
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;

  // Clock/reset
  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk;

  // RX path
  spi_fifo_if rx_fifo();
  // Bridge do wrapper -> bytes (strobe)
  logic                 rd_en;
  logic [2:0]           raddr;
  spi_service_pkg::byte_t                rdata;
  logic                 irq;
  // Bytes pós-bridge (para o capturador MOSI)
  logic                 spi_byte_valid;
  spi_service_pkg::byte_t                spi_byte;
  logic                 overflow_error;
  logic                 slave_busy;

  // Router outputs (somente LED neste teste)
  logic                 frame_valid;
  logic                 frame_error;
  spi_service_pkg::byte_t                out_msgType;
  led_control_request_pkg::led_ctrl_req_bytes_t led_ctrl_frame;

  // LED service outputs
  logic [5:0]           leds;
  logic                 resp_valid;
  led_ctrl_resp_bytes_t resp_frame;

  // TX path
  spi_fifo_if #(.DEPTH(TX_FIFO_DEPTH), .DROP_OLD_ON_FULL(1)) tx_fifo();
  logic tx_busy;
  // Stream genérico do LED
  resp_stream_if led_stream();
  // HUB de TX com 1 fonte
  resp_stream_if streams[1]();

  // Saída física do TX (capturada no TB)
  logic        wr_en;
  logic [2:0]  waddr;
  logic [7:0]  wdata;

  // DUTs
  spi_rx_slave_service u_rxbridge(
    .clk(clk), .rst_n(rst_n),
    .rd_en(rd_en), .raddr(raddr), .rdata(rdata), .irq(irq),
    .spi_byte_valid(spi_byte_valid), .spi_byte(spi_byte)
  );

  spi_rx_mosi_service u_cap(
    .clk(clk), .rst_n(rst_n),
    .spi_byte_valid(spi_byte_valid),
    .spi_byte(spi_byte),
    .fifo(rx_fifo),
    .overflow_error(overflow_error),
    .slave_busy(slave_busy)
  );

  spi_rx_hub_service u_cons(
    .clk(clk), .rst_n(rst_n),
    .fifo(rx_fifo),
    .frame_valid(frame_valid), .frame_error(frame_error),
    .out_msgType(out_msgType),
    // somente LED usado neste teste
    .move_home_frame(),
    .start_move_frame(),
    .move_probe_frame(),
    .queue_add_frame(),
    .move_end_frame(),
    .queue_status_frame(),
    .fpga_status_frame(),
    .led_ctrl_frame(led_ctrl_frame)
  );

  localparam bit ACTIVE_LOW = 1;

  led_service #(.ACTIVE_LOW(ACTIVE_LOW)) u_led(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid), .msgType(out_msgType),
    .led_req(led_ctrl_frame),
    .leds(leds), .resp_valid(resp_valid), .resp_frame(resp_frame),
    .tx_stream(led_stream)
  );

  // Conecta stream do LED no HUB
  assign streams[0].valid = led_stream.valid;
  assign streams[0].bits  = led_stream.bits;
  assign streams[0].len   = led_stream.len;
  assign led_stream.ready = streams[0].ready;

  spi_tx_hub_service #(.NUM_STREAMS(1)) u_tx(
    .clk(clk), .rst_n(rst_n),
    .streams(streams),
    .tx_fifo(tx_fifo),
    .tx_busy(tx_busy)
  );

  spi_tx_miso_service #(.WAIT_CYCLES(TB_WAIT_CYCLES)) u_miso(
    .clk(clk), .rst_n(rst_n),
    .tx_fifo(tx_fifo),
    .wr_en(wr_en), .waddr(waddr), .wdata(wdata)
  );

  // Captura de respostas físicas (TB_NUM_FRAMES * 7 bytes)
  localparam int RESP_BYTES_TOTAL = TB_NUM_FRAMES * 7;
  spi_service_pkg::byte_t resp_bytes[RESP_BYTES_TOTAL];
  int unsigned resp_byte_count;

  // Métricas de fluxo para estudo de dimensionamento de buffers
  int cycle_ctr;                 // contador de ciclos totais
  int busy_rise_count;           // quantas vezes busy subiu (bordas de subida)
  int busy_cycle_count;          // quantos ciclos busy ficou 1
  int max_rx_occupancy;          // ocupação máxima da RX FIFO
  int max_tx_occupancy;          // ocupação máxima da TX FIFO
  int tx_pause_cycles;           // ciclos com TX em andamento e TX FIFO cheia
  int start_cycle;               // ciclo em que começamos a injetar os frames
  int end_cycle;                 // ciclo em que terminamos de coletar todas as respostas
  bit started;                   // flag: já capturamos o ciclo de início?
  int messages_sent;             // quantas mensagens (frames) foram enviadas
  int messages_received;         // quantas mensagens (frames) foram recebidas
  logic prev_busy;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      resp_byte_count <= 0;
    end else if (wr_en) begin
      if (resp_byte_count < RESP_BYTES_TOTAL)
        resp_bytes[resp_byte_count] <= wdata;
      resp_byte_count <= resp_byte_count + 1;
    end
  end

  // Coleta de métricas de fluxo
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      cycle_ctr          <= 0;
      busy_rise_count    <= 0;
      busy_cycle_count   <= 0;
      max_rx_occupancy   <= 0;
      max_tx_occupancy   <= 0;
      tx_pause_cycles    <= 0;
      prev_busy          <= 1'b0;
      messages_received  <= 0;
    end else begin
      cycle_ctr <= cycle_ctr + 1;

      // busy: contagem de ciclos e de bordas de subida
      if (slave_busy) busy_cycle_count <= busy_cycle_count + 1;
      if (slave_busy && !prev_busy) busy_rise_count <= busy_rise_count + 1;
      prev_busy <= slave_busy;

      // ocupações máximas observadas
      if (rx_fifo.count > max_rx_occupancy) max_rx_occupancy <= rx_fifo.count;
      if (tx_fifo.count > max_tx_occupancy) max_tx_occupancy <= tx_fifo.count;

      // pausas de TX: HUB ocupado mas bloqueado por FIFO cheia
      if (tx_busy && tx_fifo.full) tx_pause_cycles <= tx_pause_cycles + 1;

      // contagem de mensagens recebidas: pulso de resp_valid (1 ciclo)
      if (resp_valid) messages_received <= messages_received + 1;

      // término é capturado no bloco initial após a espera
    end
  end

  // Buffer de entrada do "master" (modela bytes prontos no wrapper)
  spi_service_pkg::byte_t inq[$];

  // Modela o comportamento do wrapper: enquanto houver bytes pendentes
  // (irq=1), o bridge solicitará leituras (rd_en). A cada rd_en, entregamos
  // o próximo byte em rdata, e mantemos irq=1 até esvaziar a fila.
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      irq   <= 1'b0;
      rdata <= '0;
    end else begin
      irq <= (inq.size() != 0);
      if (rd_en && inq.size() != 0) begin
        rdata <= inq.pop_front();
      end
    end
  end

  // Envia um frame LED_CTRL respeitando o busy
  task automatic send_led_ctrl_frame(spi_service_pkg::byte_t frameId, spi_service_pkg::byte_t mask, spi_service_pkg::byte_t value);
    led_control_request_pkg::led_ctrl_req_bytes_t req;
    logic [55:0] raw;
    req            = led_control_request_pkg::make_default();
    req.frameId    = frameId;
    req.ledMask    = mask;
    req.ledValue   = value;
    req            = led_control_request_pkg::set_parity(req);
    raw            = led_control_request_pkg::encoder(req);
    for (int i = 0; i < 7; i++) begin
      // Master respeita busy: espera enquanto ocupado (se habilitado)
      if (TB_RESPECT_BUSY) begin
        do @(posedge clk); while (slave_busy);
      end else begin
        @(posedge clk);
      end
      if (!started) begin
        start_cycle = cycle_ctr;
        started     = 1'b1;
      end
      inq.push_back(raw[55 - i*8 -: 8]);
    end
  endtask

  // Verifica um frame de resposta decodificando 7 bytes a partir de um índice
  task automatic check_resp_at(input int start_idx,
                               input spi_service_pkg::byte_t frameId,
                               input spi_service_pkg::byte_t mask,
                               input spi_service_pkg::byte_t exp_status);
    logic [55:0] raw;
    led_ctrl_resp_bytes_t dec;
    for (int i = 0; i < 7; i++) begin
      raw[55 - i*8 -: 8] = resp_bytes[start_idx + i];
    end
    dec = led_control_response_pkg::decoder(raw);
    `TEST_ASSERT(dec.header == protocol_constants_pkg::RESP_HEADER, "resp_header")
    `TEST_ASSERT(dec.tail   == protocol_constants_pkg::RESP_TAIL,   "resp_tail")
    `TEST_ASSERT(dec.msgType == protocol_constants_pkg::LED_CTRL_TYPE, "resp_type")
    `TEST_ASSERT(led_control_response_pkg::check_parity(dec), "resp_parity")
    `TEST_ASSERT(dec.frameIdEcho == frameId, "resp_frameid_echo")
    `TEST_ASSERT(dec.ledMask == mask, "resp_ledmask_echo")
    `TEST_ASSERT(dec.status == exp_status, "resp_status")
  endtask

  // Sequência de 20 comandos: alterna padrões de máscara e valor
  initial begin
    int i;
    int cycles;
    spi_service_pkg::byte_t masks    [TB_NUM_FRAMES];
    spi_service_pkg::byte_t vals     [TB_NUM_FRAMES];
    spi_service_pkg::byte_t frameIds [TB_NUM_FRAMES];
    logic [5:0] expected_leds;

    // Reset
    inq = {};
    started = 1'b0;
    messages_sent = 0;
    expected_leds  = ACTIVE_LOW ? 6'b111111 : 6'b0;
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Prepara TB_NUM_FRAMES mensagens variadas
    for (i = 0; i < TB_NUM_FRAMES; i++) begin
      frameIds[i] = spi_service_pkg::byte_t'(8'h10 + i);
      // Máscaras: percorre padrões para cobrir vários LEDs
      case (i % 5)
        0: masks[i] = 8'h01; // LED0
        1: masks[i] = 8'h03; // LED0..1
        2: masks[i] = 8'h0C; // LED2..3
        3: masks[i] = 8'h30; // LED4..5
        default: masks[i] = 8'h15; // LEDs 0,2,4
      endcase
      // Valores: alterna ligar/desligar
      vals[i] = (i % 2) ? 8'h00 : 8'h01;
    end

    // Marca início e envia TB_NUM_FRAMES frames respeitando busy
    start_cycle = cycle_ctr;
    for (i = 0; i < TB_NUM_FRAMES; i++) begin
      logic val;
      send_led_ctrl_frame(frameIds[i], masks[i], vals[i]);
      messages_sent++;
      // Atualiza modelo esperado de LEDs
      val = vals[i][0];
      if (ACTIVE_LOW) val = ~val;
      if (val)
        expected_leds = expected_leds | masks[i][5:0];
      else
        expected_leds = expected_leds & ~masks[i][5:0];
    end

    // Aguarda todas respostas (20*7 bytes) com timeout
    cycles = 0;
    while (resp_byte_count < RESP_BYTES_TOTAL && cycles < 2000) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(resp_byte_count >= RESP_BYTES_TOTAL, "timeout_respostas")
    // Captura ciclo de término agora que todos bytes chegaram
    end_cycle = cycle_ctr;

    // Verifica cada resposta decodificando e checando eco/integração
    for (i = 0; i < TB_NUM_FRAMES; i++) begin
      check_resp_at(i*7, frameIds[i], masks[i], 8'h00);
    end

    // Verifica estado final dos LEDs
    `TEST_ASSERT(leds == expected_leds, "estado_leds_final")

    // Relatório de métricas para estudo de dimensionamento
    $display("=== SPI Flow Metrics ===");
    $display("busy_rise_count        = %0d", busy_rise_count);
    $display("busy_cycle_count       = %0d", busy_cycle_count);
    $display("max_rx_occupancy       = %0d / RX_DEPTH=%0d", max_rx_occupancy, spi_service_pkg::RX_FIFO_DEPTH);
    $display("max_tx_occupancy       = %0d / TX_DEPTH=%0d", max_tx_occupancy, spi_service_pkg::TX_FIFO_DEPTH);
    $display("tx_pause_cycles        = %0d", tx_pause_cycles);
    $display("latency_cycles         = %0d (from start send to last resp byte)", (end_cycle - start_cycle));
    $display("messages_sent          = %0d", messages_sent);
    $display("messages_received      = %0d", messages_received);
    $display("========================");

    $display("Sucesso: spi_full_flow_led_20_tb");
    $finish;
  end
endmodule
