// -----------------------------------------------------------------------------
// motion_service.sv
//
// Serviço de movimentação para os eixos X/Y/Z controlados por drivers
// TMC5160 em modo STEP/DIR. Orquestra três axis_controller (um por eixo),
// que agregam PID + driver + sensor local de proximidade. Recebe frames
// START_MOVE, MOVE_QUEUE_ADD, MOVE_END, MOVE_HOME e publica respostas
// via stream genérico.
// -----------------------------------------------------------------------------
`ifndef MOTION_SERVICE_SV
`define MOTION_SERVICE_SV

module motion_service #(
    // Configuração elétrica dos sensores de proximidade por eixo
    // PROX_IS_PNP=1 => PNP; 0 => NPN. PROX_IS_NO=1 => Normalmente Aberto; 0 => Normalmente Fechado
    parameter bit PROX_IS_PNP = 1'b1,
    parameter bit PROX_IS_NO  = 1'b1,
    // Homing: 1 para realizar etapa fine em Z após PROX
    parameter bit HOMING_USE_INDEX = 1'b0
) (
    input  logic clk,
    input  logic rst_n,
    // Frames decodificados
    input  logic frame_valid,
    input  spi_service_pkg::byte_t msgType,
    input  var start_move_request_pkg::start_move_req_bytes_t        start_move_frame,
    input  var move_queue_add_request_pkg::move_queue_add_req_bytes_t queue_add_frame,
    input  var move_end_request_pkg::move_end_req_bytes_t            move_end_frame,
    input  var move_home_request_pkg::move_home_req_bytes_t          move_home_frame,
    input  var move_probe_level_request_pkg::move_probe_level_req_bytes_t probe_frame,
    input  var move_queue_status_request_pkg::move_queue_status_bytes_t   queue_status_frame,
    // Feedback de encoders por eixo (posição absoluta)
    input  logic [31:0]        enc_pos_x,
    input  logic [31:0]        enc_pos_y,
    input  logic [31:0]        enc_pos_z,
    // Sensores brutos por eixo
    input  logic i_prox_in_x,
    input  logic i_prox_in_y,
    input  logic i_prox_in_z,
    // Pulsos de índice Z por eixo (opcional)
    input  logic i_idx_pulse_x,
    input  logic i_idx_pulse_y,
    input  logic i_idx_pulse_z,
    input  logic i_estop_in,
    // Saídas físicas (TMC5160)
    output logic tmc_step_x, tmc_dir_x, tmc_enn_x,
    output logic tmc_step_y, tmc_dir_y, tmc_enn_y,
    output logic tmc_step_z, tmc_dir_z, tmc_enn_z,
    // Indicador agregado de movimento
    output logic o_moving,
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
  import home_status_response_pkg::*;

  // Proximidade por eixo (PNP/NO, ativo-alto)
  logic prox_active_x, prox_active_y, prox_active_z;
  lj12a3_proximity_driver #(
    .IS_PNP(PROX_IS_PNP), .IS_NORMALLY_OPEN(PROX_IS_NO)
  ) u_prox_x (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(i_prox_in_x),
    .o_active(prox_active_x), .o_active_pulse(), .o_inactive_pulse()
  );
  lj12a3_proximity_driver #(
    .IS_PNP(PROX_IS_PNP), .IS_NORMALLY_OPEN(PROX_IS_NO)
  ) u_prox_y (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(i_prox_in_y),
    .o_active(prox_active_y), .o_active_pulse(), .o_inactive_pulse()
  );
  lj12a3_proximity_driver #(
    .IS_PNP(PROX_IS_PNP), .IS_NORMALLY_OPEN(PROX_IS_NO)
  ) u_prox_z (
    .clk(clk), .rst_n(rst_n), .i_sensor_in(i_prox_in_z),
    .o_active(prox_active_z), .o_active_pulse(), .o_inactive_pulse()
  );

  // Máscara combinacional de proximidade por eixo
  logic [2:0] prox_mask;
  assign prox_mask = {prox_active_z, prox_active_y, prox_active_x};

  // Home offsets/valid e posições relativas (multi-voltas)
  logic [31:0]        home_offset_x, home_offset_y, home_offset_z;
  logic [2:0]         home_valid;
  logic signed [31:0] pos_rel_x, pos_rel_y, pos_rel_z;
  // Máscara de conclusão por eixo (pré-declarada por compatibilidade com compiladores)
  logic [2:0]         axis_done_mask;
  // Registros para frames de resposta (evita declarações depois de statements)
  move_home_response_pkg::move_home_resp_bytes_t home_resp_r;
  home_status_response_pkg::home_status_resp_bytes_t home_status_r;
  // Publicação complementar de HOME_STATUS
  logic post_home_status_pending;
  // Latch de conclusão de homing (evita perder o evento quando pending=1)
  logic home_all_done_latched;

  // E-STOP
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

  // Tick compartilhado
