#include "main.h"
/**
  * chars_func - Prints a character.
  * @chars: List of character
  * @str_len: Length of string.
  * Return: str_len
  */
int chars_func(va_list chars, int str_len)
{
	char ch = va_arg(chars, int);

	str_len = str_len + _putchar(ch);
	return (str_len);
}
