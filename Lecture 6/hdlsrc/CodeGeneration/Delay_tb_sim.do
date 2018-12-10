onbreak resume
onerror resume
vsim -novopt work.Delay_tb

add wave sim:/Delay_tb/u_Delay/clk
add wave sim:/Delay_tb/u_Delay/reset
add wave sim:/Delay_tb/u_Delay/clk_enable
add wave sim:/Delay_tb/u_Delay/In1
add wave sim:/Delay_tb/u_Delay/ce_out
add wave sim:/Delay_tb/u_Delay/Out1
add wave sim:/Delay_tb/Out1_ref
run -all
