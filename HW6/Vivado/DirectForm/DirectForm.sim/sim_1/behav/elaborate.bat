@echo off
set xv_path=C:\\Xilinx\\Vivado\\2015.4\\bin
call %xv_path%/xelab  -wto dc2dd8646706444dbfba9bc3e9f7fa73 -m64 --debug typical --relax --mt 2 -L xil_defaultlib -L secureip --snapshot DirectForm_tb_behav xil_defaultlib.DirectForm_tb -log elaborate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