`ifdef __SIM_BUILD__
  localparam logic [31:0] TICK_DIV = 32'd1;
  localparam logic [31:0] PID_DIV  = 32'd64;
`else
  localparam logic [31:0] TICK_DIV = 32'd1000;
  localparam logic [31:0] PID_DIV  = 32'd10000;
`endif
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

  // Estado de movimento
  logic move_enabled;
  logic start_x, start_y, start_z;
  logic stop_x, stop_y, stop_z;
  logic [2:0]  dir_mask;
  logic [31:0] step_x, step_y, step_z;
  logic [31:0] ff_rate_x, ff_rate_y, ff_rate_z;
  logic [15:0] kp_x, ki_x, kd_x;
  logic [15:0] kp_y, ki_y, kd_y;
  logic [15:0] kp_z, ki_z, kd_z;
  logic        cont_x, cont_y, cont_z;
  logic        busy_x, busy_y, busy_z;
  logic [7:0]  pid_err_x, pid_err_y, pid_err_z;
  logic        move_end_pulse;
  // Controle de homing (por eixo) — apenas MOVE_HOME aciona
  logic        home_mode;         // em processo de homing multi-eixos
  logic [7:0]  home_frame_id;
  logic [2:0]  home_axis_mask;    // eixos solicitados
  // FSMs por eixo
  logic        home_start_x, home_start_y, home_start_z;
  logic        home_run_x,   home_run_y,   home_run_z;
  logic        home_coarse_x,home_coarse_y,home_coarse_z;
  logic        home_done_x,  home_done_y,  home_done_z;

`ifdef __SIM_BUILD__
  localparam bit SAFETY_ENABLE = 1'b0;
