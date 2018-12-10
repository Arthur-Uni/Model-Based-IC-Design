library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.std_logic_arith.all;

entity n_adder_tb is
end n_adder_tb;

architecture arc of n_adder_tb is
	component n_adder
		generic(n : integer);
		port(
			a : in std_logic_vector (n-1 downto 0);
			b : in std_logic_vector (n-1 downto 0);
			cin : in std_logic;
			cout : out std_logic;
			sum : out std_logic_vector (n-1 downto 0)
		);
	end component;
	
	-- inputs
	signal a : std_logic_vector (7 downto 0);
	signal b : std_logic_vector (7 downto 0);
	signal cin : std_logic;
	--outputs
	signal cout : std_logic;
	signal sum : std_logic_vector (7 downto 0);
	
	begin
		adder_inst : n_adder
			generic map(8)
			port map(
				a => a,
				b => b,
				cin => cin,
				cout => cout,
				sum => sum
			);
		
		process is
			begin
				a <= "00000000";
				b <= "00000000";
				cin <= '0';
				wait for 20 ns;
				a <= "00000001";
				b <= "00000001";
				wait for 20 ns;
				a <= "01110000";
				b <= "00000001";
				wait for 20 ns;
				a <= "01110000";
				b <= "01110000";
				wait for 1000 ns;
		end process;
		
	end arc;