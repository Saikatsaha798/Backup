Library IEEE;
Use IEEE.std_logic_1164.all;

entity xor_code is
	port(
	A : in STD_LOGIC;
	B : in STD_LOGIC;
	Y : out STD_LOGIC
	);
end xor_code;

--DataFlow Model

--architecture behav of xor_code is
--begin
--	Y <= A xor B;
--end behav;	 

--Behavioural Model

architecture behav of xor_code is
begin
	process(A,B)
	begin
		if (A=B) then
			Y <= '0';
		else
			Y <= '1';
		end if;
	end process;
end behav;
