# run_master_integration.tcl — compila e executa apenas o TB de integração
# spi_master_slave_integration_tb, garantindo a biblioteca especial ~spi_master
# para o IP SPI MASTER da Gowin.

# diretório raiz do projeto (usa diretório atual do vsim)
set root [file normalize [pwd]]

# utilitário: glob recursivo em Tcl (portável para Windows/Linux)
proc rglob {dir pattern} {
  set results {}
  if {![file exists $dir]} {return $results}
  foreach item [glob -nocomplain -directory $dir *] {
    if {[file isdirectory $item]} {
      set results [concat $results [rglob $item $pattern]]
    } else {
      if {[string match $pattern [file tail $item]]} {
        lappend results $item
      }
    }
  }
  return $results
}

# cria/usa bibliotecas no diretório temporário
set sim_temp_dir [file join $root tb tests temp]
file mkdir $sim_temp_dir

# WORK: mapeia a lib padrão 'work' para tb/tests/temp/work
set work_dir [file join $sim_temp_dir work]
catch { vdel -lib work -all }
file mkdir $work_dir
vlib $work_dir
vmap work $work_dir

set simlib_dir [file join $sim_temp_dir simlib]
catch { vdel -lib simlib -all }
vlib $simlib_dir
vmap simlib $simlib_dir

# compila a simlib da Gowin (primitivas)
set simlib_candidates [list \
  [file join $root tb tests lib simlib gw2a prim_sim.v] \
  [file join $root tb tests lib simlib gw1n prim_sim.v]
]
set simlib_file ""
foreach cand $simlib_candidates {
  if {[file exists $cand]} { set simlib_file $cand; break }
}
if {$simlib_file ne ""} {
  puts "Compilando simlib: $simlib_file"
  vlog -work simlib $simlib_file
} else {
  puts "Aviso: simlib não encontrada em tb/tests/lib/simlib/{gw2a,gw1n}/prim_sim.v"
}

# coleta fontes
set src_sv [rglob [file join $root src] "*.sv"]
set src_v  [rglob [file join $root src] "*.v"]

# filtra fora o IP spi_master da lista principal
set sv_v_filtered {}
foreach f [concat $src_sv $src_v] {
  if {[string match *spi_master.v $f]} { continue }
  if {[string match *spi_master_tmp.v $f]} { continue }
  if {[string match */temp/*/spi_master_tmp.v $f]} { continue }
  lappend sv_v_filtered $f
}

# ordena: pacotes primeiro, depois interfaces, depois o restante
set pkgs {}
set ifaces {}
set rest {}
foreach f $sv_v_filtered {
  if {[string match *.sv $f] && [regexp {_pkg\.sv$} $f]} {
    lappend pkgs $f
  } elseif {[regexp {\/(interfaces)\/} $f]} {
    lappend ifaces $f
  } else {
    lappend rest $f
  }
}

set ordered [concat $pkgs $ifaces $rest]
if {[llength $ordered] > 0} {
  puts "Compilando fontes em ordem: pkgs=[llength $pkgs], ifaces=[llength $ifaces], rest=[llength $rest] (ROUTER_IGNORE_NOISE)"
  eval vlog -sv -mfcu +define+ROUTER_IGNORE_NOISE +incdir+$root/tb/tests $ordered
} else {
  puts "Nenhum arquivo de origem encontrado em $root/src"
}

# compila o IP SPI MASTER da Gowin em biblioteca lógica especial "~spi_master"
# Observação: o nome lógico "~spi_master" precisa ser mapeado para um diretório físico
# (evita a expansão de til ~usuário do Tcl). Usamos tb/tests/temp/_spi_master_lib.
set spi_master_v [file join $root src drivers spi spi_master spi_master.v]
if {[file exists $spi_master_v]} {
  # Compila o IP no 'work' e mapeia um alias lógico "~spi_master" para o diretório do 'work'.
  # Isso evita problemas de expansão de til no -work do vlog.
  vmap {~spi_master} $work_dir
  puts "Compilando IP SPI MASTER (no work) e mapeando alias ~spi_master: $spi_master_v"
  vlog $spi_master_v
} else {
  puts "Erro: IP SPI MASTER não encontrado em $spi_master_v"
}

# compila apenas o TB de integração com master/slave
set tb_file [file join $root tb tests spi_master_slave_integration_tb.sv]
if {![file exists $tb_file]} {
  puts "Erro: testbench não encontrado em $tb_file"
  quit -f
}
vlog -sv -mfcu +incdir+$root/tb/tests $tb_file

puts "Executando spi_master_slave_integration_tb com libs simlib e ~spi_master"
vsim -quiet -L simlib -L {~spi_master} -onfinish stop spi_master_slave_integration_tb -do {run -all; quit -sim}

quit -f
