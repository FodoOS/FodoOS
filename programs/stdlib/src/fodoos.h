#ifndef FODOOS_H
#define FODOOS_H

#include <stddef.h>

void print(const char* message);
int getkey();
void fodoos_putchar(char c);
void* fodoos_malloc(size_t size);
void fodoos_free(void* ptr);

#endif