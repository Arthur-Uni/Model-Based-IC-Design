@echo off
set xv_path=C:\\Xilinx\\Vivado\\2015.4\\bin
call %xv_path%/xsim Overflow_Detection_and_Saturation_4_bit_adder_tb_behav -key {Behavioral:sim_1:Functional:Overflow_Detection_and_Saturation_4_bit_adder_tb} -tclbatch Overflow_Detection_and_Saturation_4_bit_adder_tb.tcl -log simulate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
