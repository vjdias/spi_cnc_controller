onerror {resume}
quietly WaveActivateNextPane {} 0

# Top-level clock/reset
add wave -noupdate /spi_full_flow_led_basic_tb/clk
add wave -noupdate /spi_full_flow_led_basic_tb/rst_n

# SPI RX bridge and capture
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/irq
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/rd_en
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/raddr
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/rdata
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/spi_byte_valid
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/spi_byte
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/slave_busy
add wave -noupdate -group SPI_RX /spi_full_flow_led_basic_tb/rx_fifo/count

# Router outputs
add wave -noupdate -group ROUTER /spi_full_flow_led_basic_tb/u_cons/frame_valid
add wave -noupdate -group ROUTER /spi_full_flow_led_basic_tb/u_cons/frame_error
add wave -noupdate -group ROUTER /spi_full_flow_led_basic_tb/u_cons/out_msgType

# LED service I/O
add wave -noupdate -group LED /spi_full_flow_led_basic_tb/leds
add wave -noupdate -group RESP /spi_full_flow_led_basic_tb/resp_valid
add wave -noupdate -group RESP /spi_full_flow_led_basic_tb/resp_frame
add wave -noupdate -group RESP /spi_full_flow_led_basic_tb/resp_frame.frameIdEcho
add wave -noupdate -group RESP /spi_full_flow_led_basic_tb/resp_frame.ledMask
add wave -noupdate -group RESP /spi_full_flow_led_basic_tb/resp_frame.status

# TX path (stream -> fifo -> miso)
add wave -noupdate -group TX /spi_full_flow_led_basic_tb/tx_fifo/count
add wave -noupdate -group TX /spi_full_flow_led_basic_tb/wr_en
add wave -noupdate -group TX /spi_full_flow_led_basic_tb/waddr
add wave -noupdate -group TX /spi_full_flow_led_basic_tb/wdata

TreeUpdate [SetDefaultTree]
run -all
