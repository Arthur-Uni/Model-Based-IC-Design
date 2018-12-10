onbreak resume
onerror resume
vsim -novopt work.CORDIC_cos_sin_tb
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/clk
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/reset
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/clk_enable
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/x_in
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/y_in
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/z_in
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/ce_out
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/x_out
add wave sim:/CORDIC_cos_sin_tb/x_out_ref
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/y_out
add wave sim:/CORDIC_cos_sin_tb/y_out_ref
add wave sim:/CORDIC_cos_sin_tb/u_CORDIC_cos_sin/z_out
add wave sim:/CORDIC_cos_sin_tb/z_out_ref
run -all
