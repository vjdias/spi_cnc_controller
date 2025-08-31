;# Configura a library 'work' em tb/tests/temp/work (executando a partir da raiz do projeto)
quietly set root [pwd]
quietly set temp_dir "$root/tb/tests/temp"
quietly file mkdir $temp_dir
quietly set work_dir "$temp_dir/work"
vlib $work_dir
vmap work $work_dir
vlog ../../src/protocol/framings/constants/protocol_constants_pkg.sv \
     ../../src/protocol/framings/utils/bytes_util_pkg.sv \
     ../../src/protocol/framings/requests/*.sv \
     ../../src/protocol/framings/responses/*.sv \
     ../../tests/framings_tb.sv
vsim -c framings_tb -do waves.do
