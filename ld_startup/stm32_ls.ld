ENTRY(Reset_Handler)

MEMORY
{
	FLASH (rx)  : ORIGIN = 0x08000000, LENGTH = 512K
	SRAM  (rwx) : ORIGIN = 0x20000000, LENGTH = 128K
}

_estack = ORIGIN(SRAM) + LENGTH(SRAM); /* end of SRAM; used to initialize the stack pointer*/

__max_heap_size  = 0x200;
__max_stack_size = 0x400;

SECTIONS
{
	.text :
	{
		. = ALIGN(4);
		KEEP(*(.isr_vector))
		*(.text*)
		*(.rodata*)
		. = ALIGN(4);
		_etext = .;	/* end of .text */
	} > FLASH

	.data :
	{
		. = ALIGN(4);
		_sdata = .;	/* start of .data */
		*(.data*)
		. = ALIGN(4);
		_edata = .;	/* end of .data */
	} > SRAM AT> FLASH	/* VMA = SRAM, LMA = FLASH */

	_sidata = LOADADDR(.data);

	.bss :
	{
		. = ALIGN(4);
		_sbss = .;	/* start of .bss */
		*(.bss*)
		*(COMMON)
		. = ALIGN(4);
		_ebss = .;	/* end of .bss */
	} > SRAM

    ASSERT(
        _ebss + __max_heap_size + __max_stack_size <= ORIGIN(SRAM) + LENGTH(SRAM),
        "Not enough SRAM for heap and stack"
    )
}
