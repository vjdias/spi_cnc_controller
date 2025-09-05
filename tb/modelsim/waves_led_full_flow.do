onerror {resume}
quietly WaveActivateNextPane {} 0

# Top-level clock/reset
add wave -noupdate /spi_full_flow_led_20_tb/clk
add wave -noupdate /spi_full_flow_led_20_tb/rst_n

# SPI RX bridge and capture
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/irq
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/rd_en
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/raddr
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/rdata
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/spi_byte_valid
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/spi_byte
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/slave_busy
add wave -noupdate -group SPI_RX /spi_full_flow_led_20_tb/rx_fifo/count

# Router outputs (LED only)
add wave -noupdate -group ROUTER /spi_full_flow_led_20_tb/u_cons/frame_valid
add wave -noupdate -group ROUTER /spi_full_flow_led_20_tb/u_cons/frame_error
add wave -noupdate -group ROUTER /spi_full_flow_led_20_tb/u_cons/out_msgType

# LED service I/O
add wave -noupdate -group LED /spi_full_flow_led_20_tb/leds
add wave -noupdate -group RESP /spi_full_flow_led_20_tb/resp_valid
add wave -noupdate -group RESP /spi_full_flow_led_20_tb/resp_frame
add wave -noupdate -group RESP /spi_full_flow_led_20_tb/resp_frame.frameIdEcho
add wave -noupdate -group RESP /spi_full_flow_led_20_tb/resp_frame.ledMask
add wave -noupdate -group RESP /spi_full_flow_led_20_tb/resp_frame.status

# TX path (stream -> fifo -> miso)
add wave -noupdate -group TX /spi_full_flow_led_20_tb/tx_fifo/count
add wave -noupdate -group TX /spi_full_flow_led_20_tb/wr_en
add wave -noupdate -group TX /spi_full_flow_led_20_tb/waddr
add wave -noupdate -group TX /spi_full_flow_led_20_tb/wdata

# TB metrics and counters
add wave -noupdate -group TB /spi_full_flow_led_20_tb/cycle_ctr
add wave -noupdate -group TB /spi_full_flow_led_20_tb/busy_rise_count
add wave -noupdate -group TB /spi_full_flow_led_20_tb/busy_cycle_count
add wave -noupdate -group TB /spi_full_flow_led_20_tb/max_rx_occupancy
add wave -noupdate -group TB /spi_full_flow_led_20_tb/max_tx_occupancy
add wave -noupdate -group TB /spi_full_flow_led_20_tb/tx_pause_cycles
add wave -noupdate -group TB /spi_full_flow_led_20_tb/messages_sent
add wave -noupdate -group TB /spi_full_flow_led_20_tb/messages_received

TreeUpdate [SetDefaultTree]
run -all
