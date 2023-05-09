Library IEEE;
Use IEEE.STD_LOGIC_1164.all;

entity full_adder_code is
	port (
	A, B, Cin : in STD_LOGIC;
	Sum, Cout : out STD_LOGIC);
end full_adder_code;

--DataFlow Model

architecture behav of full_adder_code is
begin
	Sum <= A xor B xor Cin;
	Cout <= (A and B) or ((A xor B) and Cin);
end behav;		 	  