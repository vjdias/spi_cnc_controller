# timing_27_spi50.sdc — 27 MHz sys_clk, 50 MHz SPI SCLK

create_clock -name sys_clk -period 37.037 [get_ports {i_clk}]
set_false_path -from [get_ports {i_resetn}]

# SPI SCLK at 50 MHz (20 ns)
create_clock -name pi_sclk -period 20.000 [get_ports {pi_sclk}]
set_clock_groups -asynchronous -group {sys_clk} -group {pi_sclk}

# SPI IO timing (provisional)
# MOSI/CSN from master to FPGA
set_input_delay  -clock pi_sclk -max 3.000 [get_ports {pi_mosi pi_csn}]
set_input_delay  -clock pi_sclk -min 0.500 [get_ports {pi_mosi pi_csn}]
# MISO from FPGA to master (setup/hold @ master)
set_output_delay -clock pi_sclk -max 3.000 [get_ports {pi_miso}]
set_output_delay -clock pi_sclk -min -0.500 [get_ports {pi_miso}]

# CS# (pi_csn) is not a clock; ignore paths sourced from it to avoid TA1132
set_false_path -from [get_ports {pi_csn}]
