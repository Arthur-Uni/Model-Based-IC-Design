library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity time_check_tb is
end time_check_tb;

architecture Behavioral of time_check_tb is
	component dff
		generic(setup_time, hold_time : time);
		port(
				d, clk : in std_logic;
				q : out std_logic
			);
	end component;
	
	--inputs
	signal clk : std_logic := '1';
	signal d : std_logic := '0';
	
	--outputs
	signal q : std_logic;
	
begin
	time_check_inst : dff
		generic map (12 ns, 16 ns)
		port map(clk => clk, d => d, q => q);
				
	clk <= not clk after 5 ns;
	
	process is
		begin
			wait for 10 ns;
			d <= '1';
			wait for 20 ns;
			d <= '0';
			wait for 1000 ns;
	end process;
end Behavioral;