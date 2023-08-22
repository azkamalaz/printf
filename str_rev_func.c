#include "main.h"
/**
  * str_rev_func - Print a reversed string.
  * @chars: List of character.
  * @str_length: Length of string.
  * Return: length of the reversed string
  */
int str_rev_func(va_list chars, int str_length)
{
	const char *str = va_arg(chars, const char *);
	int length = 0;
	int i;

	if (!str)
		str = "(null)";

	while (str[length])
		length++;

	for (i = length - 1; i >= 0; i--)
		str_length = str_length + _putchar(str[i]);

	return (str_length);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
