Library IEEE;
Use IEEE.std_logic_1164.all;

entity nand_code is
	port(
	A : in STD_LOGIC;
	B : in STD_LOGIC;
	Y : out STD_LOGIC
);
end nand_code;

--DataFlow Model

--architecture behav of nand_code is 
--begin
--	Y <= A nand B;
--end behav;	

--Behavioural Model	  

architecture behav of nand_code is
begin				  
	process(A, B)
	begin
		if (A='1' and B='1') then
			Y <= '0';
		else
			Y <= '1';
		end if;
	end process;
end behav;
