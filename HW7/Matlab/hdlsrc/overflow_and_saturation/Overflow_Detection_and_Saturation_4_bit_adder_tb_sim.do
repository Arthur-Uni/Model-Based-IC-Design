onbreak resume
onerror resume
vsim -novopt work.Overflow_Detection_and_Saturation_4_bit_adder_tb
add wave sim:/Overflow_Detection_and_Saturation_4_bit_adder_tb/u_Overflow_Detection_and_Saturation_4_bit_adder/In1
add wave sim:/Overflow_Detection_and_Saturation_4_bit_adder_tb/u_Overflow_Detection_and_Saturation_4_bit_adder/In2
add wave sim:/Overflow_Detection_and_Saturation_4_bit_adder_tb/u_Overflow_Detection_and_Saturation_4_bit_adder/Out1
add wave sim:/Overflow_Detection_and_Saturation_4_bit_adder_tb/Out1_ref
run -all