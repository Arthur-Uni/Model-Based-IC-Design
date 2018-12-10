library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder is
	port( 	a, b : in std_logic_vector(3 downto 0);
			cin : in std_logic;
			sum : out std_logic_vector(3 downto 0);
			cout : out std_logic
		);
end adder;

architecture Behavioral of adder is

	procedure fa(
					signal in_a, in_b, c_in : in std_logic;
					signal s, c_out : out std_logic
				) is
	begin
		s <= in_a XOR in_b XOR c_in;
		c_out <= (in_a AND in_b) OR (c_in AND in_a) OR (c_in AND in_b) ;
	end fa;

	signal c1, c2, c3 : std_logic;
	
begin
	
	fa(a(0), b(0), cin, sum(0), c1);
	fa(a(1), b(1), c1, sum(1), c2);
	fa(a(2), b(2), c2, sum(2), c3);
	fa(a(3), b(3), c3, sum(3), cout);
	
end Behavioral;
