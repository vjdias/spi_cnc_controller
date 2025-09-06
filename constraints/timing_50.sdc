# timing_50.sdc — Timing constraints for 50 MHz sys clock
# sys_clk at 50 MHz (20.000 ns)

create_clock -name sys_clk -period 20.000 [get_ports {i_clk}]

# Asynchronous reset is not timed
set_false_path -from [get_ports {i_resetn}]

# SPI SCLK (Pi): declare port clock and mark domains asynchronous
create_clock -name pi_sclk -period 100.000 [get_ports {pi_sclk}]
set_clock_groups -asynchronous -group {sys_clk} -group {pi_sclk}

# SPI IO timing (provisional; adjust to your SPI master)
set_input_delay  -clock pi_sclk -max 3.000 [get_ports {pi_mosi pi_csn}]
set_input_delay  -clock pi_sclk -min 0.500 [get_ports {pi_mosi pi_csn}]
set_output_delay -clock pi_sclk -max 3.000 [get_ports {pi_miso}]
set_output_delay -clock pi_sclk -min -0.500 [get_ports {pi_miso}]

