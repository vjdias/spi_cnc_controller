# timing_27.sdc — Timing constraints for 27 MHz sys clock
# Base on constraints/timing.sdc with sys_clk at 27 MHz (37.037 ns)

create_clock -name sys_clk -period 37.037 [get_ports {i_clk}]

# Asynchronous reset is not timed
set_false_path -from [get_ports {i_resetn}]

# SPI SCLK (Pi): declare port clock and mark domains asynchronous
# Adjust to your actual SPI rate if different
create_clock -name pi_sclk -period 100.000 [get_ports {pi_sclk}]
set_clock_groups -asynchronous -group {sys_clk} -group {pi_sclk}

