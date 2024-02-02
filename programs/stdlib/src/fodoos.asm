[BITS 32]

global print:function
global getkey:function
global fodoos_malloc:function

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

; int getkey()
getkey:
  push ebp
  mov eax, 2 ; Command getkey
  int 0x80
  pop ebp
  ret

; void* fodoos_malloc(size_t size)
fodoos_malloc:
  push ebp
  mov ebp, esp
  mov eax, 4 ; Command malloc (Allocates memory for the process)
  push dword[ebp+4] ; Variable "size"
  int 0x80
  add esp, 4
  pop ebp
  ret