`else
  localparam bit SAFETY_ENABLE = 1'b1;
`endif
  // Stop/enable por eixo (E-STOP global + prox do próprio eixo)
  assign stop_x = ((SAFETY_ENABLE ? (estop_inhibit | prox_active_x) : 1'b0) | move_end_pulse);
  assign stop_y = ((SAFETY_ENABLE ? (estop_inhibit | prox_active_y) : 1'b0) | move_end_pulse);
  assign stop_z = ((SAFETY_ENABLE ? (estop_inhibit | prox_active_z) : 1'b0) | move_end_pulse);

  // Cálculo de velocidades por eixo (diferença por pid_tick)
  logic [31:0]        enc_pos_x_q, enc_pos_y_q, enc_pos_z_q;
  logic signed [31:0] enc_vel_x, enc_vel_y, enc_vel_z;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      enc_pos_x_q <= '0; enc_pos_y_q <= '0; enc_pos_z_q <= '0;
      enc_vel_x   <= '0; enc_vel_y   <= '0; enc_vel_z   <= '0;
      pos_rel_x   <= '0; pos_rel_y   <= '0; pos_rel_z   <= '0;
    end else if (pid_tick) begin
      enc_vel_x   <= $signed(enc_pos_x) - $signed(enc_pos_x_q);
      enc_vel_y   <= $signed(enc_pos_y) - $signed(enc_pos_y_q);
      enc_vel_z   <= $signed(enc_pos_z) - $signed(enc_pos_z_q);
      enc_pos_x_q <= enc_pos_x;
      enc_pos_y_q <= enc_pos_y;
      enc_pos_z_q <= enc_pos_z;
      // Posição relativa desde o home (se válido)
      pos_rel_x   <= home_valid[0] ? ($signed(enc_pos_x) - $signed(home_offset_x)) : '0;
      pos_rel_y   <= home_valid[1] ? ($signed(enc_pos_y) - $signed(home_offset_y)) : '0;
      pos_rel_z   <= home_valid[2] ? ($signed(enc_pos_z) - $signed(home_offset_z)) : '0;
    end
  end

  // Eixos (axis_controller_service agrega PID + driver + prox local — usa prox local)
  logic drv_enable_x, drv_enable_y, drv_enable_z;
  assign drv_enable_x = SAFETY_ENABLE ? (tick_enable & ~estop_inhibit & ~prox_active_x) : tick_enable;
  assign drv_enable_y = SAFETY_ENABLE ? (tick_enable & ~estop_inhibit & ~prox_active_y) : tick_enable;
  assign drv_enable_z = SAFETY_ENABLE ? (tick_enable & ~estop_inhibit & ~prox_active_z) : tick_enable;

  axis_controller_service u_axis_x (
    .clk(clk), .rst_n(rst_n),
    .i_enable(drv_enable_x), .i_dir(dir_mask[0]), .i_start(start_x), .i_stop(stop_x),
    .i_continuous(cont_x), .i_steps(step_x), .i_tick(tick), .i_pid_tick(pid_tick),
    .i_target(step_x), .i_ff_rate(ff_rate_x), .i_kp(kp_x), .i_ki(ki_x), .i_kd(kd_x),
    .i_enc_pos(enc_pos_x), .i_enc_vel(enc_vel_x), .i_prox_in(i_prox_in_x),
    .o_step(tmc_step_x), .o_dir(tmc_dir_x), .o_enn(tmc_enn_x), .o_busy(busy_x),
    .o_position(), .o_prox_active()
  );

  axis_controller_service u_axis_y (
    .clk(clk), .rst_n(rst_n),
    .i_enable(drv_enable_y), .i_dir(dir_mask[1]), .i_start(start_y), .i_stop(stop_y),
    .i_continuous(cont_y), .i_steps(step_y), .i_tick(tick), .i_pid_tick(pid_tick),
    .i_target(step_y), .i_ff_rate(ff_rate_y), .i_kp(kp_y), .i_ki(ki_y), .i_kd(kd_y),
    .i_enc_pos(enc_pos_y), .i_enc_vel(enc_vel_y), .i_prox_in(i_prox_in_y),
    .o_step(tmc_step_y), .o_dir(tmc_dir_y), .o_enn(tmc_enn_y), .o_busy(busy_y),
    .o_position(), .o_prox_active()
  );

  axis_controller_service u_axis_z (
    .clk(clk), .rst_n(rst_n),
    .i_enable(drv_enable_z), .i_dir(dir_mask[2]), .i_start(start_z), .i_stop(stop_z),
    .i_continuous(cont_z), .i_steps(step_z), .i_tick(tick), .i_pid_tick(pid_tick),
    .i_target(step_z), .i_ff_rate(ff_rate_z), .i_kp(kp_z), .i_ki(ki_z), .i_kd(kd_z),
    .i_enc_pos(enc_pos_z), .i_enc_vel(enc_vel_z), .i_prox_in(i_prox_in_z),
    .o_step(tmc_step_z), .o_dir(tmc_dir_z), .o_enn(tmc_enn_z), .o_busy(busy_z),
    .o_position(), .o_prox_active()
  );

  // FSMs de homing por eixo
  axis_home_service #(.USE_INDEX(HOMING_USE_INDEX)) u_home_x (
    .clk(clk), .rst_n(rst_n), .start_pulse(home_start_x),
    .prox_active(prox_active_x), .idx_pulse(i_idx_pulse_x),
    .running(home_run_x), .coarse_done(home_coarse_x), .done(home_done_x)
  );
  axis_home_service #(.USE_INDEX(HOMING_USE_INDEX)) u_home_y (
    .clk(clk), .rst_n(rst_n), .start_pulse(home_start_y),
    .prox_active(prox_active_y), .idx_pulse(i_idx_pulse_y),
    .running(home_run_y), .coarse_done(home_coarse_y), .done(home_done_y)
  );
  axis_home_service #(.USE_INDEX(HOMING_USE_INDEX)) u_home_z (
    .clk(clk), .rst_n(rst_n), .start_pulse(home_start_z),
    .prox_active(prox_active_z), .idx_pulse(i_idx_pulse_z),
    .running(home_run_z), .coarse_done(home_coarse_z), .done(home_done_z)
  );

  // FSM de controle e stream de respostas -----------------------------------
  logic [2:0] start_pending;
  localparam int SHIFT_BITS = spi_service_pkg::RESP_MAX_BYTES * 8;
  logic                      pending;
  logic [SHIFT_BITS-1:0]     pend_bits;
  int unsigned               pend_len;
  // move_end_pulse já declarado acima
  logic [7:0]                current_move_id;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      move_enabled   <= 1'b0;
      start_x        <= 1'b0;
      start_y        <= 1'b0;
      start_z        <= 1'b0;
      sync_req       <= 1'b0;
      move_end_pulse <= 1'b0;
      pending        <= 1'b0;
      pend_bits      <= '0;
      pend_len       <= '0;
      dir_mask       <= 3'd0;
      step_x         <= 32'd0;
      step_y         <= 32'd0;
      step_z         <= 32'd0;
      ff_rate_x      <= 32'd0;
      ff_rate_y      <= 32'd0;
      ff_rate_z      <= 32'd0;
      kp_x <= 16'd0; ki_x <= 16'd0; kd_x <= 16'd0;
      kp_y <= 16'd0; ki_y <= 16'd0; kd_y <= 16'd0;
      kp_z <= 16'd0; ki_z <= 16'd0; kd_z <= 16'd0;
      cont_x         <= 1'b0;
      cont_y         <= 1'b0;
      cont_z         <= 1'b0;
      current_move_id<= 8'd0;
      start_pending  <= 3'b000;
      home_mode      <= 1'b0;
      home_frame_id  <= 8'd0;
      home_axis_mask <= 3'd0;
      home_start_x   <= 1'b0; home_start_y <= 1'b0; home_start_z <= 1'b0;
      home_offset_x  <= '0; home_offset_y <= '0; home_offset_z <= '0;
      home_valid     <= 3'b000;
      post_home_status_pending <= 1'b0;
      home_all_done_latched    <= 1'b0;
    end else begin
      start_x        <= 1'b0;
      start_y        <= 1'b0;
      start_z        <= 1'b0;
      sync_req       <= 1'b0;
      move_end_pulse <= 1'b0;

      // Em simulação, não derruba por E-STOP (SAFETY_ENABLE=0)
      if (SAFETY_ENABLE && estop_inhibit)
        move_enabled <= 1'b0;

      // Emite starts alinhados ao próximo tick
      if (sync_start && (start_pending != 3'b000)) begin
        start_x       <= start_pending[0];
        start_y       <= start_pending[1];
        start_z       <= start_pending[2];
        start_pending <= 3'b000;
      end

      // Homing: finalizar quando todos os eixos solicitados concluírem
      if (home_mode) begin
        // Para cada eixo concluído, derruba o contínuo daquele eixo
        if (home_done_x && home_axis_mask[0]) cont_x <= 1'b0;
        if (home_done_y && home_axis_mask[1]) cont_y <= 1'b0;
        if (home_done_z && home_axis_mask[2]) cont_z <= 1'b0;

        axis_done_mask = { home_done_z, home_done_y, home_done_x } & home_axis_mask;

        if (axis_done_mask == home_axis_mask) begin
          // Latch de conclusão (captura apenas uma vez)
          home_all_done_latched <= 1'b1;
          // Captura offsets no momento da conclusão (se ainda não válidos)
          if (home_axis_mask[0] && !home_valid[0]) begin
            home_offset_x <= enc_pos_x;
            home_valid[0] <= 1'b1;
          end
          if (home_axis_mask[1] && !home_valid[1]) begin
            home_offset_y <= enc_pos_y;
            home_valid[1] <= 1'b1;
          end
          if (home_axis_mask[2] && !home_valid[2]) begin
            home_offset_z <= enc_pos_z;
            home_valid[2] <= 1'b1;
          end
          home_mode <= 1'b0; // sai do modo homing
        end
      end

      if (frame_valid) begin
        case (msgType)
          START_MOVE_TYPE: begin
            start_move_resp_bytes_t r;
            move_enabled <= 1'b1;
            sync_req     <= 1'b1;
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
              dir_mask  <= queue_add_frame.dirMask[2:0];
              step_x    <= queue_add_frame.sx;
              step_y    <= queue_add_frame.sy;
              step_z    <= queue_add_frame.sz;
              ff_rate_x <= {queue_add_frame.vx,16'd0};
              ff_rate_y <= {queue_add_frame.vy,16'd0};
              ff_rate_z <= {queue_add_frame.vz,16'd0};
              kp_x      <= queue_add_frame.kp_x;
              ki_x      <= queue_add_frame.ki_x;
              kd_x      <= queue_add_frame.kd_x;
              kp_y      <= queue_add_frame.kp_y;
              ki_y      <= queue_add_frame.ki_y;
              kd_y      <= queue_add_frame.kd_y;
              kp_z      <= queue_add_frame.kp_z;
              ki_z      <= queue_add_frame.ki_z;
              kd_z      <= queue_add_frame.kd_z;
              cont_x    <= 1'b0;
              cont_y    <= 1'b0;
              cont_z    <= 1'b0;
              start_pending[0] <= (queue_add_frame.sx != 0);
              start_pending[1] <= (queue_add_frame.sy != 0);
              start_pending[2] <= (queue_add_frame.sz != 0);
              if ((queue_add_frame.sx!=0) || (queue_add_frame.sy!=0) || (queue_add_frame.sz!=0))
                sync_req <= 1'b1;
              current_move_id <= queue_add_frame.frameId;
              r = move_queue_add_response_pkg::make_default_ok(queue_add_frame.frameId);
            end else begin
              r = move_queue_add_response_pkg::make_default_err(queue_add_frame.frameId);
            end
            r = move_queue_add_response_pkg::set_parity(r);
            pend_bits <= '0;
            pend_bits[SHIFT_BITS-1 -: move_queue_add_response_pkg::FRAME_BITS]
                      <= move_queue_add_response_pkg::encoder(r);
            pend_len  <= move_queue_add_response_pkg::FRAME_BITS/8;
            pending   <= 1'b1;
          end
          MOVE_HOME_TYPE: begin
            if (move_enabled) begin
              dir_mask  <= move_home_frame.dirMask[2:0];
              // Zera passos (modo contínuo)
              step_x    <= 32'd0; step_y <= 32'd0; step_z <= 32'd0;
              // Velocidade de homing
              ff_rate_x <= {move_home_frame.vhome,16'd0};
              ff_rate_y <= {move_home_frame.vhome,16'd0};
              ff_rate_z <= {move_home_frame.vhome,16'd0};
              // Ganhos nulos durante homing
              kp_x      <= 16'd0; ki_x <= 16'd0; kd_x <= 16'd0;
              kp_y      <= 16'd0; ki_y <= 16'd0; kd_y <= 16'd0;
              kp_z      <= 16'd0; ki_z <= 16'd0; kd_z <= 16'd0;
              // Liga contínuo apenas nos eixos solicitados
              cont_x    <= move_home_frame.axisMask[0];
              cont_y    <= move_home_frame.axisMask[1];
              cont_z    <= move_home_frame.axisMask[2];
              // Dispara starts alinhados
              start_pending    <= move_home_frame.axisMask[2:0];
              if (|move_home_frame.axisMask[2:0]) sync_req <= 1'b1;
              current_move_id  <= move_home_frame.frameId;
              // Homing mode
              home_mode        <= |move_home_frame.axisMask[2:0];
              home_frame_id    <= move_home_frame.frameId;
              home_axis_mask   <= move_home_frame.axisMask[2:0];
              // Pulso de start para FSMs por eixo
              home_start_x     <= move_home_frame.axisMask[0];
              home_start_y     <= move_home_frame.axisMask[1];
              home_start_z     <= move_home_frame.axisMask[2];
            end else begin
              move_home_resp_bytes_t r;
              r = move_home_response_pkg::make_default();
              r.frameIdEcho = move_home_frame.frameId;
              r.status      = 8'd1; // desabilitado
              r = move_home_response_pkg::set_parity(r);
              pend_bits <= '0;
              pend_bits[SHIFT_BITS-1 -: move_home_response_pkg::FRAME_BITS]
                        <= move_home_response_pkg::encoder(r);
              pend_len  <= move_home_response_pkg::FRAME_BITS/8;
              pending   <= 1'b1;
            end
          end
          MOVE_QUEUE_STATUS_TYPE: begin
            move_queue_status_resp_bytes_t r;
            r = move_queue_status_response_pkg::make_default();
            r.frameIdEcho = current_move_id;
            r.status      = (busy_x | busy_y | busy_z) ? 8'd0 : 8'd1; // Running/Idle
            r.pidErrX     = 8'd0;
            r.pidErrY     = 8'd0;
            r.pidErrZ     = 8'd0;
            r = move_queue_status_response_pkg::set_parity(r);
            pend_bits <= '0;
            pend_bits[SHIFT_BITS-1 -: 96]
                      <= move_queue_status_response_pkg::encoder(r);
            pend_len  <= 12;
            pending   <= 1'b1;
            // Se offsets ainda não válidos, publica aviso via HOME_STATUS (axisMask = válidos)
            if ((home_valid != 3'b111) && !post_home_status_pending) begin
              post_home_status_pending <= 1'b1; // será publicado após este frame
            end
          end
          MOVE_END_TYPE: begin
            move_end_resp_bytes_t r;
            move_enabled  <= 1'b0;
            move_end_pulse <= 1'b1;
            ff_rate_x    <= 32'd0;
            ff_rate_y    <= 32'd0;
            ff_rate_z    <= 32'd0;
            kp_x <= 16'd0; ki_x <= 16'd0; kd_x <= 16'd0;
            kp_y <= 16'd0; ki_y <= 16'd0; kd_y <= 16'd0;
            kp_z <= 16'd0; ki_z <= 16'd0; kd_z <= 16'd0;
            r = move_end_response_pkg::make_default();
            r.frameIdEcho = move_end_frame.frameId;
            pend_bits      <= '0;
            pend_bits[SHIFT_BITS-1 -: 32] <= move_end_response_pkg::encoder(r);
            pend_len       <= 4;
            pending        <= 1'b1;
          end
          default: begin end
        endcase
      end

      // Publicação do MOVE_HOME latched quando o stream estiver livre
      if (home_all_done_latched && !pending && tx_stream.ready) begin
        home_resp_r = move_home_response_pkg::make_default();
        home_resp_r.frameIdEcho  = home_frame_id;
        home_resp_r.status       = 8'd0; // ALL_OK
        home_resp_r.axisHomeMask = {5'b0, home_axis_mask};
        home_resp_r.errorFlags   = 8'd0;
        home_resp_r = move_home_response_pkg::set_parity(home_resp_r);
        pend_bits <= '0;
        pend_bits[SHIFT_BITS-1 -: move_home_response_pkg::FRAME_BITS]
                  <= move_home_response_pkg::encoder(home_resp_r);
        pend_len  <= move_home_response_pkg::FRAME_BITS/8;
        pending   <= 1'b1;
        post_home_status_pending <= 1'b1; // agendar HOME_STATUS em seguida
        home_all_done_latched <= 1'b0;
      end

      if (pending && tx_stream.ready)
        pending <= 1'b0;

      // Publicação complementar de HOME_STATUS quando o stream liberar
      if (post_home_status_pending && (!pending) && tx_stream.ready) begin
        home_status_r = home_status_response_pkg::make_default();
        home_status_r.frameIdEcho  = home_frame_id;
        home_status_r.axisMask     = {5'b0, home_valid};
        home_status_r.posRelX_lo16 = pos_rel_x[15:0];
        home_status_r.posRelY_lo16 = pos_rel_y[15:0];
        home_status_r.posRelZ_lo16 = pos_rel_z[15:0];
        home_status_r.homeOffX_lo16= home_offset_x[15:0];
        home_status_r.homeOffY_lo16= home_offset_y[15:0];
        home_status_r.homeOffZ_lo16= home_offset_z[15:0];
        home_status_r = home_status_response_pkg::set_parity(home_status_r);
        pend_bits <= '0;
        pend_bits[SHIFT_BITS-1 -: home_status_response_pkg::FRAME_BITS]
                  <= home_status_response_pkg::encoder(home_status_r);
        pend_len  <= home_status_response_pkg::FRAME_BITS/8; // 18
        pending   <= 1'b1;
        post_home_status_pending <= 1'b0;
      end

      // limpa pulso de start das FSMs de homing
      home_start_x <= 1'b0; home_start_y <= 1'b0; home_start_z <= 1'b0;
    end
  end

  assign tick_enable = move_enabled;
  assign o_moving    = (busy_x | busy_y | busy_z);
  assign tx_stream.valid = pending;
  assign tx_stream.bits  = pend_bits;
  assign tx_stream.len   = pend_len;

  // Publicação de HOME_STATUS integrada ao bloco principal

endmodule
`endif
