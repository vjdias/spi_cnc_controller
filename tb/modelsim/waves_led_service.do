onerror {resume}
quietly WaveActivateNextPane {} 0

# Top-level clock/reset
add wave -noupdate /led_service_tb/clk
add wave -noupdate /led_service_tb/rst_n

# Control inputs to service
add wave -noupdate -group CTRL /led_service_tb/frame_valid
add wave -noupdate -group CTRL /led_service_tb/msgType

# Request fields
add wave -noupdate -group REQ /led_service_tb/led_req
add wave -noupdate -group REQ /led_service_tb/led_req.frameId
add wave -noupdate -group REQ /led_service_tb/led_req.ledMask
add wave -noupdate -group REQ /led_service_tb/led_req.ledValue

# Service outputs
add wave -noupdate -group LED /led_service_tb/leds
add wave -noupdate -group RESP /led_service_tb/resp_valid
add wave -noupdate -group RESP /led_service_tb/resp_frame
add wave -noupdate -group RESP /led_service_tb/resp_frame.frameIdEcho
add wave -noupdate -group RESP /led_service_tb/resp_frame.ledMask
add wave -noupdate -group RESP /led_service_tb/resp_frame.status

# Stream interface (not consumed in TB; ready=0)
add wave -noupdate -group STREAM /led_service_tb/led_stream/valid
add wave -noupdate -group STREAM /led_service_tb/led_stream/bits
add wave -noupdate -group STREAM /led_service_tb/led_stream/len
add wave -noupdate -group STREAM /led_service_tb/led_stream/ready

TreeUpdate [SetDefaultTree]
run -all
