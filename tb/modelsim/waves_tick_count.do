onerror {resume}
quietly WaveActivateNextPane {} 0

# Top-level clocks and resets
add wave -noupdate /spi_full_flow_tick_count_tb/clk
add wave -noupdate /spi_full_flow_tick_count_tb/rst_n

# SPI RX bridge and capture
add wave -noupdate -group SPI_RX /spi_full_flow_tick_count_tb/irq
add wave -noupdate -group SPI_RX /spi_full_flow_tick_count_tb/rd_en
add wave -noupdate -group SPI_RX /spi_full_flow_tick_count_tb/raddr
add wave -noupdate -group SPI_RX /spi_full_flow_tick_count_tb/rdata
add wave -noupdate -group SPI_RX /spi_full_flow_tick_count_tb/spi_byte_valid
add wave -noupdate -group SPI_RX /spi_full_flow_tick_count_tb/spi_byte
add wave -noupdate -group SPI_RX /spi_full_flow_tick_count_tb/slave_busy

# Router outputs
add wave -noupdate -group ROUTER /spi_full_flow_tick_count_tb/u_cons/frame_valid
add wave -noupdate -group ROUTER /spi_full_flow_tick_count_tb/u_cons/frame_error
add wave -noupdate -group ROUTER /spi_full_flow_tick_count_tb/u_cons/out_msgType

# Motion service core timing
add wave -noupdate -group MOTION /spi_full_flow_tick_count_tb/u_motion/move_enabled
add wave -noupdate -group MOTION /spi_full_flow_tick_count_tb/u_motion/tick
add wave -noupdate -group MOTION /spi_full_flow_tick_count_tb/u_motion/pid_tick
add wave -noupdate -group MOTION /spi_full_flow_tick_count_tb/u_motion/sync_start
add wave -noupdate -group MOTION /spi_full_flow_tick_count_tb/u_motion/start_x
add wave -noupdate -group MOTION /spi_full_flow_tick_count_tb/u_motion/cont_x
add wave -noupdate -group MOTION /spi_full_flow_tick_count_tb/u_motion/busy_x

# Driver STEP/DIR/ENN
add wave -noupdate -group DRIVER_X /spi_full_flow_tick_count_tb/tmc_step_x
add wave -noupdate -group DRIVER_X /spi_full_flow_tick_count_tb/tmc_dir_x
add wave -noupdate -group DRIVER_X /spi_full_flow_tick_count_tb/tmc_enn_x

# Testbench counters
add wave -noupdate -group TB_COUNTERS /spi_full_flow_tick_count_tb/step_count_x
add wave -noupdate -group TB_COUNTERS /spi_full_flow_tick_count_tb/tick_count_while_busy

TreeUpdate [SetDefaultTree]
run -all
