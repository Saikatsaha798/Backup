Library IEEE;
Use IEEE.std_logic_1164.all;

entity not_code is
	port(
	A : in STD_LOGIC;
	Y : out STD_LOGIC
	);
end not_code;

--DataFlow Model

--architecture behav of not_code is
--begin
--	Y <= not A;
--end behav; 

--Behavioural Model

architecture behav of not_code is
begin
	process(A)
	begin
		if (A='0') then
			Y <= '1';
		else
			Y <= '0';
		end if;
	end process;
end behav;