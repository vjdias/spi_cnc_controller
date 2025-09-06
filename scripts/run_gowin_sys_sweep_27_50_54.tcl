open_project spi_cnc_controller.gprj

proc ensure_added {file type} {
    if {[catch {add_file -type $type $file} err]} {
        puts "Note: $file already in project"
    } else {
        puts "Added: $file"
    }
}

proc copy_reports {suffix} {
    set pnrdir "impl/pnr"
    set outdir [file join $pnrdir reports]
    file mkdir $outdir
    foreach pair {
        {spi_cnc_controller.rpt.txt   timing_%s.rpt.txt}
        {spi_cnc_controller.rpt.html  timing_%s.rpt.html}
        {spi_cnc_controller.tr.html   tr_%s.html}
        {spi_cnc_controller_tr_cata.html tr_%s_cata.html}
        {spi_cnc_controller_tr_content.html tr_%s_content.html}
        {spi_cnc_controller.power.html power_%s.html}
        {spi_cnc_controller.pin.html  pin_%s.html}
        {spi_cnc_controller.timing_paths timing_%s.timing_paths}
    } {
        set src [file join $pnrdir [lindex $pair 0]]
        set dst [file join $outdir [format [lindex $pair 1] $suffix]]
        if {[file exists $src]} { file copy -force $src $dst }
    }
}

# Ensure SDCs exist in project
ensure_added constraints/timing_27.sdc sdc
ensure_added constraints/timing_50.sdc sdc
ensure_added constraints/timing_54.sdc sdc

# Disable all timing SDCs first
foreach f {constraints/timing.sdc constraints/timing_27.sdc constraints/timing_50.sdc constraints/timing_54.sdc constraints/timing_135.sdc constraints/timing_27_spi50.sdc constraints/timing_27_spi100.sdc} {
    catch { set_file_enable $f false }
}

# Runs
foreach run {27 50 54} {
    puts "Running sys_clk=${run} MHz"
    set_file_enable constraints/timing_${run}.sdc true
    run all
    copy_reports ${run}
    set_file_enable constraints/timing_${run}.sdc false
}

# Restore base timing.sdc
set_file_enable constraints/timing.sdc true
puts "System sweep (27/50/54 MHz) complete. Reports in impl/pnr/reports"
exit

