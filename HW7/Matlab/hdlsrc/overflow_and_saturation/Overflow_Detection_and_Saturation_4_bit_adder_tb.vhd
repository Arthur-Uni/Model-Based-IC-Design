-- -------------------------------------------------------------
-- 
-- File Name: hdlsrc\overflow_and_saturation\Overflow_Detection_and_Saturation_4_bit_adder_tb.vhd
-- Created: 2018-11-05 12:32:59
-- 
-- Generated by MATLAB 9.1 and HDL Coder 3.9
-- 
-- 
-- -------------------------------------------------------------
-- Rate and Clocking Details
-- -------------------------------------------------------------
-- Model base rate: 1
-- Target subsystem base rate: 1
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Overflow_Detection_and_Saturation_4_bit_adder_tb
-- Source Path: 
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.Overflow_Detection_and_Saturation_4_bit_adder_tb_pkg.ALL;

ENTITY Overflow_Detection_and_Saturation_4_bit_adder_tb IS
END Overflow_Detection_and_Saturation_4_bit_adder_tb;


ARCHITECTURE rtl OF Overflow_Detection_and_Saturation_4_bit_adder_tb IS

  -- Component Declarations
  COMPONENT Overflow_Detection_and_Saturation_4_bit_adder
    PORT( In1                             :   IN    std_logic_vector(3 DOWNTO 0);  -- sfix4
          In2                             :   IN    std_logic_vector(3 DOWNTO 0);  -- sfix4
          Out1                            :   OUT   std_logic_vector(3 DOWNTO 0)  -- sfix4
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Overflow_Detection_and_Saturation_4_bit_adder
    USE ENTITY work.Overflow_Detection_and_Saturation_4_bit_adder(rtl);

  -- Constants
  CONSTANT In1_table_data                 : vector_of_std_logic_vector4(0 TO 10) := 
    ("0011",
     "0001",
     "0000",
     "0001",
     "1101",
     "0101",
     "0000",
     "0101",
     "0000",
     "0010",
     "1011");  -- ufix4 [11]
  CONSTANT In2_table_data                 : vector_of_std_logic_vector4(0 TO 10) := 
    ("0100",
     "1110",
     "1101",
     "1111",
     "1001",
     "1100",
     "1000",
     "0010",
     "0100",
     "1010",
     "1110");  -- ufix4 [11]
  CONSTANT Out1_expected_table_data       : vector_of_std_logic_vector4(0 TO 10) := 
    ("0111",
     "1111",
     "1101",
     "0000",
     "1000",
     "0001",
     "1000",
     "0111",
     "0100",
     "1100",
     "1001");  -- ufix4 [11]

  -- Signals
  SIGNAL clk                              : std_logic;
  SIGNAL reset                            : std_logic;
  SIGNAL enb                              : std_logic;
  SIGNAL Out1_done                        : std_logic;  -- ufix1
  SIGNAL rdEnb                            : std_logic;
  SIGNAL Out1_done_enb                    : std_logic;  -- ufix1
  SIGNAL Out1_addr                        : unsigned(3 DOWNTO 0);  -- ufix4
  SIGNAL Out1_active                      : std_logic;  -- ufix1
  SIGNAL check1_done                      : std_logic;  -- ufix1
  SIGNAL snkDonen                         : std_logic;
  SIGNAL resetn                           : std_logic;
  SIGNAL tb_enb                           : std_logic;
  SIGNAL tb_enb_delay                     : std_logic;
  SIGNAL ce_out                           : std_logic;
  SIGNAL Out1_enb                         : std_logic;  -- ufix1
  SIGNAL Out1_lastAddr                    : std_logic;  -- ufix1
  SIGNAL Data_Type_Conversion_out1_addr   : unsigned(3 DOWNTO 0);  -- ufix4
  SIGNAL Data_Type_Conversion_out1_active : std_logic;  -- ufix1
  SIGNAL Data_Type_Conversion_out1_enb    : std_logic;  -- ufix1
  SIGNAL In1_1                            : std_logic_vector(3 DOWNTO 0);  -- ufix4
  SIGNAL rawData_In1                      : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL holdData_In1                     : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL In2_1                            : std_logic_vector(3 DOWNTO 0);  -- ufix4
  SIGNAL rawData_In2                      : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL holdData_In2                     : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL In1_offset                       : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL In1_2                            : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL In1_3                            : std_logic_vector(3 DOWNTO 0);  -- ufix4
  SIGNAL In2_offset                       : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL In2_2                            : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL In2_3                            : std_logic_vector(3 DOWNTO 0);  -- ufix4
  SIGNAL Out1                             : std_logic_vector(3 DOWNTO 0);  -- ufix4
  SIGNAL Out1_signed                      : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL Out1_expected_1                  : std_logic_vector(3 DOWNTO 0);  -- ufix4
  SIGNAL Out1_expected_2                  : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL Out1_ref                         : signed(3 DOWNTO 0);  -- sfix4
  SIGNAL Out1_testFailure                 : std_logic;  -- ufix1

BEGIN
  u_Overflow_Detection_and_Saturation_4_bit_adder : Overflow_Detection_and_Saturation_4_bit_adder
    PORT MAP( In1 => In1_3,  -- sfix4
              In2 => In2_3,  -- sfix4
              Out1 => Out1  -- sfix4
              );

  Out1_done_enb <= Out1_done AND rdEnb;

  
  Out1_active <= '1' WHEN Out1_addr /= to_unsigned(16#A#, 4) ELSE
      '0';

  enb <= rdEnb AFTER 2 ns;

  snkDonen <=  NOT check1_done;

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

  reset_gen: PROCESS 
  BEGIN
    reset <= '1';
    WAIT FOR 20 ns;
    WAIT UNTIL clk'event AND clk = '1';
    WAIT FOR 2 ns;
    reset <= '0';
    WAIT;
  END PROCESS reset_gen;

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

  ce_out <= enb AND (rdEnb AND tb_enb_delay);

  Out1_enb <= ce_out AND Out1_active;

  -- Count limited, Unsigned Counter
  --  initial value   = 0
  --  step value      = 1
  --  count to value  = 10
  c_3_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Out1_addr <= to_unsigned(16#0#, 4);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF Out1_enb = '1' THEN
        IF Out1_addr = to_unsigned(16#A#, 4) THEN 
          Out1_addr <= to_unsigned(16#0#, 4);
        ELSE 
          Out1_addr <= Out1_addr + to_unsigned(16#1#, 4);
        END IF;
      END IF;
    END IF;
  END PROCESS c_3_process;


  
  Out1_lastAddr <= '1' WHEN Out1_addr >= to_unsigned(16#A#, 4) ELSE
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

  
  Data_Type_Conversion_out1_active <= '1' WHEN Data_Type_Conversion_out1_addr /= to_unsigned(16#A#, 4) ELSE
      '0';

  Data_Type_Conversion_out1_enb <= Data_Type_Conversion_out1_active AND (rdEnb AND tb_enb_delay);

  -- Count limited, Unsigned Counter
  --  initial value   = 0
  --  step value      = 1
  --  count to value  = 10
  DataTypeConversion_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Data_Type_Conversion_out1_addr <= to_unsigned(16#0#, 4);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF Data_Type_Conversion_out1_enb = '1' THEN
        IF Data_Type_Conversion_out1_addr = to_unsigned(16#A#, 4) THEN 
          Data_Type_Conversion_out1_addr <= to_unsigned(16#0#, 4);
        ELSE 
          Data_Type_Conversion_out1_addr <= Data_Type_Conversion_out1_addr + to_unsigned(16#1#, 4);
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

  -- Data source for In2
  In2_1 <= In2_table_data(to_integer(Data_Type_Conversion_out1_addr));

  rawData_In2 <= signed(In2_1);

  -- holdData reg for Data_Type_Conversion1_out1
  stimuli_Data_Type_Conversion1_out1_process: PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      holdData_In2 <= (OTHERS => 'X');
    ELSIF clk'event AND clk = '1' THEN
      holdData_In2 <= rawData_In2;
    END IF;
  END PROCESS stimuli_Data_Type_Conversion1_out1_process;

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

  stimuli_Data_Type_Conversion1_out1_1: PROCESS (rawData_In2, rdEnb)
  BEGIN
    IF rdEnb = '0' THEN
      In2_offset <= holdData_In2;
    ELSE
      In2_offset <= rawData_In2;
    END IF;
  END PROCESS stimuli_Data_Type_Conversion1_out1_1;

  In2_2 <= In2_offset AFTER 2 ns;

  In2_3 <= std_logic_vector(In2_2);

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

