Library IEEE;
Use IEEE.STD_LOGIC_1164.all;

entity bcd_adder is
	port(
	A3, A2, A1, A0, B3, B2, B1, B0, Cin : in STD_LOGIC;
	S3, S2, S1, S0, Cout : out STD_LOGIC);
end four_bit_adder_code;

--Structural Model

architecture behav of four_bit_adder_code is

component full_adder_code is
	port(
	A, B, Cin : in STD_LOGIC;
	Sum, Cout : out STD_LOGIC);
end component;

signal C0, C1, C2 : STD_LOGIC;

begin 
	full_adder1 : full_adder_code port map(A0, B0, Cin, S0, C0);  
	full_adder2 : full_adder_code port map(A1, B1, C0, S1, C1);
	full_adder3 : full_adder_code port map(A2, B2, C1, S2, C2);	 
	full_adder4 : full_adder_code port map(A3, B3, C2, S3, Cout); 
end behav;