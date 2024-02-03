#include "shell.h"
#include "stdio.h"
#include "stdlib.h"
#include "fodoos.h"

int main(int argc, char** argv)
{
  print("FodoOS v1.0.0\n");
  while (1)
  {
    print("> ");
    char buf[1024];
    fodoos_terminal_readline(buf, sizeof(buf), true);
    print("\n");
  }

  return 0;
}