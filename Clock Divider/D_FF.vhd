library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity D_FF is
    port (
            clock, reset : in std_logic;
            D : in std_logic;
            Q, Qb : out std_logic
         );
end D_FF;

architecture Behavioral of D_FF is

	signal q : std_logic;

begin
	
	Qb <= not q;
	Q <= q;
	
    process(clock)
		begin
			if (clock = '1' and CLOCK'EVENT) then
				if(reset = '1') then
					q <= '0';
				else
					q <= D;
				end if;
			end if;
		end process;

end Behavioral;