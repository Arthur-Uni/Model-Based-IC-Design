library IEEE;
library work;
use IEEE.STD_LOGIC_1164.ALL;
use work.my_package.ALL;

entity fa is
	port( 	a, b : in std_logic;
			cin : in std_logic;
			sum : out std_logic;
			cout : out std_logic
		);
end fa;

architecture Behavioral of fa is

	signal tmp0, tmp1, tmp2, tmp3, tmp4 : std_logic;
	
begin
	tmp0 <= func_XOR(a,b);
	sum <= func_XOR(tmp0, cin);
	tmp1 <= func_AND(a,b);
	tmp2 <= func_AND(a,cin);
	tmp3 <= func_AND(b,cin);
	tmp4 <= func_OR(tmp1, tmp2);
	cout <= func_OR(tmp4, tmp3);
	
end Behavioral;
