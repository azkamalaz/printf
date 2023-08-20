#include "main.h"
/**
  * strs_func - Print a string.
  * @chars: List of character.
  * @str_len: Length of string.
  * Return: length of the string
  */
int strs_func(va_list chars, int str_len)
{
	const char *str = va_arg(chars, const char *);

	if (!str)
		str = "(null)";
	while (*str)
		str_len = str_len + _putchar(*str++);

	return (str_len);
}
