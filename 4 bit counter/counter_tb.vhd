library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity counter_tb is
end counter_tb;

architecture Behavioral of counter_tb is
	component counter
		port(
				clock, reset: in std_logic;
				counter_out : out std_logic_vector(3 downto 0)
			);
		end component;
	
	-- inputs
	signal clock : std_logic := '1';
	signal reset : std_logic := '1';
	
	-- outputs
	signal counter_out : std_logic_vector(3 downto 0);
	
begin
	counter_inst : counter
		port map(
			clock => clock,
			reset => reset,
			counter_out => counter_out
		);
		
	clock <= not clock after 5 ns;
	
	process is
		begin
			wait for 10 ns;
			reset <= '0';
	end process;
	
end Behavioral;
