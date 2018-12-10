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

	signal q_sig : std_logic;

begin
	
	Qb <= not q_sig;
	Q <= q_sig;
	
    process(clock, reset)
		begin
			if (reset = '1') then
				q_sig <= '0';
			elsif (clock = '1' and CLOCK'EVENT) then
				q_sig <= D;
			end if;
		end process;

end Behavioral;