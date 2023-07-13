Library IEEE;
Use IEEE.STD_LOGIC_1164.all;

entity adder_substractor_code is
	port(
	A3, A2, A1, A0, B3, B2, B1, B0, Cin : in STD_LOGIC;
	S3, S2, S1, S0, Cout : out STD_LOGIC);
end adder_substractor_code;

--Structural Model

architecture behav of adder_substractor_code is

component full_adder_code is
	port(
	A, B, Cin : in STD_LOGIC;
	Sum, Cout : out STD_LOGIC);
end component;

signal C0, C1, C2, B_0, B_1, B_2, B_3 : STD_LOGIC;

begin 					   
	B_0 <= B0 xor Cin;
	B_1 <= B1 xor Cin;
	B_2 <= B2 xor Cin;
	B_3 <= B3 xor Cin;
	
	full_adder1 : full_adder_code port map(A0, B_0, Cin, S0, C0);  
	full_adder2 : full_adder_code port map(A1, B_1, C0, S1, C1);
	full_adder3 : full_adder_code port map(A2, B_2, C1, S2, C2);	 
	full_adder4 : full_adder_code port map(A3, B_3, C2, S3, Cout); 
end behav;