#include "main.h"

/**
  * binary_func - unsigned int to binary.
  * @num: be convert.
  * @str_length: characters lenght.
  * Return: length.
  */
int binary_func(unsigned int num, int str_length)
{
	if ((num / 2) != 0)
	{
		binary_func(num / 2, str_length);
	}

	_putchar((num % 2) + '0');
	str_length = str_length + len_func(num, 2);
	return (str_length + 1);
}
/team: Abosede Ajoloko, Kamal Azenag/
