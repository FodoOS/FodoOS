#include "stdio.h"
#include "fodoos.h"

int putchar(int c)
{
  fodoos_putchar((char)c);
  return 0;
}