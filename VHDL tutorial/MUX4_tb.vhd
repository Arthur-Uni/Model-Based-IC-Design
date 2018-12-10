library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MUX4_tb is
end MUX4_tb;

architecture Behavioral of MUX4_tb is
    component MUX4
        port(
            sel : in std_logic_vector(1 downto 0);
            i0, i1, i2, i3 : in std_logic;
            o : out std_logic
        );
    end component;
    
    -- inputs
    signal sel : std_logic_vector(1 downto 0);
    signal i0 : std_logic;  
    signal i1 : std_logic;  
    signal i2 : std_logic;  
    signal i3 : std_logic;
    
    -- outputs
    signal o : std_logic;  
begin
    MUX4_inst : MUX4
        port map(
            sel => sel,
            i0 => i0,
            i1 => i1,
            i2 => i2,
            i3 => i3,
            o => o
        );
    
    process is
        begin
            sel <= "00";
            i0 <= '1';
            i1 <= '0';
            i2 <= '1';
            i3 <= '0';
            wait for 20 ns;
            sel <= "01";
            i0 <= '1';
            i1 <= '0';
            i2 <= '1';
            i3 <= '0';
            wait for 20 ns;
            sel <= "10";
            i0 <= '1';
            i1 <= '0';
            i2 <= '1';
            i3 <= '0';
            wait for 20 ns;
            sel <= "11";
            i0 <= '1';
            i1 <= '0';
            i2 <= '1';
            i3 <= '0';
            wait for 20 ns;
        end process;

end Behavioral;
