-------------------------------------------------------------------------------
--
-- Title       : No Title
-- Design      : Computer Architechture
-- Author      : saikatsaha798
-- Company     : BCREC
--
-------------------------------------------------------------------------------
--
-- File        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\compile\4-bit_adder.vhd
-- Generated   : Mon Apr  3 17:06:33 2023
-- From        : C:\Users\saika\OneDrive\Documents\Source Code\Digital Designs\Designs\Computer Architechture\src\4-bit_adder.bde
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

entity \4-bit_adder\ is
  port(
       A3 : in STD_LOGIC;
       A2 : in STD_LOGIC;
       A1 : in STD_LOGIC;
       A0 : in STD_LOGIC;
       B3 : in STD_LOGIC;
       B2 : in STD_LOGIC;
       B1 : in STD_LOGIC;
       B0 : in STD_LOGIC;
       S3 : out STD_LOGIC;
       S2 : out STD_LOGIC;
       S1 : out STD_LOGIC;
       S0 : out STD_LOGIC;
       Cout : out STD_LOGIC
  );
end \4-bit_adder\;

architecture \4-bit_adder\ of \4-bit_adder\ is

---- Component declarations -----

component full_adder
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Cin : in STD_LOGIC;
       Sum : out STD_LOGIC;
       Cout : out STD_LOGIC
  );
end component;
component half_adder
  port(
       A : in STD_LOGIC;
       B : in STD_LOGIC;
       Sum : out STD_LOGIC;
       Cout : out STD_LOGIC
  );
end component;

---- Signal declarations used on the diagram ----

signal NET112 : STD_LOGIC;
signal NET140 : STD_LOGIC;
signal NET148 : STD_LOGIC;

begin

----  Component instantiations  ----

U1 : full_adder
  port map(
       A => A1,
       B => B1,
       Cin => NET112,
       Sum => S1,
       Cout => NET140
  );

U2 : full_adder
  port map(
       A => A2,
       B => B2,
       Cin => NET140,
       Sum => S2,
       Cout => NET148
  );

U3 : full_adder
  port map(
       A => A3,
       B => B3,
       Cin => NET148,
       Sum => S3,
       Cout => Cout
  );

U4 : half_adder
  port map(
       A => A0,
       B => B0,
       Sum => S0,
       Cout => NET112
  );


end \4-bit_adder\;
