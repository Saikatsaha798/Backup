-------------------------------------------------------------------------------
--
-- Title       : No Title
-- Design      : Computer Architechture
-- Author      : saikatsaha798
-- Company     : BCREC
--
-------------------------------------------------------------------------------
--
-- File        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\compile\half_adder.vhd
-- Generated   : Sun Feb 26 22:53:00 2023
-- From        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\src\half_adder.bde
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

entity half_adder is
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Sum : out STD_LOGIC;
       Cout : out STD_LOGIC
  );
end half_adder;

architecture half_adder of half_adder is

begin

----  Component instantiations  ----

Cout <= A and B;

Sum <= B xor A;


end half_adder;
