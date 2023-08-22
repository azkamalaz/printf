#include "main.h"
/**
  *non_print_str - print the str with ASCII == \x.
  *@n: arguments.
  *@str_length: length.
  *Return: length of characters printed.
  */
int non_print_str(va_list n, int str_length)
{
	int a;

	char *s = va_arg(n, char *);

	if (s == NULL)
		s = "(null)";
	a = 0;
	while (s[a] != '\0')
	{

		if ((s[a] > 0 && s[a] < 32) || s[a] >= 127)
		{
			if (s[a] < 15)
			{
				str_length = str_length + _printf("\\x0");
				str_length = str_length + _printf("%X", s[a]);
				a++;
			}
			else
			{
				str_length = str_length + _printf("\\x");
				str_length = str_length + _printf("%X", s[a]);
				a++;
			}
		}
		else
		{
			str_length += _putchar(s[a]);
			a++;
		}
	}
	return (str_length);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
