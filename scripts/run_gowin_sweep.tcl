# Run a timing sweep via Gowin gw_sh: toggle SDCs and run the full flow

proc ensure_added {file type} {
    if {![file exists $file]} {
        puts "ERROR: Missing file: $file"; exit 1
    }
    # add_file may error if already present; ignore that
    if {[catch {add_file -type $type $file} err]} {
        puts "Note: $file already in project (ignored)"
    }
}

proc copy_reports {suffix} {
    set pnrdir "impl/pnr"
    set outdir [file join $pnrdir reports]
    file mkdir $outdir
    set copies {
        {spi_cnc_controller.rpt.txt   timing_%s.rpt.txt}
        {spi_cnc_controller.rpt.html  timing_%s.rpt.html}
        {spi_cnc_controller.tr.html   tr_%s.html}
        {spi_cnc_controller_tr_cata.html tr_%s_cata.html}
        {spi_cnc_controller_tr_content.html tr_%s_content.html}
        {spi_cnc_controller.power.html power_%s.html}
        {spi_cnc_controller.pin.html  pin_%s.html}
        {spi_cnc_controller.timing_paths timing_%s.timing_paths}
    }
    foreach pair $copies {
        lassign $pair src fmt
        set srcpath [file join $pnrdir $src]
        if {[file exists $srcpath]} {
            set dst [file join $outdir [format $fmt $suffix]]
            file copy -force $srcpath $dst
        }
    }
}

open_project spi_cnc_controller.gprj

# Ensure SDC variants are part of the project
ensure_added constraints/timing_27.sdc sdc
ensure_added constraints/timing_135.sdc sdc

# Make sure base timing.sdc is disabled to avoid double constraints
set_file_enable constraints/timing.sdc false

# 27 MHz run
set_file_enable constraints/timing_135.sdc false
set_file_enable constraints/timing_27.sdc  true
run all
copy_reports 27

# 135 MHz run
set_file_enable constraints/timing_27.sdc  false
set_file_enable constraints/timing_135.sdc true
run all
copy_reports 135

# Restore original state (re-enable base SDC, disable variants)
set_file_enable constraints/timing_135.sdc false
set_file_enable constraints/timing_27.sdc  false
set_file_enable constraints/timing.sdc     true
puts "Sweep complete. See impl/pnr/reports"
exit
