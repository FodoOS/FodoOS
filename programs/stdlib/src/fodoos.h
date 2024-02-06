#ifndef FODOOS_H
#define FODOOS_H

#include <stddef.h>
#include <stdbool.h>

struct command_argument
{
  char argument[512];
  struct command_argument* next;
};

struct process_arguments
{
  int argc;
  char** argv;
};

void print(const char* message);
int fodoos_getkey();
void fodoos_putchar(char c);
void* fodoos_malloc(size_t size);
void fodoos_free(void* ptr);
void fodoos_process_load_start(const char* filename);
int fodoos_system(struct command_argument* arguments);
void fodoos_process_get_arguments(struct process_arguments* arguments);

int fodoos_getkeyblock();
void fodoos_terminal_readline(char* out, int max, bool output_while_typing);
struct command_argument* fodoos_parse_command(const char* command, int max);
int fodoos_system_run(const char* command);

#endif