library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity clock_divider is
    port (
            clock, reset : in std_logic;
            clock_out : out std_logic
         );
end clock_divider;

architecture Behavioral of clock_divider is
	
	signal q_sig : std_logic;
	signal qb_sig : std_logic;
	
	component D_FF
		port(
            clock, reset : in std_logic;
            D : in std_logic;
            Q : out std_logic;		
            Qb : out std_logic		
			);
		end component;

begin

	D_FF_inst : D_FF
		port map(
			clock => clock,
			reset => reset,
			D => qb_sig,
			Q => q_sig,
			Qb => qb_sig
		);
		
	clock_out <= q_sig;
	
end Behavioral;