# run_open_spi.tcl - Compila e executa o teste do core SPI aberto (Modo 3)

set root [file normalize [file join [pwd] .. ..]]
cd $root

puts "[clock format [clock seconds]]: Iniciando compilacao (compile_only.tcl)"
do tb/modelsim/compile_only.tcl

# Executa apenas o testbench do core aberto
vsim -L simlib work.spi_slave_open_mode3_tb -voptargs=+acc
run -all
