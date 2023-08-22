#include "main.h"

/**
  *get_functions - returns pointer to function.
  *@fptr_find: character to be used to find pointer function.
  *Return: pointer to function or NULL.
  */
int (*get_functions(char fptr_find))(va_list, int)
{
	match funcs[] = {
		{'c', chars_func},
		{'s', strs_func},
		{'d', int_func},
		{'i', int_func},
		{'b', check_uns_func},
		{'u', unsigned_func},
		{'o', octal_func},
		{'x', hex_func},
		{'X', HEX_func},
		{'S', non_print_str},
		{'p', print_address},
		{'r', str_rev_func},
		{'R', rot13_func}
	};

	int i;

	for (i = 0; funcs[i].id; i++)
	{
		if (fptr_find == funcs[i].id)
		{
			return (funcs[i].f);
		}
	}

	return (NULL);
}

/**
 * _printf - my own printf function.
 * @format: format.
 * Return: characters to print.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int a, str_length;
	int (*func)(va_list, int);

	va_start(list, format);
	if (format == NULL)
		return (-1);
	a = 0;
	str_length = 0;
	while (format && format[a])
	{
		if (format[a] == '%')
		{
			a++;
			if (format[a] == '%')
			{
				str_length = str_length + _putchar(format[a]);
				a++;
				continue;
			}
			if (format[a] == '\0')
				return (-1);
			func = get_functions(format[a]);
			if (func != NULL)
				str_length = func(list, str_length);
			else
			{
				str_length = str_length + _putchar(format[a - 1]);
				str_length = str_length + _putchar(format[a]);
			}
			a++;
		}
		else
		{
			str_length = str_length + _putchar(format[a]);
			a++;
		}
	}
	va_end(list);
	return (str_length);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
