#include "main.h"

/**
  *check_uns_func - check if unsigned.
  *@n: arguments.
  *@str_length: lenght of characters.
  *Return: length.
  */
int check_uns_func(va_list n, int str_length)
{
	unsigned int num;

	num = va_arg(n, int);
	return (binary_func(num, str_length));
}
/team: Abosede Ajoloko, Kamal Azenag
