onbreak resume
onerror resume
vsim -novopt work.Filter_tb

add wave sim:/Filter_tb/u_Filter/clk
add wave sim:/Filter_tb/u_Filter/reset
add wave sim:/Filter_tb/u_Filter/clk_enable
add wave sim:/Filter_tb/u_Filter/In1
add wave sim:/Filter_tb/u_Filter/ce_out
add wave sim:/Filter_tb/u_Filter/Out1
add wave sim:/Filter_tb/Out1_ref
run -all
