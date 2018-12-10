onbreak resume
onerror resume
vsim -novopt work.Subsystem_tb

add wave sim:/Subsystem_tb/u_Subsystem/In1
add wave sim:/Subsystem_tb/u_Subsystem/In2
add wave sim:/Subsystem_tb/u_Subsystem/In3
add wave sim:/Subsystem_tb/u_Subsystem/In4
add wave sim:/Subsystem_tb/u_Subsystem/In5
add wave sim:/Subsystem_tb/u_Subsystem/Out1
add wave sim:/Subsystem_tb/Out1_ref
run -all
