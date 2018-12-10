library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity dff is
	generic(setup_time, hold_time : time);
	port(d, clk : in std_logic; q : out std_logic);
	
	begin
		setup_check : process(clk)
		begin
			if(clk = '1') and (clk'event) then
				assert(d'last_event >= setup_time)
				report "setup violation"
				severity error;
			end if;
		end process setup_check;
end dff;

architecture dff_behave of dff is

begin
	dff_process : process(clk)
	begin
		if(clk = '1') and (clk'event) then
			q <= d;
		end if;
	end process dff_process;

end dff_behave;