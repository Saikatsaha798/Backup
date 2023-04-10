Library IEEE;
Use IEEE.std_logic_1164.all;

entity nor_code is
	port(
	A : in STD_LOGIC;
	B : in STD_LOGIC;
	Y : out STD_LOGIC
	);
end nor_code;

--DataFlow Model

--architecture behav of nor_code is
--begin
--	Y <= A nor B;
--end behav; 

--Behavioural Model

architecture behav of nor_code is
begin
	process(A,B)
	begin
		if (A='0' and B = '0') then
			Y <= '1';
		else
			Y <= '0';
		end if;
	end process;
end behav;