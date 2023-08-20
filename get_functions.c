#include "main.h"
/**
  *get_functions - returns pointer to function.
  *@fptr_find: character to be used to find pointer function.
  *Return: pointer to function or NULL.
  */

int (*get_functions(char fptr_find))(va_list, int)
{
	FormatFunction funcs[] = {
		{'c', chars_func},
		{'s', strs_func},
		{'d', int_func},
		{'i', int_func}
	};

	int i;

	for (i = 0; funcs[i].format_spec; i++)
	{
		if (fptr_find == funcs[i].format_spec)
		{
			return (funcs[i].print_func);
		}
	}

	return (NULL);
}
