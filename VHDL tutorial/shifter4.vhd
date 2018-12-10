library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity shifter4 is
  Port (
        clock, reset : in std_logic;
        D : in std_logic_vector (3 downto 0);
        shift : in std_logic;
        Q : out std_logic_vector (3 downto 0)
        );
end shifter4;

architecture Behavioral of shifter4 is

begin

    process(clock)
		begin
			if (reset = '1') then
				Q <= "0000";
			elsif (clock = '1' and CLOCK'EVENT) then
				Q(3 downto 1) <= D(2 downto 0);
				Q(0) <= shift;
			end if;
	end process;

end Behavioral;
