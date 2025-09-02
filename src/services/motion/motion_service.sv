// -----------------------------------------------------------------------------
// motion_service.sv
//
// Serviço de movimentação para os eixos X/Y/Z controlados por drivers
// TMC5160 em modo STEP/DIR. Lê frames START_MOVE, MOVE_QUEUE_ADD e MOVE_END
// decodificados pelo spi_rx_hub_service e controla geração de passos, além de
// monitorar sensores de parada de emergência e de proximidade. Um START_MOVE
// habilita o acesso às demais requisições; após um MOVE_END ou evento de
// emergência é necessário novo START_MOVE.
//
// O serviço utiliza um gerador de "tick" comum (tick_gen) com divisores fixos
// e instância três drivers tmc5160_step_dir_driver em modo síncrono. Respostas
// dos comandos são publicadas no stream genérico de respostas.
// -----------------------------------------------------------------------------
`ifndef MOTION_SERVICE_SV
`define MOTION_SERVICE_SV
module motion_service (
    input  logic clk,
    input  logic rst_n,
    // Frames decodificados e sinalização de validade
    input  logic frame_valid,
    input  spi_service_pkg::byte_t msgType,
    input  start_move_request_pkg::start_move_req_bytes_t start_move_frame,
    input  move_queue_add_request_pkg::move_queue_add_req_bytes_t queue_add_frame,
    input  move_end_request_pkg::move_end_req_bytes_t move_end_frame,
    input  move_home_request_pkg::move_home_req_bytes_t move_home_frame,
    input  move_probe_level_request_pkg::move_probe_level_req_bytes_t probe_frame,
    input  move_queue_status_request_pkg::move_queue_status_bytes_t queue_status_frame,
    // Feedback do encoder para controle futuro
    input  logic [31:0]        enc_position,
    input  logic signed [31:0] enc_velocity,
    // Entradas brutas de sensores
    input  logic i_prox_in,
    input  logic i_estop_in,
    // Saídas físicas para os TMC5160 (três eixos)
    output logic tmc_step_x, tmc_dir_x, tmc_enn_x,
    output logic tmc_step_y, tmc_dir_y, tmc_enn_y,
    output logic tmc_step_z, tmc_dir_z, tmc_enn_z,
    // Publicação de respostas
    resp_stream_if.producer tx_stream
);
  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import start_move_request_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_end_request_pkg::*;
  import move_home_request_pkg::*;
  import move_probe_level_request_pkg::*;
  import move_queue_status_request_pkg::*;
  import move_home_response_pkg::*;
  import move_queue_status_response_pkg::*;
  import start_move_response_pkg::*;
  import move_queue_add_response_pkg::*;
  import move_end_response_pkg::*;

  // Sensores -----------------------------------------------------------------
  logic prox_active;
  lj12a3_proximity_driver u_prox (
    .clk        (clk),
    .rst_n      (rst_n),
    .i_sensor_in(i_prox_in),
    .o_active   (prox_active),
    .o_active_pulse(),
    .o_inactive_pulse()
  );

  logic estop_inhibit;
  emergency_stop_driver u_estop (
    .clk              (clk),
    .rst_n            (rst_n),
    .i_estop_in       (i_estop_in),
    .i_clear          (1'b0),
    .o_estop_active   (),
    .o_estop_engage_pulse(),
    .o_estop_release_pulse(),
    .o_inhibit        (estop_inhibit)
  );

  // Gerador de tick compartilhado --------------------------------------------
  localparam logic [31:0] TICK_DIV = 32'd1000;   // valores fixos iniciais
  localparam logic [31:0] PID_DIV  = 32'd10000;
  logic tick, pid_tick, sync_start;
  logic sync_req;
  logic tick_enable;

  tick_gen u_tick (
    .clk            (clk),
    .rst_n          (rst_n),
    .i_enable       (tick_enable),
    .i_tick_div     (TICK_DIV),
    .i_pid_div      (PID_DIV),
    .i_sync_start_req(sync_req),
    .o_tick         (tick),
    .o_pid_tick     (pid_tick),
    .o_sync_start   (sync_start)
  );

  // Drivers TMC5160 ----------------------------------------------------------
  logic start_x, start_y, start_z;
  logic stop_all;
  assign stop_all = estop_inhibit | prox_active | move_end_pulse;

  // Parâmetros de movimento armazenados
  logic [2:0]  dir_mask;
  logic [31:0] step_x, step_y, step_z;
  logic [31:0] rate_x, rate_y, rate_z;
  logic        cont_x, cont_y, cont_z;
  logic [7:0]  current_move_id;

  // Controle de homing
  logic        home_pending;
  logic [7:0]  home_frame_id;
  logic [2:0]  home_axis_mask;

  // Pulsos de parada provenientes de MOVE_END
  logic move_end_pulse;

  tmc5160_step_dir_driver #(.SYNC_MODE(1)) u_drv_x (
    .clk         (clk),
    .rst_n       (rst_n),
    .i_enable    (tick_enable & ~estop_inhibit & ~prox_active),
    .i_dir       (dir_mask[0]),
    .i_start     (start_x),
    .i_stop      (stop_all),
    .i_continuous(cont_x),
    .i_steps     (step_x),
    .i_period_cycles(32'd0),
    .i_pulse_cycles (32'd0),
    .i_tick      (tick),
    .i_rate_inc  (rate_x),
    .i_pulse_ticks(16'd1),
    .o_step      (tmc_step_x),
    .o_dir       (tmc_dir_x),
    .o_enn       (tmc_enn_x),
    .o_busy      (busy_x),
    .o_done_pulse()
  );

  tmc5160_step_dir_driver #(.SYNC_MODE(1)) u_drv_y (
    .clk         (clk),
    .rst_n       (rst_n),
    .i_enable    (tick_enable & ~estop_inhibit & ~prox_active),
    .i_dir       (dir_mask[1]),
    .i_start     (start_y),
    .i_stop      (stop_all),
    .i_continuous(cont_y),
    .i_steps     (step_y),
    .i_period_cycles(32'd0),
    .i_pulse_cycles (32'd0),
    .i_tick      (tick),
    .i_rate_inc  (rate_y),
    .i_pulse_ticks(16'd1),
    .o_step      (tmc_step_y),
    .o_dir       (tmc_dir_y),
    .o_enn       (tmc_enn_y),
    .o_busy      (busy_y),
    .o_done_pulse()
  );

  tmc5160_step_dir_driver #(.SYNC_MODE(1)) u_drv_z (
    .clk         (clk),
    .rst_n       (rst_n),
    .i_enable    (tick_enable & ~estop_inhibit & ~prox_active),
    .i_dir       (dir_mask[2]),
    .i_start     (start_z),
    .i_stop      (stop_all),
    .i_continuous(cont_z),
    .i_steps     (step_z),
    .i_period_cycles(32'd0),
    .i_pulse_cycles (32'd0),
    .i_tick      (tick),
    .i_rate_inc  (rate_z),
    .i_pulse_ticks(16'd1),
    .o_step      (tmc_step_z),
    .o_dir       (tmc_dir_z),
    .o_enn       (tmc_enn_z),
    .o_busy      (busy_z),
    .o_done_pulse()
  );

  // FSM de controle ----------------------------------------------------------
  logic move_enabled;

  // Buffer de publicação no stream genérico de respostas
  localparam int SHIFT_BITS = spi_service_pkg::RESP_MAX_BYTES * 8;
  logic                      pending;
  logic [SHIFT_BITS-1:0]     pend_bits;
  int unsigned               pend_len;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      move_enabled <= 1'b0;
      start_x      <= 1'b0;
      start_y      <= 1'b0;
      start_z      <= 1'b0;
      sync_req     <= 1'b0;
      move_end_pulse <= 1'b0;
      pending      <= 1'b0;
      pend_bits    <= '0;
      pend_len     <= '0;
      dir_mask     <= 3'd0;
      step_x       <= 32'd0;
      step_y       <= 32'd0;
      step_z       <= 32'd0;
      rate_x       <= 32'd0;
      rate_y       <= 32'd0;
      rate_z       <= 32'd0;
      cont_x       <= 1'b0;
      cont_y       <= 1'b0;
      cont_z       <= 1'b0;
      current_move_id <= 8'd0;
      home_pending <= 1'b0;
      home_frame_id <= 8'd0;
      home_axis_mask <= 3'd0;
    end else begin
      start_x      <= 1'b0;
      start_y      <= 1'b0;
      start_z      <= 1'b0;
      sync_req     <= 1'b0;
      move_end_pulse <= 1'b0;

      if (pending && tx_stream.ready) begin
        pending <= 1'b0;
      end

      if (estop_inhibit)
        move_enabled <= 1'b0;

      // Resposta de homing quando sensor aciona
      if (home_pending && prox_active) begin
        move_home_resp_bytes_t r;
        r = move_home_response_pkg::make_default();
        r.frameIdEcho = home_frame_id;
        r.status      = 8'd0; // ALL_OK
        r.axisHomeMask = {5'b0, home_axis_mask};
        r.errorFlags  = 8'd0;
        r             = move_home_response_pkg::set_parity(r);
        pend_bits <= '0;
        pend_bits[SHIFT_BITS-1 -: move_home_response_pkg::FRAME_BITS]
                  <= move_home_response_pkg::encoder(r);
        pend_len  <= move_home_response_pkg::FRAME_BITS/8; // 8
        pending   <= 1'b1;
        home_pending <= 1'b0;
        cont_x <= 1'b0;
        cont_y <= 1'b0;
        cont_z <= 1'b0;
      end

      if (frame_valid) begin
        case (msgType)
          START_MOVE_TYPE: begin
            start_move_resp_bytes_t r;
            move_enabled <= 1'b1;
            sync_req     <= 1'b1; // alinhamento no próximo tick
            r = start_move_response_pkg::make_default();
            r.frameIdEcho = start_move_frame.frameId;
            pend_bits      <= '0;
            pend_bits[SHIFT_BITS-1 -: 32] <= start_move_response_pkg::encoder(r);
            pend_len       <= 4;
            pending        <= 1'b1;
          end
          MOVE_TYPE: begin
            move_queue_add_resp_bytes_t r;
            if (move_enabled) begin
              dir_mask <= queue_add_frame.dirMask[2:0];
              step_x   <= queue_add_frame.sx;
              step_y   <= queue_add_frame.sy;
              step_z   <= queue_add_frame.sz;
              rate_x   <= {queue_add_frame.vx,16'd0};
              rate_y   <= {queue_add_frame.vy,16'd0};
              rate_z   <= {queue_add_frame.vz,16'd0};
              cont_x   <= 1'b0;
              cont_y   <= 1'b0;
              cont_z   <= 1'b0;
              start_x  <= (queue_add_frame.sx != 0);
              start_y  <= (queue_add_frame.sy != 0);
              start_z  <= (queue_add_frame.sz != 0);
              current_move_id <= queue_add_frame.frameId;
              r = move_queue_add_response_pkg::make_default_ok(queue_add_frame.frameId);
            end else begin
              r = move_queue_add_response_pkg::make_default_err(queue_add_frame.frameId);
            end
            r = move_queue_add_response_pkg::set_parity(r);
            pend_bits <= '0;
            pend_bits[SHIFT_BITS-1 -: move_queue_add_response_pkg::FRAME_BITS]
                      <= move_queue_add_response_pkg::encoder(r);
            pend_len  <= move_queue_add_response_pkg::FRAME_BITS/8; // 6
            pending   <= 1'b1;
          end
          MOVE_HOME_TYPE: begin
            move_home_resp_bytes_t r;
            if (move_enabled) begin
              dir_mask <= move_home_frame.dirMask[2:0];
              step_x   <= 32'd0;
              step_y   <= 32'd0;
              step_z   <= 32'd0;
              rate_x   <= {move_home_frame.vhome,16'd0};
              rate_y   <= {move_home_frame.vhome,16'd0};
              rate_z   <= {move_home_frame.vhome,16'd0};
              cont_x   <= move_home_frame.axisMask[0];
              cont_y   <= move_home_frame.axisMask[1];
              cont_z   <= move_home_frame.axisMask[2];
              start_x  <= move_home_frame.axisMask[0];
              start_y  <= move_home_frame.axisMask[1];
              start_z  <= move_home_frame.axisMask[2];
              home_frame_id  <= move_home_frame.frameId;
              home_axis_mask <= move_home_frame.axisMask[2:0];
              home_pending   <= |move_home_frame.axisMask[2:0];
              current_move_id <= move_home_frame.frameId;
            end else begin
              r = move_home_response_pkg::make_default();
              r.frameIdEcho = move_home_frame.frameId;
              r.status      = 8'd1; // BUSY/desabilitado
              r = move_home_response_pkg::set_parity(r);
              pend_bits <= '0;
              pend_bits[SHIFT_BITS-1 -: move_home_response_pkg::FRAME_BITS]
                        <= move_home_response_pkg::encoder(r);
              pend_len  <= move_home_response_pkg::FRAME_BITS/8; //8
              pending   <= 1'b1;
            end
          end
          MOVE_QUEUE_STATUS_TYPE: begin
            move_queue_status_resp_bytes_t r;
            r = move_queue_status_response_pkg::make_default();
            r.frameIdEcho = current_move_id;
            r.status      = (busy_x | busy_y | busy_z) ? 8'd0 : 8'd1; // Running/Idle
            r = move_queue_status_response_pkg::set_parity(r);
            pend_bits <= '0;
            pend_bits[SHIFT_BITS-1 -: move_queue_status_response_pkg::FRAME_BITS]
                      <= move_queue_status_response_pkg::encoder(r);
            pend_len  <= move_queue_status_response_pkg::FRAME_BITS/8; //12
            pending   <= 1'b1;
          end
          MOVE_END_TYPE: begin
            move_end_resp_bytes_t r;
            move_enabled  <= 1'b0;
            move_end_pulse <= 1'b1;
            home_pending  <= 1'b0;
            r = move_end_response_pkg::make_default();
            r.frameIdEcho = move_end_frame.frameId;
            pend_bits      <= '0;
            pend_bits[SHIFT_BITS-1 -: 32] <= move_end_response_pkg::encoder(r);
            pend_len       <= 4;
            pending        <= 1'b1;
          end
          default: begin
          end
        endcase
      end
    end
  end

  assign tick_enable = move_enabled;

  // Stream de respostas ------------------------------------------------------
  assign tx_stream.valid = pending;
  assign tx_stream.bits  = pend_bits;
  assign tx_stream.len   = pend_len;

  // Supressão de avisos de sinais não utilizados
  /* verilator lint_off UNUSEDSIGNAL */
  logic _unused;
  assign _unused = ^{probe_frame.header, move_home_frame.header, queue_status_frame.header,
                    enc_position[0], enc_velocity[0], pid_tick, sync_start};
  /* verilator lint_on UNUSEDSIGNAL */
endmodule
`endif
