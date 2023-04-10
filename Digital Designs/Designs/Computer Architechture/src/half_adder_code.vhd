Library IEEE;
Use IEEE.STD_LOGIC_1164.all;

entity half_adder_code is
	port (
	A, B : in STD_LOGIC;
	Sum, Cout : out STD_LOGIC);
end half_adder_code;

--DataFlow Model

--architecture behav of half_adder_code is
--begin
--	Sum <= A xor B;
--	Cout <= A and B;
--end behav;		 

--Behavioural Model

architecture behav of half_adder_code is
begin
	process (A, B)	
	begin
		if (A=B) then
			Sum <= '0';
		else
			Sum <= '1';
		end if;
			
		if (A='1' and B='1') then
			Cout <= '1';
		else
			Cout <= '0';  
		end if;
	end process; 
end behav;
	