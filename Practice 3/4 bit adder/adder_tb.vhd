library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.std_logic_arith.all;

entity adder_tb is
end adder_tb;

architecture arc of adder_tb is
	component adder
		port(
			a : in std_logic_vector (3 downto 0);
			b : in std_logic_vector (3 downto 0);
			cin : in std_logic;
			cout : out std_logic;
			sum : out std_logic_vector (3 downto 0)
		);
	end component;

	-- inputs
	signal a : std_logic_vector (3 downto 0);
	signal b : std_logic_vector (3 downto 0);
	signal cin : std_logic;
	--outputs
	signal cout : std_logic;
	signal sum : std_logic_vector (3 downto 0);
	
	begin
		adder_inst : adder
			port map(
				a => a,
				b => b,
				cin => cin,
				cout => cout,
				sum => sum
			);
		
		process is
			begin
				a <= "0000";
				b <= "0000";
				cin <= '0';
				wait for 20 ns;
				a <= "0001";
				b <= "0001";
				wait for 20 ns;
				a <= "0111";
				b <= "0001";
				wait for 20 ns;
				a <= "0111";
				b <= "0111";
				wait for 1000 ns;
		end process;
		
	end arc;