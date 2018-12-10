library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_textio.all;
use STD.textio.all;

entity shifter4_tb is
end shifter4_tb;

architecture Behavioral of shifter4_tb is

	file file_VECTORS : text;
	file file_RESULTS : text;

	component shifter4
		port(
            clock, reset : in std_logic;
			shift: in std_logic;
            D : in std_logic_vector (3 downto 0);
            Q : out std_logic_vector (3 downto 0)		
			);
		end component;
	
	-- inputs
	signal clock : std_logic := '0';
	signal reset : std_logic;
	signal shift : std_logic := '0';
	signal D : std_logic_vector (3 downto 0);
	
	-- outputs
	signal Q : std_logic_vector (3 downto 0);
	
begin
	shifter4_inst : shifter4
		port map(
			clock => clock,
			reset => reset,
			shift => shift,
			D => D,
			Q => Q
		);
		
	clock <= not clock after 5 ns;
	
	-- process is
		-- begin
			-- reset <= '1';
			-- shift <= '0';
			-- D <= "1111";
			-- wait for 5 ns;
			-- reset <= '0';	
			-- wait for 10 ns;
			-- D <= "1110";
			-- wait for 10 ns;
			-- D <= "1100";
			-- wait for 10 ns;
			-- D <= "1000";
			-- wait for 10 ns;
			-- D <= "1010";
			-- wait for 1000 ns;
	-- end process;
	
	process
    variable v_ILINE     : line;
    variable v_OLINE     : line;
    variable v_D : std_logic_vector(3 downto 0);
     
  begin
 
    file_open(file_VECTORS, "inputs.txt",  read_mode);
    file_open(file_RESULTS, "outputs.txt", write_mode);
 
    while not endfile(file_VECTORS) loop
      readline(file_VECTORS, v_ILINE);
      read(v_ILINE, v_D);
 
      -- Pass the variable to a signal to allow the ripple-carry to use it
      D <= v_D;
 
      wait for 60 ns;
 
      write(v_OLINE, Q, right, 4);
      writeline(file_RESULTS, v_OLINE);
    end loop;
 
    file_close(file_VECTORS);
    file_close(file_RESULTS);
     
    wait;
  end process;
	
end Behavioral;
