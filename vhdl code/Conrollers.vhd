library ieee;
use ieee.std_logic_1164.all;
use IEEE.numeric_std.ALL;

------------------


entity conrollers is 
port(a,b:in std_logic;
m11,m12,m21,m22,bout: out std_logic);
end conrollers;


Architecture behavior of conrollers is 

begin 

process (a,b)
begin

bout<=b;
if a='0' then 
m11<= a;
m12<=not a;
m21<= not a;
m22<= a;

else
m11<=a;
m12<=not a;

m21<= a;
m22<= not a;
for i in 0 to 400000000 loop
	end loop; 
end if;
end process;


end behavior;