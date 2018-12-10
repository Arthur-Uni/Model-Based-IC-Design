library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MUX4 is
    port (
        sel : in std_logic_vector (1 downto 0);
        i0, i1, i2, i3 : in std_logic;
        o : out std_logic
    );
end MUX4;

architecture Behavioral of MUX4 is

begin

    process(sel)
        begin
            case sel is
                when "00" =>
                    o <= i0;
                when "01" =>
                    o <= i1;
                when "10" =>
                    o <= i2;
                when "11" =>
                    o <= i3;
		when others =>
		    o <= i0;
            end case;
        end process;
        
end Behavioral;
