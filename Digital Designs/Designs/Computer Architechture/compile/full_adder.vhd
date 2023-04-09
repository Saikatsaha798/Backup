-------------------------------------------------------------------------------
--
-- Title       : No Title
-- Design      : Computer Architechture
-- Author      : saikatsaha798
-- Company     : BCREC
--
-------------------------------------------------------------------------------
--
-- File        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\compile\full_adder.vhd
-- Generated   : Sun Feb 26 22:53:00 2023
-- From        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\src\full_adder.bde
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

entity full_adder is
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Cin : in STD_LOGIC;
       Sum : out STD_LOGIC;
       Cout : out STD_LOGIC
  );
end full_adder;

architecture full_adder of full_adder is

---- Signal declarations used on the diagram ----

signal NET100 : STD_LOGIC;
signal NET79 : STD_LOGIC;
signal NET86 : STD_LOGIC;

begin

----  Component instantiations  ----

NET79 <= B xor A;

Sum <= Cin xor NET79;

NET100 <= B and A;

NET86 <= Cin and NET79;

Cout <= NET100 or NET86;


end full_adder;
