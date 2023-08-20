#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_functions(char c))(va_list, int);
int chars_func(va_list, int);
int strs_func(va_list, int);

#endif
