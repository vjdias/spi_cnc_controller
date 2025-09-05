onerror {resume}
quietly WaveActivateNextPane {} 0

# Top-level clock/reset
add wave -noupdate /spi_full_flow_motion_10_moves_tb/clk
add wave -noupdate /spi_full_flow_motion_10_moves_tb/rst_n

# SPI RX bridge and capture
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/irq
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/rd_en
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/raddr
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/rdata
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/spi_byte_valid
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/spi_byte
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/slave_busy
add wave -noupdate -group SPI_RX /spi_full_flow_motion_10_moves_tb/rx_fifo/count

# Router outputs
add wave -noupdate -group ROUTER /spi_full_flow_motion_10_moves_tb/u_cons/frame_valid
add wave -noupdate -group ROUTER /spi_full_flow_motion_10_moves_tb/u_cons/frame_error
add wave -noupdate -group ROUTER /spi_full_flow_motion_10_moves_tb/u_cons/out_msgType

# Motion service core timing
add wave -noupdate -group MOTION /spi_full_flow_motion_10_moves_tb/u_motion/move_enabled
add wave -noupdate -group MOTION /spi_full_flow_motion_10_moves_tb/u_motion/tick
add wave -noupdate -group MOTION /spi_full_flow_motion_10_moves_tb/u_motion/pid_tick
add wave -noupdate -group MOTION /spi_full_flow_motion_10_moves_tb/u_motion/sync_start
add wave -noupdate -group MOTION /spi_full_flow_motion_10_moves_tb/u_motion/start_x
add wave -noupdate -group MOTION /spi_full_flow_motion_10_moves_tb/u_motion/busy_x

# Driver STEP/DIR/ENN
add wave -noupdate -group DRIVER_X /spi_full_flow_motion_10_moves_tb/tmc_step_x
add wave -noupdate -group DRIVER_X /spi_full_flow_motion_10_moves_tb/tmc_dir_x
add wave -noupdate -group DRIVER_X /spi_full_flow_motion_10_moves_tb/tmc_enn_x

# TX path (stream -> fifo -> miso)
add wave -noupdate -group TX /spi_full_flow_motion_10_moves_tb/tx_fifo/count
add wave -noupdate -group TX /spi_full_flow_motion_10_moves_tb/wr_en
add wave -noupdate -group TX /spi_full_flow_motion_10_moves_tb/waddr
add wave -noupdate -group TX /spi_full_flow_motion_10_moves_tb/wdata

# TB metrics and counters
add wave -noupdate -group TB /spi_full_flow_motion_10_moves_tb/step_count_x
add wave -noupdate -group TB /spi_full_flow_motion_10_moves_tb/busy_rise_count
add wave -noupdate -group TB /spi_full_flow_motion_10_moves_tb/busy_cycle_count
add wave -noupdate -group TB /spi_full_flow_motion_10_moves_tb/max_rx_occupancy
add wave -noupdate -group TB /spi_full_flow_motion_10_moves_tb/max_tx_occupancy
add wave -noupdate -group TB /spi_full_flow_motion_10_moves_tb/tx_pause_cycles
add wave -noupdate -group TB /spi_full_flow_motion_10_moves_tb/messages_sent

TreeUpdate [SetDefaultTree]
run -all
