-------------------------------------------------------------------------------
--
-- Title       : No Title
-- Design      : Computer Architechture
-- Author      : saikatsaha798
-- Company     : BCREC
--
-------------------------------------------------------------------------------
--
-- File        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\compile\xor.vhd
-- Generated   : Mon Mar 13 19:06:11 2023
-- From        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\src\xor.bde
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

entity \xor\ is
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Y : out STD_LOGIC
  );
end \xor\;

architecture \xor\ of \xor\ is

begin

----  Component instantiations  ----

Y <= B xor A;


end \xor\;
