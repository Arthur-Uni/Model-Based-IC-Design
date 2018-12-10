library IEEE;
use IEEE.STD_LOGIC_1164.all;

package my_package is

	function func_AND (
		a,b : in std_logic)
		return std_logic;
		
	function func_OR (
		a,b : in std_logic)
		return std_logic;
			
	function func_XOR (
		a,b : in std_logic)
		return std_logic;

end my_package;

package body my_package is
	
	function func_AND (
		a,b : in std_logic)
		return std_logic is
	begin
		if (a = '1' and b = '1') then
			return '1';
		else
			return '0';
		end if;
	end;

	function func_OR (
		a,b : in std_logic)
		return std_logic is
	begin
		if (a = '1' or b = '1') then
			return '1';
		else
			return '0';
		end if;
	end;
	
	function func_XOR (
		a,b : in std_logic)
		return std_logic is
	begin
		if(a = b) then
			return '0';
		else
			return '1';
		end if;
	end;
	
end my_package;