library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity counter is
	port(
			clock, reset : in std_logic;
			counter_out : out std_logic_vector(3 downto 0)
		);
end counter;

architecture Behavioral of counter is
	component clock_divider
		port(
            clock, reset: in std_logic;
            clock_out : out std_logic		
			);
		end component;
	
	--signal count : std_logic_vector(3 downto 0) := "0000";
	signal cnt0 : std_logic;
	signal cnt1 : std_logic;
	signal cnt2 : std_logic;
	signal cnt3 : std_logic;
begin
	c0 : clock_divider port map (clock, reset, cnt0);
	c1 : clock_divider port map (cnt0, reset, cnt1);
	c2 : clock_divider port map (cnt1, reset, cnt2);
	c3 : clock_divider port map (cnt2, reset, cnt3);
	
	counter_out(0) <= cnt0;
	counter_out(1) <= cnt1;
	counter_out(2) <= cnt2;
	counter_out(3) <= cnt3;
	
end Behavioral;