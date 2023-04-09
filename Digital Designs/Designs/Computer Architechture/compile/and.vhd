-------------------------------------------------------------------------------
--
-- Title       : No Title
-- Design      : Computer Architechture
-- Author      : saikatsaha798
-- Company     : BCREC
--
-------------------------------------------------------------------------------
--
-- File        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\compile\and.vhd
-- Generated   : Sun Feb 26 21:54:00 2023
-- From        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\src\and.bde
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

entity \and\ is
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Y : out STD_LOGIC
  );
end \and\;

architecture \and\ of \and\ is

begin

----  Component instantiations  ----

Y <= B and A;


end \and\;
