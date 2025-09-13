`ifndef __TOP_SV__
`define __TOP_SV__
// top.sv
// Instancia o wrapper spi_slave e expõe a interface p/ lógica interna.
// Ajuste nomes de pinos conforme seu .cst / board.
//
// SPDX-License-Identifier: MIT

// For simulation with Verilator we include the SPI wrapper here.
// For synthesis (e.g., Gowin), the file is added via the project file (.gprj),
// so we avoid including it to prevent duplicate module compilation.
`ifdef VERILATOR
`include "drivers/spi/spi_slave_wrap.sv"
`endif

module top (
    // -------------------------
    // Clock/Reset de sistema
    // -------------------------
    input  wire        i_clk,      // ex.: 27 MHz do Tang Primer
    input  wire        i_resetn,   // reset ativo-baixo

    // -------------------------
    // Pinos SPI do Raspberry Pi
    // -------------------------
    input  wire        pi_sclk,    // SCLK
    input  wire        pi_csn,     // CE0/CE1 (CS#), ativo em 0
    input  wire        pi_mosi,    // MOSI
    inout  wire        pi_miso,    // MISO (vai em Z quando CS#=1)

    // -------------------------
    // Sinais de LED (usados por testes de integração)
    // -------------------------
    output wire [5:0]  leds,

    // -------------------------
    // Pinos do encoder incremental (ABZ) — eixo X (mantém compatibilidade)
    // -------------------------
    input  wire        i_enc_a_x,
    input  wire        i_enc_b_x,
    input  wire        i_enc_z_x,
    // Eixo Y
    input  wire        i_enc_a_y,
    input  wire        i_enc_b_y,
    input  wire        i_enc_z_y,
    // Eixo Z
    input  wire        i_enc_a_z,
    input  wire        i_enc_b_z,
    input  wire        i_enc_z_z,
    // Sinal único de movimento agregado
    output wire        o_moving,

    // Sensores de proximidade por eixo
    input  wire        i_prox_in_x,
    input  wire        i_prox_in_y,
    input  wire        i_prox_in_z,
    input  wire        i_estop_in,

    // Saídas para drivers TMC5160 (X/Y/Z)
    output wire        tmc_step_x,
    output wire        tmc_dir_x,
    output wire        tmc_enn_x,
    output wire        tmc_step_y,
    output wire        tmc_dir_y,
    output wire        tmc_enn_y,
    output wire        tmc_step_z,
    output wire        tmc_dir_z,
    output wire        tmc_enn_z
);

    // -------------------------
    // Sinais internos para o wrapper e pipeline SPI
    // -------------------------
    // Pinos SPI
    wire sclk_slave_i = pi_sclk;
    wire ss_n_slave_i = pi_csn;
    wire mosi_slave_i = pi_mosi;
    wire miso_slave_i;

    // Interface de registradores do wrapper spi_slave
    wire        tx_wr_en;
    wire [7:0]  tx_wr_data;
    wire        spi_rd_en;
    wire [2:0]  spi_raddr;
    wire [7:0]  spi_rdata;
    wire        spi_irq;

    // Saída MISO do wrapper vai ao pino externo com tri-state (inferido)
    // CS# alto => Z; CS# baixo => dirige miso_slave_i
    assign pi_miso = ss_n_slave_i ? 1'bz : miso_slave_i;

    // -----------------------------------------------------------------
    // Tie-offs for ports sem conexão física para evitar sinais flutuantes
    // -----------------------------------------------------------------
    // Entradas de sensores (ativos em 0) ficam em nível alto por segurança
    wire i_prox_in_x_safe = 1'b1;
    wire i_prox_in_y_safe = 1'b1;
    wire i_prox_in_z_safe = 1'b1;
    wire i_estop_in_safe  = 1'b1;

    // Encoders Y/Z não usados – amarrados em 0
    wire i_enc_a_y_safe = 1'b0;
    wire i_enc_b_y_safe = 1'b0;
    wire i_enc_z_y_safe = 1'b0;
    wire i_enc_a_z_safe = 1'b0;
    wire i_enc_b_z_safe = 1'b0;
    wire i_enc_z_z_safe = 1'b0;

    // Saídas para drivers TMC que não possuem pinos físicos
    wire tmc_step_x_int;
    wire tmc_dir_x_int;
    wire tmc_enn_x_int;
    wire tmc_step_y_int;
    wire tmc_dir_y_int;
    wire tmc_enn_y_int;
    wire tmc_step_z_int;
    wire tmc_dir_z_int;
    wire tmc_enn_z_int;


    // -------------------------
    // Instância do wrapper SPI slave com fila interna
    // -------------------------
    spi_slave u_spi_slave (
        .i_clk       (i_clk),
        .i_resetn    (i_resetn),
        .wr_en       (tx_wr_en),
        .waddr       (3'd0),
        .wdata       (tx_wr_data),
        .rd_en       (spi_rd_en),
        .raddr       (spi_raddr),
        .rdata       (spi_rdata),
        .irq         (spi_irq),
        .sclk_slave  (sclk_slave_i),
        .ss_n_slave  (ss_n_slave_i),
        .mosi_slave  (mosi_slave_i),
        .miso_slave  (miso_slave_i)
    );

    // -------------------------
    // Bridge wrapper->bytes (sempre presente; sintetizável)
    // -------------------------
    wire                        rx_byte_valid;
    spi_service_pkg::byte_t     rx_byte;
    spi_rx_slave_service u_rx_bridge (
      .clk            (i_clk),
      .rst_n          (i_resetn),
      .rd_en          (spi_rd_en),
      .raddr          (spi_raddr),
      .rdata          (spi_rdata),
      .irq            (spi_irq),
      .spi_byte_valid (rx_byte_valid),
      .spi_byte       (rx_byte)
    );

// Caminho sintetizável fixo (sem bloco de simulação no top)
    // Caminho de síntese: usa FIFO e variantes handshake
    // FIFO de RX (bytes do bridge)
    logic                 rx_fifo_wr_en;
    spi_service_pkg::byte_t rx_fifo_wr_data;
    logic                 rx_fifo_full;
    logic                 rx_fifo_rd_en;
    logic [7:0]           rx_fifo_rd_data;
    logic                 rx_fifo_rd_valid;
    logic                 rx_fifo_empty;

    // Escritor: serviço de captura
    wire rx_overflow;
    wire rx_busy;
    spi_rx_mosi_service u_rx_cap_synth (
      .clk            (i_clk),
      .rst_n          (i_resetn),
      .spi_byte_valid (rx_byte_valid),
      .spi_byte       (rx_byte),
      .fifo_wr_en     (rx_fifo_wr_en),
      .fifo_wr_data   (rx_fifo_wr_data),
      .fifo_full      (rx_fifo_full),
      .overflow_error (rx_overflow),
      .slave_busy     (rx_busy)
    );

    byte_fifo_sync #(.DEPTH(spi_service_pkg::RX_FIFO_DEPTH)) u_rx_fifo (
      .clk      (i_clk),
      .rst_n    (i_resetn),
      .wr_en    (rx_fifo_wr_en),
      .wr_data  (rx_fifo_wr_data),
      .full     (rx_fifo_full),
      .rd_en    (rx_fifo_rd_en),
      .rd_data  (rx_fifo_rd_data),
      .rd_valid (rx_fifo_rd_valid),
      .empty    (rx_fifo_empty)
    );

    // Leitor/roteador
    wire                        frame_valid;
    wire                        frame_error;
    spi_service_pkg::byte_t     out_msgType;
    // Frames para motion
    start_move_request_pkg::start_move_req_bytes_t        start_move_frame_w;
    move_queue_add_request_pkg::move_queue_add_req_bytes_t queue_add_frame_w;
    move_end_request_pkg::move_end_req_bytes_t             move_end_frame_w;
    move_home_request_pkg::move_home_req_bytes_t           move_home_frame_w;
    move_queue_status_request_pkg::move_queue_status_bytes_t queue_status_frame_w;
    led_control_request_pkg::led_ctrl_req_bytes_t led_req;

    spi_rx_hub_service u_rx_hub_synth (
      .clk             (i_clk),
      .rst_n           (i_resetn),
      .fifo_empty      (rx_fifo_empty),
      .fifo_rd_en      (rx_fifo_rd_en),
      .fifo_rd_data    (rx_fifo_rd_data),
      .fifo_rd_valid   (rx_fifo_rd_valid),
      .frame_valid     (frame_valid),
      .frame_error     (frame_error),
      .out_msgType     (out_msgType),
      .move_home_frame (move_home_frame_w),
      .start_move_frame(start_move_frame_w),
      .move_probe_frame(),
      .queue_add_frame (queue_add_frame_w),
      .move_end_frame  (move_end_frame_w),
      .queue_status_frame(queue_status_frame_w),
      .fpga_status_frame (),
      .led_ctrl_frame  (led_req)
    );

    // LED service (sintetizável; stream não é consumido em HW)
    resp_stream_if led_stream();
    wire                        led_resp_valid;
    led_control_response_pkg::led_ctrl_resp_bytes_t led_resp_frame;
    led_service #(.ACTIVE_LOW(1)) u_led_synth (
      .clk        (i_clk),
      .rst_n      (i_resetn),
      .frame_valid(frame_valid),
      .msgType    (out_msgType),
      .led_req    (led_req),
      .leds       (leds),
      .resp_valid (led_resp_valid),
      .resp_frame (led_resp_frame),
      .tx_stream  (led_stream)
    );

    // Interface de stream para o motion_service
    resp_stream_if motion_stream();
    // Interface do serviço de motion (ativos quando o serviço publicar
    // respostas). Não amarramos sinais aqui para permitir que o módulo
    // de movimento dirija `motion_stream` diretamente.

    // -------------------------
    // Agregador de TX sintetizável (2 streams: LED e Motion)
    // Serializa frames (bits/len) em bytes e escreve no spi_slave
    // -------------------------
    localparam int SHIFT_BITS = spi_service_pkg::RESP_MAX_BYTES * 8; // 20B → 160 bits
    localparam int LENW       = 5; // até 20 bytes

    // Espelhos dos sinais das interfaces (para indexação por stream)
    // 0 = LED, 1 = Motion
    logic                     stream_valid   [2];
    logic [SHIFT_BITS-1:0]    stream_bits    [2];
    logic [31:0]              stream_len32   [2];
    logic                     stream_ready   [2];

    // Mapeia interfaces → arrays
    assign stream_valid[0] = led_stream.valid;
    assign stream_bits [0] = led_stream.bits;
    assign stream_len32[0] = led_stream.len;
    assign led_stream.ready = stream_ready[0];

    assign stream_valid[1] = motion_stream.valid;
    assign stream_bits [1] = motion_stream.bits;
    assign stream_len32[1] = motion_stream.len;
    assign motion_stream.ready = stream_ready[1];

    // RR com seleção combinacional (similar ao spi_tx_hub_service)
    typedef enum logic [0:0] {IDLE=1'b0, SEND=1'b1} tx_state_t;
    tx_state_t                 tx_state;
    logic                      rr_sel;         // 0: LED primeiro, 1: Motion primeiro
    logic [SHIFT_BITS-1:0]     tx_shift;
    logic [LENW-1:0]           tx_len;
    logic [LENW-1:0]           tx_idx;
    // seleção combinacional do stream
    logic                      pick;
    logic                      pick_idx;       // 0 = LED, 1 = Motion
    // registradores para escrita no spi_slave
    logic                      tx_wr_en_r;
    logic [7:0]                tx_wr_data_r;

    // Combinacional: decidir pick e prontos
    always @* begin
      // defaults
      stream_ready[0] = 1'b0;
      stream_ready[1] = 1'b0;
      pick            = 1'b0;
      pick_idx        = rr_sel;
      if (tx_state == IDLE) begin
        if (stream_valid[rr_sel]) begin
          pick     = 1'b1;
          pick_idx = rr_sel;
          stream_ready[pick_idx] = 1'b1;
        end else if (stream_valid[~rr_sel]) begin
          pick     = 1'b1;
          pick_idx = ~rr_sel;
          stream_ready[pick_idx] = 1'b1;
        end
      end
    end

    // FSM do agregador
    always_ff @(posedge i_clk or negedge i_resetn) begin
      if (!i_resetn) begin
        tx_state     <= IDLE;
        rr_sel       <= 1'b0;
        tx_shift     <= '0;
        tx_len       <= '0;
        tx_idx       <= '0;
        tx_wr_en_r   <= 1'b0;
        tx_wr_data_r <= 8'h00;
      end else begin
        tx_wr_en_r   <= 1'b0; // desativa por padrão
        unique case (tx_state)
          IDLE: begin
            tx_idx <= '0; // pronto para aceitar novo frame
            if (pick) begin
              tx_shift <= stream_bits[pick_idx];
              tx_len   <= stream_len32[pick_idx][LENW-1:0];
              tx_state <= SEND;
              // alterna prioridade a partir do escolhido
              rr_sel   <= ~pick_idx;
            end
          end
          SEND: begin
            // Publica o próximo byte
            tx_wr_en_r   <= 1'b1;
            tx_wr_data_r <= tx_shift[SHIFT_BITS-1 -: 8];
            if (tx_idx + 1 >= tx_len) begin
              // último byte neste ciclo → volta ao IDLE no próximo
              tx_idx   <= '0;
              tx_state <= IDLE;
            end else begin
              tx_idx <= tx_idx + 1'b1;
            end
            // Prepara byte seguinte
            tx_shift <= {tx_shift[SHIFT_BITS-9:0], 8'd0};
          end
          default: tx_state <= IDLE;
        endcase
      end
    end

    // Pulsos de transmissão para o SPI_Slave
    assign tx_wr_en   = tx_wr_en_r;
    assign tx_wr_data = tx_wr_data_r;


    // -------------------------
    // Encoders incrementais (TMCS-28) — posições expostas
    // -------------------------
    // Eixo X (mantém nomes antigos para compatibilidade do .cst)
    logic [31:0]        enc_position;
    logic               enc_step_pulse;
    logic               enc_dir;
    logic               enc_z_pulse;
    logic               enc_illegal;
    logic signed [31:0] enc_velocity;
    logic               enc_vel_valid;

    quad_encoder_tmcs28_driver #(
      .POS_WIDTH(32),
      .FILTER_CYCLES(0),          // ajuste conforme ruído da entrada
      .RESET_ON_INDEX(1'b1),
      .INDEX_OFFSET(0),
      .MODULO(0),                 // 0 = saturação; ajuste se quiser wrap
      .VEL_WINDOW_CYCLES(0),
      .COUNT_MODE(4)              // X4 por padrão
    ) u_quad_enc (
      .clk           (i_clk),
      .rst_n         (i_resetn),
      .i_enc_a       (i_enc_a_x),
      .i_enc_b       (i_enc_b_x),
      .i_enc_z       (i_enc_z_x),
      .o_position    (enc_position),
      .o_step_pulse  (enc_step_pulse),
      .o_dir         (enc_dir),
      .o_index_pulse (enc_z_pulse),
      .o_illegal_pulse(enc_illegal),
      .o_velocity    (enc_velocity),
      .o_vel_valid   (enc_vel_valid)
    );

    // Eixo Y
    logic [31:0]        enc_position_y;
    logic               enc_step_pulse_y;
    logic               enc_dir_y;
    logic               enc_z_pulse_y;
    logic               enc_illegal_y;
    logic signed [31:0] enc_velocity_y;
    logic               enc_vel_valid_y;

    quad_encoder_tmcs28_driver #(
      .POS_WIDTH(32),
      .FILTER_CYCLES(0),
      .RESET_ON_INDEX(1'b1),
      .INDEX_OFFSET(0),
      .MODULO(0),
      .VEL_WINDOW_CYCLES(0),
      .COUNT_MODE(4)
    ) u_quad_enc_y (
      .clk           (i_clk),
      .rst_n         (i_resetn),
      .i_enc_a       (i_enc_a_y_safe),
      .i_enc_b       (i_enc_b_y_safe),
      .i_enc_z       (i_enc_z_y_safe),
      .o_position    (enc_position_y),
      .o_step_pulse  (enc_step_pulse_y),
      .o_dir         (enc_dir_y),
      .o_index_pulse (enc_z_pulse_y),
      .o_illegal_pulse(enc_illegal_y),
      .o_velocity    (enc_velocity_y),
      .o_vel_valid   (enc_vel_valid_y)
    );

    // Eixo Z
    logic [31:0]        enc_position_z;
    logic               enc_step_pulse_z;
    logic               enc_dir_z;
    logic               enc_z_pulse_z;
    logic               enc_illegal_z;
    logic signed [31:0] enc_velocity_z;
    logic               enc_vel_valid_z;

    quad_encoder_tmcs28_driver #(
      .POS_WIDTH(32),
      .FILTER_CYCLES(0),
      .RESET_ON_INDEX(1'b1),
      .INDEX_OFFSET(0),
      .MODULO(0),
      .VEL_WINDOW_CYCLES(0),
      .COUNT_MODE(4)
    ) u_quad_enc_z (
      .clk           (i_clk),
      .rst_n         (i_resetn),
      .i_enc_a       (i_enc_a_z_safe),
      .i_enc_b       (i_enc_b_z_safe),
      .i_enc_z       (i_enc_z_z_safe),
      .o_position    (enc_position_z),
      .o_step_pulse  (enc_step_pulse_z),
      .o_dir         (enc_dir_z),
      .o_index_pulse (enc_z_pulse_z),
      .o_illegal_pulse(enc_illegal_z),
      .o_velocity    (enc_velocity_z),
      .o_vel_valid   (enc_vel_valid_z)
    );

    // As posições ficam internas; expomos apenas um flag agregado de movimento

    // -------------------------
    // Motion service (orquestra 3 eixos)
    // -------------------------
    motion_service #(
      .PROX_IS_PNP(1'b0), // NPN
      .PROX_IS_NO (1'b1),  // Normalmente Aberto (ajuste para 1'b0 se for NC)
      .HOMING_USE_INDEX(1'b1)
    ) u_motion (
      .clk                 (i_clk),
      .rst_n               (i_resetn),
      .frame_valid         (frame_valid),
      .msgType             (out_msgType),
      .start_move_frame    (start_move_frame_w),
      .queue_add_frame     (queue_add_frame_w),
      .move_end_frame      (move_end_frame_w),
      .move_home_frame     (move_home_frame_w),
      .probe_frame         ('0),
      .queue_status_frame  (queue_status_frame_w),
      .enc_pos_x           (enc_position),
      .enc_pos_y           (enc_position_y),
      .enc_pos_z           (enc_position_z),
      .i_idx_pulse_x       (enc_z_pulse),
      .i_idx_pulse_y       (enc_z_pulse_y),
      .i_idx_pulse_z       (enc_z_pulse_z),
      .i_prox_in_x         (i_prox_in_x_safe),
      .i_prox_in_y         (i_prox_in_y_safe),
      .i_prox_in_z         (i_prox_in_z_safe),
      .i_estop_in          (i_estop_in_safe),
      .tmc_step_x          (tmc_step_x_int),
      .tmc_dir_x           (tmc_dir_x_int),
      .tmc_enn_x           (tmc_enn_x_int),
      .tmc_step_y          (tmc_step_y_int),
      .tmc_dir_y           (tmc_dir_y_int),
      .tmc_enn_y           (tmc_enn_y_int),
      .tmc_step_z          (tmc_step_z_int),
      .tmc_dir_z           (tmc_dir_z_int),
      .tmc_enn_z           (tmc_enn_z_int),
      .o_moving            (o_moving),
      .tx_stream           (motion_stream)    // tie-off em HW (ready=1)
    );

    // Saídas para drivers não utilizados (amarradas a níveis seguros)
    assign tmc_step_x = 1'b0;
    assign tmc_dir_x  = 1'b0;
    assign tmc_enn_x  = 1'b1;
    assign tmc_step_y = 1'b0;
    assign tmc_dir_y  = 1'b0;
    assign tmc_enn_y  = 1'b1;
    assign tmc_step_z = 1'b0;
    assign tmc_dir_z  = 1'b0;
    assign tmc_enn_z  = 1'b1;


endmodule
`endif // __TOP_SV__
