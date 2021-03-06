-- -------------------------------------------------------------
-- 
-- File Name: hdlsrc\HybridForm\HybridForm_tb.vhd
-- Created: 2018-10-26 21:01:56
-- 
-- Generated by MATLAB 9.0 and HDL Coder 3.8
-- 
-- 
-- -------------------------------------------------------------
-- Rate and Clocking Details
-- -------------------------------------------------------------
-- Model base rate: 0.1
-- Target subsystem base rate: 0.1
-- 
-- 
-- Clock Enable  Sample Time
-- -------------------------------------------------------------
-- ce_out        0.1
-- -------------------------------------------------------------
-- 
-- 
-- Output Signal                 Clock Enable  Sample Time
-- -------------------------------------------------------------
-- Out1                          ce_out        0.1
-- -------------------------------------------------------------
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: HybridForm_tb
-- Source Path: 
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.HybridForm_tb_pkg.ALL;

ENTITY HybridForm_tb IS
END HybridForm_tb;


ARCHITECTURE rtl OF HybridForm_tb IS

  -- Component Declarations
  COMPONENT HybridForm
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          clk_enable                      :   IN    std_logic;
          In1                             :   IN    std_logic_vector(7 DOWNTO 0);  -- sfix8_En5
          ce_out                          :   OUT   std_logic;
          Out1                            :   OUT   std_logic_vector(7 DOWNTO 0)  -- sfix8_En5
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : HybridForm
    USE ENTITY work.HybridForm(rtl);

  -- Constants
  CONSTANT In1_table_data                 : vector_of_std_logic_vector8(0 TO 100) := 
    ("00100101",
     "00010100",
     "00000010",
     "00001011",
     "11101001",
     "00110110",
     "00000001",
     "00111001",
     "00001000",
     "00011011",
     "11010001",
     "11101001",
     "00100111",
     "11101011",
     "00010010",
     "11110100",
     "11111011",
     "11010100",
     "11010111",
     "00011111",
     "11111110",
     "11100110",
     "11100111",
     "00011011",
     "11111110",
     "00010000",
     "00001100",
     "00011000",
     "00001100",
     "11010101",
     "00001100",
     "00100100",
     "00010111",
     "10110011",
     "11110111",
     "11110101",
     "00001010",
     "11101111",
     "11111111",
     "00110011",
     "00011011",
     "00001000",
     "11100010",
     "11111101",
     "00000100",
     "11101110",
     "11110101",
     "00001101",
     "00110001",
     "10110001",
     "11011100",
     "00100011",
     "00010010",
     "11110111",
     "00001101",
     "11100000",
     "11011111",
     "00001010",
     "00110000",
     "00010111",
     "11101111",
     "00011100",
     "11111000",
     "11101000",
     "11110001",
     "11101100",
     "11111001",
     "00010001",
     "11011101",
     "00001011",
     "00100100",
     "00000100",
     "00010110",
     "11111110",
     "01000000",
     "00011101",
     "11000101",
     "00000001",
     "11000110",
     "00100000",
     "00001100",
     "00010100",
     "00011011",
     "00111000",
     "11110101",
     "11111011",
     "00010011",
     "00011111",
     "11011100",
     "11101110",
     "00000001",
     "10110000",
     "00100101",
     "11011111",
     "00100100",
     "11100110",
     "00010100",
     "00011010",
     "11111010",
     "00010001",
     "11111011");  -- ufix8 [101]
  CONSTANT Out1_expected_table_data       : vector_of_std_logic_vector8(0 TO 100) := 
    ("00000000",
     "00001001",
     "00100101",
     "00010010",
     "00000100",
     "00000011",
     "11111001",
     "00101111",
     "00001110",
     "00110011",
     "00001101",
     "00001011",
     "11010000",
     "11110101",
     "00011100",
     "11110001",
     "00001100",
     "11110100",
     "11110000",
     "11001111",
     "11100011",
     "00011010",
     "11110111",
     "11100010",
     "11110000",
     "00010110",
     "00000010",
     "00010001",
     "00010000",
     "00011000",
     "11111111",
     "11011101",
     "00010011",
     "00100101",
     "00000000",
     "10111001",
     "11110100",
     "11111000",
     "00000100",
     "11110000",
     "00001011",
     "00110010",
     "00011001",
     "11111111",
     "11100100",
     "11111110",
     "11111111",
     "11101101",
     "11111001",
     "00010111",
     "00010110",
     "10110001",
     "11101001",
     "00100010",
     "00001101",
     "11111010",
     "00000011",
     "11011011",
     "11100101",
     "00010100",
     "00101111",
     "00001111",
     "11110111",
     "00010110",
     "11110011",
     "11100111",
     "11101101",
     "11101100",
     "11111101",
     "00000101",
     "11100011",
     "00010010",
     "00100000",
     "00001001",
     "00010010",
     "00001110",
     "00111111",
     "00001010",
     "11001100",
     "11110010",
     "11010101",
     "00011111",
     "00001111",
     "00011000",
     "00100101",
     "00101110",
     "11110100",
     "11111111",
     "00010111",
     "00010001",
     "11011100",
     "11110000",
     "11101100",
     "11000011",
     "00010111",
     "11101011",
     "00011001",
     "11101110",
     "00011000",
     "00010101",
     "11111110");  -- ufix8 [101]

  -- Signals
  SIGNAL clk                              : std_logic;
  SIGNAL reset                            : std_logic;
  SIGNAL clk_enable                       : std_logic;
  SIGNAL Out1_done                        : std_logic;  -- ufix1
  SIGNAL rdEnb                            : std_logic;
  SIGNAL Out1_done_enb                    : std_logic;  -- ufix1
  SIGNAL Out1_addr                        : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL Out1_active                      : std_logic;  -- ufix1
  SIGNAL Data_Type_Conversion_out1_addr   : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL Data_Type_Conversion_out1_active : std_logic;  -- ufix1
  SIGNAL tb_enb_delay                     : std_logic;
  SIGNAL Data_Type_Conversion_out1_enb    : std_logic;  -- ufix1
  SIGNAL In1_1                            : std_logic_vector(7 DOWNTO 0);  -- ufix8
  SIGNAL rawData_In1                      : signed(7 DOWNTO 0);  -- sfix8_En5
  SIGNAL holdData_In1                     : signed(7 DOWNTO 0);  -- sfix8_En5
  SIGNAL In1_offset                       : signed(7 DOWNTO 0);  -- sfix8_En5
  SIGNAL In1_2                            : signed(7 DOWNTO 0);  -- sfix8_En5
  SIGNAL In1_3                            : std_logic_vector(7 DOWNTO 0);  -- ufix8
  SIGNAL check1_done                      : std_logic;  -- ufix1
  SIGNAL snkDonen                         : std_logic;
  SIGNAL resetn                           : std_logic;
  SIGNAL tb_enb                           : std_logic;
  SIGNAL ce_out                           : std_logic;
  SIGNAL Out1                             : std_logic_vector(7 DOWNTO 0);  -- ufix8
  SIGNAL Out1_enb                         : std_logic;  -- ufix1
  SIGNAL Out1_lastAddr                    : std_logic;  -- ufix1
  SIGNAL Out1_signed                      : signed(7 DOWNTO 0);  -- sfix8_En5
  SIGNAL Out1_expected_1                  : std_logic_vector(7 DOWNTO 0);  -- ufix8
  SIGNAL Out1_expected_2                  : signed(7 DOWNTO 0);  -- sfix8_En5
  SIGNAL Out1_ref                         : signed(7 DOWNTO 0);  -- sfix8_En5
  SIGNAL Out1_testFailure                 : std_logic;  -- ufix1

