onbreak resume
onerror resume
vsim -novopt work.DirectForm_tb
add wave sim:/DirectForm_tb/u_DirectForm/clk
add wave sim:/DirectForm_tb/u_DirectForm/reset
add wave sim:/DirectForm_tb/u_DirectForm/clk_enable
add wave sim:/DirectForm_tb/u_DirectForm/In1
add wave sim:/DirectForm_tb/u_DirectForm/ce_out
add wave sim:/DirectForm_tb/u_DirectForm/Out1
add wave sim:/DirectForm_tb/Out1_ref
run -all
