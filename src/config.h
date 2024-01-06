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

#endif