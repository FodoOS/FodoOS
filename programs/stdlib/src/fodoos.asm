[BITS 32]

section .asm

global print:function
global fodoos_getkey:function
global fodoos_putchar:function
global fodoos_malloc:function
global fodoos_free:function
global fodoos_process_load_start:function

; void print(const char* message)
print:
  push ebp
  mov ebp, esp
  push dword[ebp+8]
  mov eax, 1 ; Command print
  int 0x80
  add esp, 4
  pop ebp
  ret

; int fodoos_getkey()
fodoos_getkey:
  push ebp
  mov ebp, esp
  mov eax, 2 ; Command getkey
  int 0x80
  pop ebp
  ret

; void fodoos_putchar(char c)
fodoos_putchar:
  push ebp
  mov ebp, esp
  mov eax, 3 ; Command putchar
  push dword[ebp+8] ; Variable "c"
  int 0x80
  add esp, 4
  pop ebp
  ret

; void* fodoos_malloc(size_t size)
fodoos_malloc:
  push ebp
  mov ebp, esp
  mov eax, 4 ; Command malloc (Allocates memory for the process)
  push dword[ebp+8] ; Variable "size"
  int 0x80
  add esp, 4
  pop ebp
  ret

; void fodoos_free(void* ptr)
fodoos_free:
  push ebp
  mov ebp, esp
  mov eax, 5 ; Command free (frees the allocated memory for this process)
  push dword[ebp+8]
  int 0x80
  add esp, 4
  pop ebp
  ret

; void fodoos_process_load_start(const char* filename)
fodoos_process_load_start:
  push ebp
  mov ebp, esp
  mov eax, 6 ; Command 6 process load start (starts a process)
  push dword[ebp+8]
  int 0x80
  add esp, 8
  pop ebp
  ret