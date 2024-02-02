#include "stdlib.h"
#include "fodoos.h"

void* malloc(size_t size)
{
  return fodoos_malloc(size);
}

void free(void* ptr)
{
  fodoos_free(ptr);
}