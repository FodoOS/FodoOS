#include "fodoos.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(int argc, char** argv)
{
  
  char str[] = "hello world";
  struct command_argument* root_argument = fodoos_parse_command(str, sizeof(str));
  printf("%s\n", root_argument->argument);
  printf("%s\n", root_argument->next->argument);

  while (1)
  {
  }
  
  return 0;
}