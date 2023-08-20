#include "main.h"
/**
  * int_func - Print integer.
  * @integers: int arguments.
  * @str_len: string Length.
  * Return: length of string.
  */

int int_func(va_list integers, int str_len)
{
	int num;

	num = va_arg(integers, int);

	str_len = print_int_func(num, str_len);
	return (str_len);
}
