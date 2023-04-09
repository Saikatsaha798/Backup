Library IEEE;
Use IEEE.std_logic_1164.all;

entity and_code is
	port(
	A : in STD_LOGIC;
	B : in STD_LOGIC;
	Y : out STD_LOGIC
);
end and_code;

--DataFlow Model

--architecture behav of and_code is 
--begin
--	Y <= A and B;
--end behav;	

--Behavioural Model	  

architecture behav of and_code is
begin
	process(A, B)
	begin
		if (A='1' and B='1') then
			Y <= '1';
		else
			Y <= '0';
		end if;
	end process;
end behav;