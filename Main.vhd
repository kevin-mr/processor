----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:17:22 03/17/2017 
-- Design Name: 
-- Module Name:    Main - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Main is
	Port ( clock : in  STD_LOGIC);
end Main;

architecture Behavioral of Main is
	component MBR is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component MAR is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component PC is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component IR is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component UnitControl is
		Port ( clock : in  STD_LOGIC;
				 data: in STD_LOGIC_VECTOR (15 downto 0);
				 operando_1: out  STD_LOGIC_VECTOR (5 downto 0);
				 operando_2: out  STD_LOGIC_VECTOR (5 downto 0);
				 scontrol: out  STD_LOGIC_VECTOR (1 downto 0);
             incontrol : out  STD_LOGIC_VECTOR (7 downto 0);
             outcontrol : out  STD_LOGIC_VECTOR (1 downto 0));
	end component;
	component DataBusControl is
		Port ( clock : in  STD_LOGIC;
				 control: in  STD_LOGIC_VECTOR (8 downto 0);
				 data_pc : in  STD_LOGIC_VECTOR (15 downto 0);
				 data_mar : in  STD_LOGIC_VECTOR (15 downto 0);
				 data_mbr : in  STD_LOGIC_VECTOR (15 downto 0);
				 data_ir : in  STD_LOGIC_VECTOR (15 downto 0);
				 output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component RAM is
		Port ( clock : in  STD_LOGIC;
             control : in  STD_LOGIC_VECTOR (1 downto 0);
			    address : in  STD_LOGIC_VECTOR (5 downto 0);
             input : in  STD_LOGIC_VECTOR (15 downto 0);
             output : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	
	signal scontrol: STD_LOGIC_VECTOR (1 downto 0);
	signal incontrol: STD_LOGIC_VECTOR (7 downto 0);
	signal outcontrol: STD_LOGIC_VECTOR (1 downto 0);
	signal operando_1: STD_LOGIC_VECTOR (5 downto 0);
	signal operando_2: STD_LOGIC_VECTOR (5 downto 0);
	signal data_pc: STD_LOGIC_VECTOR (15 downto 0);
	signal data_mar: STD_LOGIC_VECTOR (15 downto 0);
	signal data_mbr: STD_LOGIC_VECTOR (15 downto 0);
	signal data_ir: STD_LOGIC_VECTOR (15 downto 0);
	signal data_ram: STD_LOGIC_VECTOR (15 downto 0);
	signal data_bus: STD_LOGIC_VECTOR (15 downto 0);
	signal address: STD_LOGIC_VECTOR (5 downto 0);
	signal address_bus: STD_LOGIC_VECTOR (5 downto 0);
begin

G1: UnitControl 
	 Port Map(
		clock => clock,
		data => data_bus,
		operando_1 => operando_1,
		operando_2 => operando_2,
		scontrol => scontrol,
		incontrol => incontrol,
		outcontrol => outcontrol);
G2: PC Port Map(
		clock => clock,
		control => incontrol(1 downto 0),
		input => data_bus,
		output => data_pc);
G3: MAR Port Map(
		clock => clock,
		control => incontrol(3 downto 2),
		input => data_bus,
		output => data_mar);
G4: MBR Port Map(
		clock => clock,
		control => incontrol(5 downto 4),
		input => data_bus,
		output => data_mbr);
G5: IR Port Map(
		clock => clock,
		control => incontrol(7 downto 6),
		input => data_bus,
		output => data_ir);
G6: RAM Port Map(
		clock => clock,
		control => outcontrol,
		address => address_bus,
		input => data_bus,
		output => data_ram);
		
process(incontrol,outcontrol,data_pc,data_mar,data_mbr,data_ir,data_ram)
	variable edata: STD_LOGIC_VECTOR (15 downto 0):= X"0000";
begin
	if incontrol(1) = '1' then 
		edata := data_pc;
	elsif incontrol(5) = '1' then 
		edata := data_mbr;
	elsif incontrol(7) = '1' then 
		edata := data_ir;
	elsif outcontrol(1) = '1' then
		edata := data_ram;
	elsif scontrol(0) = '1' then
		edata := "0000000000" & operando_2;
	end if;
	data_bus <= edata;
end process;

process(incontrol,address)
	variable eaddress: STD_LOGIC_VECTOR (5 downto 0):= "000000";
begin
	if incontrol(3) = '1' then 
		eaddress := data_mar(5 downto 0);
	elsif scontrol(1) = '1' then
		eaddress := operando_1;
	end if;
	address_bus <= eaddress;
end process;

end Behavioral;

