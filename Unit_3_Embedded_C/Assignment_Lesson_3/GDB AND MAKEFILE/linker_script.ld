ENTRY(reset)
MEMORY
{
Mem (rwx) : ORIGIN = 0x00000000, LENGTH =64M
}
SECTIONS
{	
	. = 0X10000 ;
	.startup_joseph :
	{
	startup.o(.text)
	}> Mem
	.text_Nader :
	{
	*(.text) *(.rodata)
	}> Mem
	.data_Sophy :
	{
	*(.data)
	}> Mem
	.bss_unintialized_global :
	{
	*(.bss) *(COMMON)
	}> Mem
	. = . + 0x1000 ;/*4 kb of stack */
	stack_top = . ;
}