BEGIN
  u_HybridForm : HybridForm
    PORT MAP( clk => clk,
              reset => reset,
              clk_enable => clk_enable,
              In1 => In1_3,  -- sfix8_En5
              ce_out => ce_out,
              Out1 => Out1  -- sfix8_En5
              );

  Out1_done_enb <= Out1_done AND rdEnb;

  
  Out1_active <= '1' WHEN Out1_addr /= to_unsigned(16#64#, 7) ELSE
      '0';

  
  Data_Type_Conversion_out1_active <= '1' WHEN Data_Type_Conversion_out1_addr /= to_unsigned(16#64#, 7) ELSE
      '0';

  Data_Type_Conversion_out1_enb <= Data_Type_Conversion_out1_active AND (rdEnb AND tb_enb_delay);

  -- Count limited, Unsigned Counter
  --  initial value   = 0
  --  step value      = 1
  --  count to value  = 100
  DataTypeConversion_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Data_Type_Conversion_out1_addr <= to_unsigned(16#00#, 7);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF Data_Type_Conversion_out1_enb = '1' THEN
        IF Data_Type_Conversion_out1_addr = to_unsigned(16#64#, 7) THEN 
          Data_Type_Conversion_out1_addr <= to_unsigned(16#00#, 7);
        ELSE 
          Data_Type_Conversion_out1_addr <= Data_Type_Conversion_out1_addr + to_unsigned(16#01#, 7);
        END IF;
      END IF;
    END IF;
  END PROCESS DataTypeConversion_process;


  -- Data source for In1
  In1_1 <= In1_table_data(to_integer(Data_Type_Conversion_out1_addr));

  rawData_In1 <= signed(In1_1);

  -- holdData reg for Data_Type_Conversion_out1
  stimuli_Data_Type_Conversion_out1_process: PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      holdData_In1 <= (OTHERS => 'X');
    ELSIF clk'event AND clk = '1' THEN
      holdData_In1 <= rawData_In1;
    END IF;
  END PROCESS stimuli_Data_Type_Conversion_out1_process;

  stimuli_Data_Type_Conversion_out1_1: PROCESS (rawData_In1, rdEnb)
  BEGIN
    IF rdEnb = '0' THEN
      In1_offset <= holdData_In1;
    ELSE
      In1_offset <= rawData_In1;
    END IF;
  END PROCESS stimuli_Data_Type_Conversion_out1_1;

  In1_2 <= In1_offset AFTER 2 ns;

  In1_3 <= std_logic_vector(In1_2);

  snkDonen <=  NOT check1_done;

  resetn <=  NOT reset;

  tb_enb <= resetn AND snkDonen;

  -- Delay inside enable generation: register depth 1
  u_enable_delay_process: PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      tb_enb_delay <= '0';
    ELSIF clk'event AND clk = '1' THEN
      tb_enb_delay <= tb_enb;
    END IF;
  END PROCESS u_enable_delay_process;

  
  rdEnb <= tb_enb_delay WHEN check1_done = '0' ELSE
      '0';

  clk_enable <= rdEnb AFTER 2 ns;

  reset_gen: PROCESS 
  BEGIN
    reset <= '1';
    WAIT FOR 20 ns;
    WAIT UNTIL clk'event AND clk = '1';
    WAIT FOR 2 ns;
    reset <= '0';
    WAIT;
  END PROCESS reset_gen;

  clk_gen: PROCESS 
  BEGIN
    clk <= '1';
    WAIT FOR 5 ns;
    clk <= '0';
    WAIT FOR 5 ns;
    IF check1_done = '1' THEN
      clk <= '1';
      WAIT FOR 5 ns;
      clk <= '0';
      WAIT FOR 5 ns;
      WAIT;
    END IF;
  END PROCESS clk_gen;

  Out1_enb <= ce_out AND Out1_active;

  -- Count limited, Unsigned Counter
  --  initial value   = 0
  --  step value      = 1
  --  count to value  = 100
  c_3_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Out1_addr <= to_unsigned(16#00#, 7);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF Out1_enb = '1' THEN
        IF Out1_addr = to_unsigned(16#64#, 7) THEN 
          Out1_addr <= to_unsigned(16#00#, 7);
        ELSE 
          Out1_addr <= Out1_addr + to_unsigned(16#01#, 7);
        END IF;
      END IF;
    END IF;
  END PROCESS c_3_process;


  
  Out1_lastAddr <= '1' WHEN Out1_addr >= to_unsigned(16#64#, 7) ELSE
      '0';

  Out1_done <= Out1_lastAddr AND resetn;

  -- Delay to allow last sim cycle to complete
  checkDone_1_process: PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      check1_done <= '0';
    ELSIF clk'event AND clk = '1' THEN
      IF Out1_done_enb = '1' THEN
        check1_done <= Out1_done;
      END IF;
    END IF;
  END PROCESS checkDone_1_process;

  Out1_signed <= signed(Out1);

  -- Data source for Out1_expected
  Out1_expected_1 <= Out1_expected_table_data(to_integer(Out1_addr));

  Out1_expected_2 <= signed(Out1_expected_1);

  Out1_ref <= Out1_expected_2;

  Out1_signed_checker: PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Out1_testFailure <= '0';
    ELSIF clk'event AND clk = '1' THEN
      IF ce_out = '1' AND Out1_signed /= Out1_ref THEN
        Out1_testFailure <= '1';
        ASSERT FALSE
          REPORT "Error in Out1_signed: Expected " & to_hex(Out1_ref) & (" Actual " & to_hex(Out1_signed))
          SEVERITY ERROR;
      END IF;
    END IF;
  END PROCESS Out1_signed_checker;

  completed_msg: PROCESS (clk)
  BEGIN
    IF clk'event AND clk = '1' THEN
      IF check1_done = '1' THEN
        IF Out1_testFailure = '0' THEN
          ASSERT FALSE
            REPORT "**************TEST COMPLETED (PASSED)**************"
            SEVERITY NOTE;
        ELSE
          ASSERT FALSE
            REPORT "**************TEST COMPLETED (FAILED)**************"
            SEVERITY NOTE;
        END IF;
      END IF;
    END IF;
  END PROCESS completed_msg;

END rtl;

