library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity D_FF_tb is
end D_FF_tb;

architecture Behavioral of D_FF_tb is
	component D_FF
		port(
            clock, reset : in std_logic;
            D : in std_logic;
            Q : out std_logic;		
            Qb : out std_logic		
			);
		end component;
	
	-- inputs
	signal clock : std_logic := '1';
	signal reset : std_logic := '1';
	signal D : std_logic := '1';
	
	-- outputs
	signal Q : std_logic;
	signal Qb : std_logic;
	
begin
	D_FF_inst : D_FF
		port map(
			clock => clock,
			reset => reset,
			D => D,
			Q => Q,
			Qb => Qb
		);
		
	clock <= not clock after 5 ns;
	
	process is
		begin
			wait for 10 ns;
			reset <= '0';
			wait for 10 ns;
			D <= '0';
			wait for 10 ns;
			D <= '1';
			wait for 10 ns;
			D <= '0';
			wait for 10 ns;
			D <= '1';
			wait for 10 ns;
			D <= '0';
			wait for 10 ns;
			D <= '1';
			wait for 10 ns;
			D <= '0';
			wait for 10 ns;
			D <= '1';
			wait for 10 ns;
	end process;
end Behavioral;
