# run_all.tcl - executa todos os testbenches usando ModelSim em modo texto

# diretório raiz do projeto
set root [file normalize [file join [file dirname [info script]] .. ..]]

# compila todos os arquivos de origem
vlib work
set src_files [split [exec find $root/src -name "*.sv"] "\n"]
foreach f $src_files {
  if {$f ne ""} {vlog -sv $f}
}

# compila todos os testbenches
set tb_files [split [exec find $root/tb/tests -name "*.sv"] "\n"]
foreach tb $tb_files {
  if {$tb ne ""} {vlog -sv $tb}
}

# executa cada testbench
foreach tb $tb_files {
  if {$tb ne ""} {
    set top [file rootname [file tail $tb]]
    puts "Executando $top"
    vsim -c $top -do {run -all; quit -code $::errorCode}
  }
}
