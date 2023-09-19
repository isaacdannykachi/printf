#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _put(char c);
int _putstr(char *c);

int _printf(const char *format, ...);

#endif
