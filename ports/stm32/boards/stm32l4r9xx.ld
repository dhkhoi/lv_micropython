/*
    GNU linker script for STM32L4R9I-DISC
*/

/* Specify the memory areas */
MEMORY
{
    FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 1224K 
    FLASH_FS (r)    : ORIGIN = 0x08099000, LENGTH = 824K
    RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 640K
}
/* produce a link error if there is not this amount of RAM for these sections */
_minimum_stack_size = 2K;
_minimum_heap_size = 16K;

/* Define the stack.  The stack is full descending so begins just above last byte of RAM,
   or bottom of FS cache..  Note that EABI requires the stack to be 8-byte aligned for a call. */

/* RAM extents for the garbage collector */
_ram_start = ORIGIN(RAM);
_ram_end = ORIGIN(RAM) + LENGTH(RAM);

_ram_fs_cache_end = _ram_end;
_ram_fs_cache_start = _ram_fs_cache_end - 4K; /* fs cache = 4K */

_estack = _ram_fs_cache_start - _estack_reserve;
_sstack = _estack - 24K; /* stack = 16K */

_heap_start = _ebss; 
_heap_end = _sstack; 

_flash_fs_start = ORIGIN(FLASH_FS);
_flash_fs_end   = ORIGIN(FLASH_FS) + LENGTH(FLASH_FS);
