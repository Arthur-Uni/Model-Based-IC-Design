library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity clock_divider is
    port (
            clock, reset : in std_logic;
            clock_out : out std_logic
         );
end clock_divider;

architecture Behavioral of clock_divider is
	
	signal D_n : std_logic;
	signal tmp : std_logic;
	
	component D_FF
		port(
            clock, reset : in std_logic;
            D : in std_logic;
            Q : out std_logic		
			);
		end component;

begin

	D_FF_inst : D_FF
		port map(
			clock => clock,
			reset => reset,
			D => D_n,
			Q => tmp
		);
	
	process (clock)
		begin
			if (clock = '1' and CLOCK'EVENT) then
				if(reset = '1') then
					D_n <= '0';
				else
					D_n <= not tmp;
					clock_out <= tmp;
				end if;
			end if;
		end process;
	
end Behavioral;