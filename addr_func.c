#include "main.h"

/**
 * print_address - Print address in hexadecimal format.
 * @n: arguments.
 * @str_length: string length.
 * Return: length.
 */
int print_address(va_list n, int str_length)
{
	void *address = va_arg(n, void *);

	if (address == NULL)
	{
		str_length += _puts("(nil)");
	}
	else
	{
		str_length += _puts("0x");

		str_length += digits_func2((unsigned long)address, 16, "0123456789abcdef");
	}
	return (str_length);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
