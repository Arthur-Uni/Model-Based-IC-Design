onbreak resume
onerror resume
vsim -novopt work.Fixed_tb

add wave sim:/Fixed_tb/u_Fixed/clk
add wave sim:/Fixed_tb/u_Fixed/reset
add wave sim:/Fixed_tb/u_Fixed/clk_enable
add wave sim:/Fixed_tb/u_Fixed/In1
add wave sim:/Fixed_tb/u_Fixed/ce_out
add wave sim:/Fixed_tb/u_Fixed/Out1
add wave sim:/Fixed_tb/Out1_ref
run -all
