# timing_27_spi100.sdc — 27 MHz sys_clk, 100 MHz SPI SCLK

create_clock -name sys_clk -period 37.037 [get_ports {i_clk}]
set_false_path -from [get_ports {i_resetn}]

# SPI SCLK at 100 MHz (10 ns)
create_clock -name pi_sclk -period 10.000 [get_ports {pi_sclk}]
set_clock_groups -asynchronous -group {sys_clk} -group {pi_sclk}

