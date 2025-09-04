add wave /spi_full_flow_motion_home_tb/u_motion/stop_all
add wave /spi_full_flow_motion_home_tb/u_motion/start_pending
add wave /spi_full_flow_motion_home_tb/u_motion/tick_enable
add wave /spi_full_flow_motion_home_tb/u_motion/busy_x

add wave -noupdate /spi_full_flow_motion_home_tb/clk
add wave -noupdate /spi_full_flow_motion_home_tb/rst_n
add wave -noupdate /spi_full_flow_motion_home_tb/prox_in
add wave -noupdate /spi_full_flow_motion_home_tb/estop_in
add wave -noupdate /spi_full_flow_motion_home_tb/step_count_x
add wave -noupdate /spi_full_flow_motion_home_tb/wr_en
add wave -noupdate /spi_full_flow_motion_home_tb/wdata
add wave -noupdate /spi_full_flow_motion_home_tb/rdata
add wave -noupdate /spi_full_flow_motion_home_tb/resp_byte_count


add wave -noupdate /spi_full_flow_motion_home_tb/u_cons/frame_valid
add wave -noupdate /spi_full_flow_motion_home_tb/u_cons/frame_error
add wave -noupdate /spi_full_flow_motion_home_tb/u_cons/out_msgType


add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/move_enabled
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/tick
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/pid_tick
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/sync_start
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/start_x
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/cont_x
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/home_pending
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/prox_active
add wave -noupdate /spi_full_flow_motion_home_tb/u_motion/msgType


add wave -noupdate /spi_full_flow_motion_home_tb/tmc_step_x
add wave -noupdate /spi_full_flow_motion_home_tb/tmc_dir_x
add wave -noupdate /spi_full_flow_motion_home_tb/tmc_enn_x

TreeUpdate [SetDefaultTree]
run -all
