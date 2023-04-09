Library IEEE;
Use IEEE.std_logic_1164.all;

entity xnor_code is
	port(
	A : in STD_LOGIC;
	B : in STD_LOGIC;
	Y : out STD_LOGIC
	);
end xnor_code;

--DataFlow Model

--architecture behav of xnor_code is
--begin
--	Y <= A xnor B;
--end behav;

--Behavioural Model

architecture behav of xnor_code is
begin
	process(A,B)
	begin
		if (A=B) then
			Y <= '1';
		else
			Y <= '0';
		end if;
	end process;
end behav;