#include "main.h"

/**
  * unsigned_func- Prints an unsigned integer
  * @n: arguments
  * @str_lenght: string length
  * Return: length
  */

int unsigned_func(va_list n, int str_length)
{
	unsigned int num = va_arg(n, unsigned int);

	str_length = str_length + digits_func(num, 10, "0123456789");

	return (str_length);
}
/team: Abosede Ajoloko, Kamal Azenag/
