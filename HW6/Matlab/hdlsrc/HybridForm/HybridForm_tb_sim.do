onbreak resume
onerror resume
vsim -novopt work.HybridForm_tb
add wave sim:/HybridForm_tb/u_HybridForm/clk
add wave sim:/HybridForm_tb/u_HybridForm/reset
add wave sim:/HybridForm_tb/u_HybridForm/clk_enable
add wave sim:/HybridForm_tb/u_HybridForm/In1
add wave sim:/HybridForm_tb/u_HybridForm/ce_out
add wave sim:/HybridForm_tb/u_HybridForm/Out1
add wave sim:/HybridForm_tb/Out1_ref
run -all
