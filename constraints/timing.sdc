# timing.sdc — Constraints de temporização
# Projeto: spi_cnc_controller
# Motivo: eliminar WARN TA1132 (clocks não criados) e permitir análise WNS/TNS

# Clock do sistema — 27 MHz (período ~37.037 ns)
create_clock -name sys_clk -period 37.037 [get_ports {i_clk}]

# Reset assíncrono não temporizado
set_false_path -from [get_ports {i_resetn}]

# SPI SCLK (Pi): declarar clock de porta e marcar domínios assíncronos
# Ajuste o período para a sua taxa real de SPI. Aqui adotamos 10 MHz (100.000 ns) como padrão seguro.
create_clock -name pi_sclk -period 100.000 [get_ports {pi_sclk}]
set_clock_groups -asynchronous -group {sys_clk} -group {pi_sclk}
