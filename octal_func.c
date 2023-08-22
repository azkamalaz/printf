#include "main.h"

/**
  * octal_func - Print octal.
  * @n: arguments.
  * @str_length: string length
  * Return: length.
  */

int octal_func(va_list n, int str_length)
{
	unsigned int num = va_arg(n, unsigned int);

	str_length = str_length + digits_func(num, 8, "0123456789");

	return (str_length);
}
/team: Abosede Ajoloko, Kamal Azenag/
