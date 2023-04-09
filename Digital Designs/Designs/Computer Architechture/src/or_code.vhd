Library IEEE;
Use IEEE.std_logic_1164.all;

entity or_code is
	port(
	A : in STD_LOGIC;
	B : in STD_LOGIC;
	Y : out STD_LOGIC
	);
end or_code;

--DataFlow Model

--architecture behav of or_code is
--begin
--	Y <= A or B;
--end behav; 

--Behavioural Model

architecture behav of or_code is
begin
	process(A,B)
	begin
		if (A='0' and B = '0') then
			Y <= '0';
		else
			Y <= '1';
		end if;
	end process;
end behav;