#include "main.h"
/**
  * print_int_func - print integers.
  * @num: Numbers.
  * @str_len: string Length.
  * Return: string length.
  */
int print_int_func(int num, int str_len)
{
	unsigned long b;

	if (num < 0)
	{
		str_len = str_len + _putchar('-');
		b = -(unsigned int)num;
	}
	else
	{
		b = num;
	}
	str_len = str_len + digits_func(b, 10, "0123456789");

	return (str_len);
}
