# timing_135.sdc — Timing constraints for 135 MHz sys clock
# Set sys_clk to 135 MHz (7.407 ns) for feasibility/timing margin evaluation

create_clock -name sys_clk -period 7.407 [get_ports {i_clk}]

# Asynchronous reset is not timed
set_false_path -from [get_ports {i_resetn}]

# SPI SCLK (Pi): declare port clock and mark domains asynchronous
# Keep placeholder 10 MHz (100 ns) unless you intend to sweep SPI too
create_clock -name pi_sclk -period 100.000 [get_ports {pi_sclk}]
set_clock_groups -asynchronous -group {sys_clk} -group {pi_sclk}

