#ifndef FODOOS_H
#define FODOOS_H

#include <stddef.h>
#include <stdbool.h>

void print(const char* message);
int fodoos_getkey();
void fodoos_putchar(char c);
void* fodoos_malloc(size_t size);
void fodoos_free(void* ptr);

int fodoos_getkeyblock();
void fodoos_terminal_readline(char* out, int max, bool output_while_typing);

#endif