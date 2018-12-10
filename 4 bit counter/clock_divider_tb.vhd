library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity clock_divider_tb is
end clock_divider_tb;

architecture Behavioral of clock_divider_tb is
	component clock_divider
		port(
            clock, reset: in std_logic;
            clock_out : out std_logic		
			);
		end component;
	
	-- inputs
	signal clock : std_logic := '1';
	signal reset : std_logic := '1';
	-- outputs
	signal clock_out : std_logic;
	
begin
	clock_divider_inst : clock_divider
		port map(
			clock => clock,
			reset => reset,
			clock_out => clock_out
		);
		
	clock <= not clock after 5 ns;
	
	process is
		begin
			wait for 10 ns;
			reset <= '0';
	end process;
end Behavioral;
