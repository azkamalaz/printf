#include "main.h"
/**
  * hex_func - Print hex number.
  * @n: arguments.
  * @str_length: string length.
  * Return: length.
  */

int hex_func(va_list n, int str_length)
{
	unsigned int num = va_arg(n, unsigned int);

	str_length = str_length + digits_func(num, 16, "0123456789abcdef");

	return (str_length);
}
/team: Abosede Ajoloko, Kamal Azenag
