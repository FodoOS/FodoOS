#ifndef CONFIG_H
#define CONFIG_H

#define KERNEL_CODE_SELECTOR 0x08
#define KERNEL_DATA_SELECTOR 0x10

#define FODOOS_TOTAL_INTERRUPTS 512

// 100MB heap size
#define FODOOS_HEAP_SIZE_BYTES 104857600
#define FODOOS_HEAP_BLOCK_SIZE 4096
#define FODOOS_HEAP_ADDRESS 0x01000000
#define FODOOS_HEAP_TABLE_ADDRESS 0x00007E00

#define FODOOS_SECTOR_SIZE 512

// Max file path length
#define FODOOS_MAX_PATH 108

#define FODOOS_MAX_FILESYSTEMS 12
#define FODOOS_MAX_FILE_DESCRIPTORS 512

#define FODOOS_TOTAL_GDT_SEGMENTS 6

#define FODOOS_PROGRAM_VIRTUAL_ADDRESS 0x400000
#define FODOOS_USER_PROGRAM_STACK_SIZE 1024 * 16
#define FODOOS_PROGRAM_VIRTUAL_STACK_ADDRESS_START 0x3FF000
#define FODOOS_PROGRAM_VIRTUAL_STACK_ADDRESS_END FODOOS_PROGRAM_VIRTUAL_STACK_ADDRESS_START - FODOOS_USER_PROGRAM_STACK_SIZE

#define FODOOS_MAX_PROGRAM_ALLOCATIONS 1024
#define FODOOS_MAX_PROCESSES 12

#define USER_DATA_SEGMENT 0x23
#define USER_CODE_SEGMENT 0x1b

#define FODOOS_MAX_ISR80H_COMMANDS 1024

#define FODOOS_KEYBOARD_BUFFER_SIZE 1024

#endif