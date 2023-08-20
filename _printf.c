#include "main.h"
/**
 * _printf - my own printf function.
 * @format: format.
 * Return: characters to print.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, length = 0;
	int (*func_ptr)(va_list, int);

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for ( ; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				length = length + (format[i]);
				continue;
			}
			if (format[i] == '\0')
			{
				va_end(list);
				return (-1);
			}
			func_ptr = get_functions(format[i]);
			if (func_ptr != NULL)
				length = func_ptr(list, length);
			else
			{
				length = length + _putchar(format[i - 1]);
				length = length + _putchar(format[i]);
			}
		}
		else
		{
			length = length + _putchar(format[i]);
		}
	}
	va_end(list);
	return (length);
}
