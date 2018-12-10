library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity D_FF is
    port (
            clock, reset : in std_logic;
            D : in std_logic_vector (3 downto 0);
            Q : out std_logic_vector (3 downto 0)
         );
end D_FF;

architecture Behavioral of D_FF is

begin

    process(clock)
		begin
			if (reset = '1') then
				Q <= "0000";
			elsif (clock = '1' and CLOCK'EVENT) then
				Q <= D;
			end if;
		end process;

end Behavioral;