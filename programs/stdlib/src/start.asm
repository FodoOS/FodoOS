[BITS 32]

global _start

extern c_start
extern fodoos_exit

section .asm

_start:
  call c_start
  call fodoos_exit
  ret