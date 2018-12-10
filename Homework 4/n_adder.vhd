library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity n_adder is
	generic(n: integer);
	port( 	a, b : in std_logic_vector(n-1 downto 0);
			cin : in std_logic;
			sum : out std_logic_vector(n-1 downto 0);
			cout : out std_logic
		);
end n_adder;

architecture Behavioral of n_adder is

	component fa
		port(
			a, b : in std_logic;
			cin : in std_logic;
			sum : out std_logic;
			cout : out std_logic
		);
	end component;
			
	signal c : std_logic_vector(n downto 0);
	
begin
	
	c(0) <= cin;
	cout <= c(n);
	
	full_adder: for i in 0 to n-1 generate
		fa_i: fa port map (a(i), b(i), c(i), sum(i), c(i+1));
	end generate;
	
end Behavioral;