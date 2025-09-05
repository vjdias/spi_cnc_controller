# Run SPI clock sweep at sys_clk=27 MHz; vary pi_sclk = 50/100 MHz

proc ensure_added {file type} {
    if {![file exists $file]} {
        puts "ERROR: Missing file: $file"; exit 1
    }
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

# Add SDCs
ensure_added constraints/timing_27_spi50.sdc sdc
ensure_added constraints/timing_27_spi100.sdc sdc

# Disable base timing.sdc and all other timing variants
set_file_enable constraints/timing.sdc           false
set_file_enable constraints/timing_27.sdc        false
set_file_enable constraints/timing_135.sdc       false
set_file_enable constraints/timing_27_spi50.sdc  false
set_file_enable constraints/timing_27_spi100.sdc false

# 27 MHz sys, 50 MHz SPI
set_file_enable constraints/timing_27_spi50.sdc true
run all
copy_reports spi50

# 27 MHz sys, 100 MHz SPI
set_file_enable constraints/timing_27_spi50.sdc  false
set_file_enable constraints/timing_27_spi100.sdc true
run all
copy_reports spi100

# Restore base timing.sdc
set_file_enable constraints/timing_27_spi100.sdc false
set_file_enable constraints/timing.sdc           true

puts "SPI sweep complete. See impl/pnr/reports"
exit

