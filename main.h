#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
  *struct formats - hold fromat specifiers & functions.
  *@format_spec: character.
  *@print_func: function pointer.
*/
typedef struct formats
{
	char format_spec;
	int (*print_func)(va_list, int);
} FormatFunction;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_functions(char c))(va_list, int);
int chars_func(va_list, int);
int strs_func(va_list, int);
int int_func(va_list, int);
int print_int_func(int, int);
int digits_func(unsigned long num, unsigned int targ, const char *digits);
unsigned int len_func(unsigned int, int);

#endif
