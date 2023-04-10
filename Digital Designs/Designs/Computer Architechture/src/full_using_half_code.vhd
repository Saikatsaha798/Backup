Library IEEE;
Use IEEE.STD_LOGIC_1164.all;

entity full_using_half_code is
	port(
	A, B, Cin : in STD_LOGIC;
	Sum, Cout : out STD_LOGIC);
end full_using_half_code;

--Structural Model

architecture behav of full_using_half_code is

component half_adder_code is
	port(
	A, B : in STD_LOGIC;
	Sum, Cout : out STD_LOGIC);
end component;

signal s_half, c_gen, c_prop : STD_LOGIC;

begin
	half_adder_1 : half_adder_code port map (A, B, s_half, c_gen);
	half_adder_2 : half_adder_code port map (s_half, cin, Sum, c_prop);
	Cout <= c_gen or c_prop;
end behav;