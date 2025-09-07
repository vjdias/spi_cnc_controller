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
    parameter bit PROX_IS_PNP      = 1'b1,
    parameter bit PROX_IS_NO       = 1'b1,
    // Quando 1, o homing aguarda pulso de índice (Z) após o sensor de proximidade
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
    // Pulsos de índice Z dos encoders
    input  logic              i_idx_pulse_x,
    input  logic              i_idx_pulse_y,
    input  logic              i_idx_pulse_z,
    // Sensores brutos por eixo
    input  logic i_prox_in_x,
    input  logic i_prox_in_y,
    input  logic i_prox_in_z,
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
  import home_status_response_pkg::*;
  import move_queue_status_response_pkg::*;
  import start_move_response_pkg::*;
  import move_queue_add_response_pkg::*;
  import move_end_response_pkg::*;

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

  // Controle de homing detalhado
  logic [2:0]  home_start_pending;   // pulsos de start para FSMs
  logic [2:0]  home_axis_mask;       // eixos solicitados
  logic [2:0]  home_done_mask;       // eixos concluídos
  logic        home_active;          // existe homing em progresso
  logic [7:0]  home_frame_id;        // frameId do request MOVE_HOME
  logic        home_status_sched;    // agendar envio de HOME_STATUS
  logic [7:0]  home_status_frame_id; // frameId do HOME_STATUS
  logic        move_end_sched;       // agendar envio de MOVE_END
  logic [7:0]  move_end_frame_id;    // frameId do MOVE_END

  // Sinais por eixo da FSM de homing
  logic home_start_x, home_start_y, home_start_z;
  logic home_done_x,  home_done_y,  home_done_z;
  logic home_done_x_q, home_done_y_q, home_done_z_q;
  wire  home_done_pulse_x = home_done_x & ~home_done_x_q;
  wire  home_done_pulse_y = home_done_y & ~home_done_y_q;
  wire  home_done_pulse_z = home_done_z & ~home_done_z_q;

  // Offsets e posições relativas
  logic [31:0]        home_offset_x, home_offset_y, home_offset_z;
  logic [2:0]         home_valid;
  logic signed [31:0] pos_rel_x, pos_rel_y, pos_rel_z;

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
    end else if (pid_tick) begin
      enc_vel_x   <= $signed(enc_pos_x) - $signed(enc_pos_x_q);
      enc_vel_y   <= $signed(enc_pos_y) - $signed(enc_pos_y_q);
      enc_vel_z   <= $signed(enc_pos_z) - $signed(enc_pos_z_q);
      enc_pos_x_q <= enc_pos_x;
      enc_pos_y_q <= enc_pos_y;
      enc_pos_z_q <= enc_pos_z;
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

  // FSM de homing por eixo -------------------------------------------------
  axis_home_service #(.USE_INDEX(HOMING_USE_INDEX)) u_home_x (
    .clk(clk), .rst_n(rst_n), .start_pulse(home_start_x),
    .prox_active(prox_active_x), .idx_pulse(i_idx_pulse_x),
    .running(), .coarse_done(), .done(home_done_x)
  );
  axis_home_service #(.USE_INDEX(HOMING_USE_INDEX)) u_home_y (
    .clk(clk), .rst_n(rst_n), .start_pulse(home_start_y),
    .prox_active(prox_active_y), .idx_pulse(i_idx_pulse_y),
    .running(), .coarse_done(), .done(home_done_y)
  );
  axis_home_service #(.USE_INDEX(HOMING_USE_INDEX)) u_home_z (
    .clk(clk), .rst_n(rst_n), .start_pulse(home_start_z),
    .prox_active(prox_active_z), .idx_pulse(i_idx_pulse_z),
    .running(), .coarse_done(), .done(home_done_z)
  );

  // Atualiza posição relativa em cada pid_tick
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pos_rel_x <= '0; pos_rel_y <= '0; pos_rel_z <= '0;
    end else if (pid_tick) begin
      pos_rel_x <= home_valid[0] ? $signed(enc_pos_x) - $signed(home_offset_x) : 32'sd0;
      pos_rel_y <= home_valid[1] ? $signed(enc_pos_y) - $signed(home_offset_y) : 32'sd0;
      pos_rel_z <= home_valid[2] ? $signed(enc_pos_z) - $signed(home_offset_z) : 32'sd0;
    end
  end

  // Registra conclusão de homing para geração de pulsos
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      home_done_x_q <= 1'b0; home_done_y_q <= 1'b0; home_done_z_q <= 1'b0;
    end else begin
      home_done_x_q <= home_done_x;
      home_done_y_q <= home_done_y;
      home_done_z_q <= home_done_z;
    end
  end

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
      home_start_x   <= 1'b0;
      home_start_y   <= 1'b0;
      home_start_z   <= 1'b0;
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
      home_start_pending <= 3'b000;
      home_axis_mask <= 3'd0;
      home_done_mask <= 3'd0;
      home_active    <= 1'b0;
      home_frame_id  <= 8'd0;
      home_status_sched <= 1'b0;
      home_status_frame_id <= 8'd0;
      move_end_sched <= 1'b0;
      move_end_frame_id <= 8'd0;
      home_valid     <= 3'b000;
      home_offset_x  <= 32'd0;
      home_offset_y  <= 32'd0;
      home_offset_z  <= 32'd0;
    end else begin
      start_x        <= 1'b0;
      start_y        <= 1'b0;
      start_z        <= 1'b0;
      home_start_x   <= 1'b0;
      home_start_y   <= 1'b0;
      home_start_z   <= 1'b0;
      sync_req       <= 1'b0;
      move_end_pulse <= 1'b0;

      // Em simulação, não derruba por E-STOP (SAFETY_ENABLE=0)
      if (SAFETY_ENABLE && estop_inhibit)
        move_enabled <= 1'b0;

      // Emite starts alinhados ao próximo tick
      if (sync_start && ((start_pending != 3'b000) || (home_start_pending != 3'b000))) begin
        start_x       <= start_pending[0];
        start_y       <= start_pending[1];
        start_z       <= start_pending[2];
        start_pending <= 3'b000;
        home_start_x  <= home_start_pending[0];
        home_start_y  <= home_start_pending[1];
        home_start_z  <= home_start_pending[2];
        home_start_pending <= 3'b000;
      end

      // Captura conclusão de homing
      if (home_done_pulse_x) begin
        home_done_mask[0] <= 1'b1;
        cont_x            <= 1'b0;
        home_offset_x     <= enc_pos_x;
        home_valid[0]     <= 1'b1;
      end
      if (home_done_pulse_y) begin
        home_done_mask[1] <= 1'b1;
        cont_y            <= 1'b0;
        home_offset_y     <= enc_pos_y;
        home_valid[1]     <= 1'b1;
      end
      if (home_done_pulse_z) begin
        home_done_mask[2] <= 1'b1;
        cont_z            <= 1'b0;
        home_offset_z     <= enc_pos_z;
        home_valid[2]     <= 1'b1;
      end

      // Finalização agregada do MOVE_HOME
      if (home_active && ((home_done_mask & home_axis_mask) == home_axis_mask) && !pending) begin
        move_home_resp_bytes_t r;
        r = move_home_response_pkg::make_default();
        r.frameIdEcho  = home_frame_id;
        r.status       = 8'd0;
        r.axisHomeMask = {5'b0, home_axis_mask};
        r.errorFlags   = 8'd0;
        r = move_home_response_pkg::set_parity(r);
        pend_bits <= '0;
        pend_bits[SHIFT_BITS-1 -: move_home_response_pkg::FRAME_BITS]
                  <= move_home_response_pkg::encoder(r);
        pend_len  <= move_home_response_pkg::FRAME_BITS/8;
        pending   <= 1'b1;
        home_active <= 1'b0;
        home_status_sched <= 1'b1;
        home_status_frame_id <= home_frame_id;
      end

      // Envio de HOME_STATUS quando agendado e canal livre
      if (!pending && home_status_sched) begin
        home_status_resp_bytes_t r;
        r = home_status_response_pkg::make_default();
        r.frameIdEcho = home_status_frame_id;
        r.axisMask    = {5'b0, home_valid};
        r.posRelX_hi  = pos_rel_x[15:8];  r.posRelX_lo  = pos_rel_x[7:0];
        r.posRelY_hi  = pos_rel_y[15:8];  r.posRelY_lo  = pos_rel_y[7:0];
        r.posRelZ_hi  = pos_rel_z[15:8];  r.posRelZ_lo  = pos_rel_z[7:0];
        r.homeOffX_hi = home_offset_x[15:8]; r.homeOffX_lo = home_offset_x[7:0];
        r.homeOffY_hi = home_offset_y[15:8]; r.homeOffY_lo = home_offset_y[7:0];
        r.homeOffZ_hi = home_offset_z[15:8]; r.homeOffZ_lo = home_offset_z[7:0];
        r = home_status_response_pkg::set_parity(r);
        pend_bits <= '0;
        pend_bits[SHIFT_BITS-1 -: home_status_response_pkg::FRAME_BITS]
                  <= home_status_response_pkg::encoder(r);
        pend_len  <= home_status_response_pkg::FRAME_BITS/8;
        pending   <= 1'b1;
        home_status_sched <= 1'b0;
      end

      // Envio de MOVE_END quando agendado e canal livre (após HOME_STATUS)
      if (!pending && !home_status_sched && move_end_sched) begin
        move_end_resp_bytes_t r;
        r = move_end_response_pkg::make_default();
        r.frameIdEcho = move_end_frame_id;
        pend_bits <= '0;
        pend_bits[SHIFT_BITS-1 -: 32] <= move_end_response_pkg::encoder(r);
        pend_len  <= 4;
        pending   <= 1'b1;
        move_end_sched <= 1'b0;
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
              step_x    <= 32'd0;
              step_y    <= 32'd0;
              step_z    <= 32'd0;
              ff_rate_x <= {move_home_frame.vhome,16'd0};
              ff_rate_y <= {move_home_frame.vhome,16'd0};
              ff_rate_z <= {move_home_frame.vhome,16'd0};
              kp_x      <= 16'd0; ki_x <= 16'd0; kd_x <= 16'd0;
              kp_y      <= 16'd0; ki_y <= 16'd0; kd_y <= 16'd0;
              kp_z      <= 16'd0; ki_z <= 16'd0; kd_z <= 16'd0;
              cont_x    <= move_home_frame.axisMask[0];
              cont_y    <= move_home_frame.axisMask[1];
              cont_z    <= move_home_frame.axisMask[2];
              start_pending    <= move_home_frame.axisMask[2:0];
              home_start_pending<= move_home_frame.axisMask[2:0];
              if (|move_home_frame.axisMask[2:0]) sync_req <= 1'b1;
              current_move_id  <= move_home_frame.frameId;
              home_axis_mask   <= move_home_frame.axisMask[2:0];
              home_done_mask   <= 3'b000;
              home_frame_id    <= move_home_frame.frameId;
              home_active      <= |move_home_frame.axisMask[2:0];
              if (move_home_frame.axisMask[0]) home_valid[0] <= 1'b0;
              if (move_home_frame.axisMask[1]) home_valid[1] <= 1'b0;
              if (move_home_frame.axisMask[2]) home_valid[2] <= 1'b0;
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
            r.status      = (busy_x | busy_y | busy_z) ? 8'd0 : 8'd1;
            r.pidErrX     = 8'd0;
            r.pidErrY     = 8'd0;
            r.pidErrZ     = 8'd0;
            r = move_queue_status_response_pkg::set_parity(r);
            pend_bits <= '0;
            pend_bits[SHIFT_BITS-1 -: 96]
                      <= move_queue_status_response_pkg::encoder(r);
            pend_len  <= 12;
            pending   <= 1'b1;
            if (home_valid != 3'b111) begin
              home_status_sched <= 1'b1;
              home_status_frame_id <= queue_status_frame.frameId;
            end
          end
          MOVE_END_TYPE: begin
            move_enabled  <= 1'b0;
            move_end_pulse <= 1'b1;
            ff_rate_x    <= 32'd0;
            ff_rate_y    <= 32'd0;
            ff_rate_z    <= 32'd0;
            kp_x <= 16'd0; ki_x <= 16'd0; kd_x <= 16'd0;
            kp_y <= 16'd0; ki_y <= 16'd0; kd_y <= 16'd0;
            kp_z <= 16'd0; ki_z <= 16'd0; kd_z <= 16'd0;
            move_end_sched    <= 1'b1;
            move_end_frame_id <= move_end_frame.frameId;
          end
          default: begin end
        endcase
      end

      if (pending && tx_stream.ready)
        pending <= 1'b0;
    end
  end

  assign tick_enable = move_enabled;
  assign o_moving    = (busy_x | busy_y | busy_z);
  assign tx_stream.valid = pending;
  assign tx_stream.bits  = pend_bits;
  assign tx_stream.len   = pend_len;

endmodule
`endif
