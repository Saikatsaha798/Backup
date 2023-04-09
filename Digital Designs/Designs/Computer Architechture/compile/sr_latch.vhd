-------------------------------------------------------------------------------
--
-- Title       : No Title
-- Design      : Computer Architechture
-- Author      : saikatsaha798
-- Company     : BCREC
--
-------------------------------------------------------------------------------
--
-- File        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\compile\sr_latch.vhd
-- Generated   : Mon Feb 27 18:02:52 2023
-- From        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\src\sr_latch.bde
-- By          : Bde2Vhdl ver. 2.6
--
-------------------------------------------------------------------------------
--
-- Description : 
--
-------------------------------------------------------------------------------
-- Design unit header --
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use IEEE.std_logic_unsigned.all;

entity sr_latch is
  port(
       S : in STD_LOGIC;
       R : in STD_LOGIC;
       Q : out STD_LOGIC;
       Qc : out STD_LOGIC
  );
end sr_latch;

architecture sr_latch of sr_latch is

---- Signal declarations used on the diagram ----

signal NET142 : STD_LOGIC;
signal NET155 : STD_LOGIC;

begin

----  Component instantiations  ----

NET142 <= not(NET155 and S);

NET155 <= not(R and NET142);


---- Terminal assignment ----

    -- Output\buffer terminals
	Q <= NET142;
	Qc <= NET155;


end sr_latch;
