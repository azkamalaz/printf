#include "main.h"
/**
  * HEX_func - Print HEX number.
  * @n: Argument.
  * @len: string length
  * Return: Length
  */

int HEX_func(va_list n, int str_length)
{
	unsigned int num = va_arg(n, unsigned int);

	str_length = str_length + digits_func(num, 16, "0123456789ABCDEF");
	return (str_length);
}
/team: Abosede Ajoloko, Kamal Azenag/
