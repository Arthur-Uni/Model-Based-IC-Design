@echo off
set xv_path=C:\\Xilinx\\Vivado\\2015.4\\bin
call %xv_path%/xelab  -wto be4c890f10c94c52a295c3dbe403a04a -m64 --debug typical --relax --mt 2 -L xil_defaultlib -L secureip --snapshot Overflow_Detection_and_Saturation_4_bit_adder_tb_behav xil_defaultlib.Overflow_Detection_and_Saturation_4_bit_adder_tb -log elaborate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
