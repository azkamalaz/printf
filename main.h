#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
  *struct formats - hold fromat specifiers & functions.
  *@id: character.
  *@f: function pointer.
*/
typedef struct formats
{
	char id;
	int (*f)(va_list, int);
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_functions(char c))(va_list, int);
int chars_func(va_list, int);
int strs_func(va_list, int);
int int_func(va_list, int);
int print_int_func(int, int);
int digits_func(unsigned long num, unsigned int targ, const char *digits);
unsigned int len_func(unsigned int, int);
int unsigned_func(va_list n, int str_length);
int octal_func(va_list n, int str_length);
int hex_func(va_list n, int str_length);
int HEX_func(va_list n, int str_length);
int check_uns_func(va_list n, int str_length);
int binary_func(unsigned int num, int str_length);
int rot13_func(va_list n, int str_length);
int non_print_str(va_list n, int str_length);
int print_address(va_list n, int str_length);
int _puts(char *str);
int str_rev_func(va_list chars, int str_len);

/*team: Abosede Ajoloko, Kamal Azenag*/
#endif
