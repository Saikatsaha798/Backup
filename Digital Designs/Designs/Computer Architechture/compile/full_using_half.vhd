-------------------------------------------------------------------------------
--
-- Title       : No Title
-- Design      : Computer Architechture
-- Author      : saikatsaha798
-- Company     : BCREC
--
-------------------------------------------------------------------------------
--
-- File        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\compile\full_using_half.vhd
-- Generated   : Tue Mar 28 18:36:53 2023
-- From        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\src\full_using_half.bde
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

entity full_using_half is
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Cin : in STD_LOGIC;
       Sum : out STD_LOGIC;
       Cout : out STD_LOGIC
  );
end full_using_half;

architecture full_using_half of full_using_half is

---- Component declarations -----

component half_adder
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Sum : out STD_LOGIC;
       Cout : out STD_LOGIC
  );
end component;

---- Signal declarations used on the diagram ----

signal NET36 : STD_LOGIC;
signal NET61 : STD_LOGIC;
signal NET69 : STD_LOGIC;

begin

----  Component instantiations  ----

U1 : half_adder
  port map(
       A => A,
       B => B,
       Sum => NET36,
       Cout => NET61
  );

U2 : half_adder
  port map(
       A => NET36,
       B => Cin,
       Sum => Sum,
       Cout => NET69
  );

Cout <= NET61 or NET69;


end full_using_half;
