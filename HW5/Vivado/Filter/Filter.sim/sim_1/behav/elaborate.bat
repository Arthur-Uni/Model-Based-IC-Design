@echo off
set xv_path=C:\\Xilinx\\Vivado\\2015.4\\bin
call %xv_path%/xelab  -wto 5e7b769046a546328d1d88de9bbfa98c -m64 --debug typical --relax --mt 2 -L xil_defaultlib -L secureip --snapshot Fixed_tb_behav xil_defaultlib.Fixed_tb -log elaborate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
