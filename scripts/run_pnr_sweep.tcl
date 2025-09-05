# Gowin gw_sh Tcl: run PNR for two SDC variants and collect timing reports

proc run_one {name dofile outdir} {
    puts "[clock format [clock seconds] -gmt 1 -format {%Y-%m-%d %H:%M:%S}] :: Running PNR for $name"
    file mkdir $outdir
    pnr -f $dofile
    # Copy primary reports to named variants
    set pnrdir "impl/pnr"
    set rpt_txt        [file join $pnrdir "spi_cnc_controller.rpt.txt"]
    set rpt_html       [file join $pnrdir "spi_cnc_controller.rpt.html"]
    set tr_html        [file join $pnrdir "spi_cnc_controller.tr.html"]
    set tr_cata_html   [file join $pnrdir "spi_cnc_controller_tr_cata.html"]
    set tr_content_html[file join $pnrdir "spi_cnc_controller_tr_content.html"]
    set power_html     [file join $pnrdir "spi_cnc_controller.power.html"]
    set pin_html       [file join $pnrdir "spi_cnc_controller.pin.html"]
    if {[file exists $rpt_txt]}        { file copy -force $rpt_txt         [file join $outdir "timing_${name}.rpt.txt"] }
    if {[file exists $rpt_html]}       { file copy -force $rpt_html        [file join $outdir "timing_${name}.rpt.html"] }
    if {[file exists $tr_html]}        { file copy -force $tr_html         [file join $outdir "tr_${name}.html"] }
    if {[file exists $tr_cata_html]}   { file copy -force $tr_cata_html    [file join $outdir "tr_${name}_cata.html"] }
    if {[file exists $tr_content_html]}{ file copy -force $tr_content_html [file join $outdir "tr_${name}_content.html"] }
    if {[file exists $power_html]}     { file copy -force $power_html      [file join $outdir "power_${name}.html"] }
    if {[file exists $pin_html]}       { file copy -force $pin_html        [file join $outdir "pin_${name}.html"] }
}

set outdir "impl/pnr/reports"
file mkdir $outdir

run_one 27   "impl/pnr/cmd_27.do"   $outdir
run_one 135  "impl/pnr/cmd_135.do"  $outdir

puts "Sweep finished. Reports in $outdir"
exit

