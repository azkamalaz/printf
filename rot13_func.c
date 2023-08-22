#include "main.h"
/**
  * rot13_func - prints the rot13'ed string.
  * @n: argument.
  * @str_length: length.
  * Return: length.
  */
int rot13_func(va_list n, int str_length)
{
	int a, p;

	char alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";

	char *s = va_arg(n, char *);

	if (s == NULL)
		return (-1);

	a = 0, p = 0;
	while (s[a])
	{
		if ((s[a] >= 'A' && s[a] <= 'Z') || (s[a] >= 'a' && s[a] <= 'z'))
		{
			p = s[a] - 65;
			str_length = str_length + _putchar(alpha[p]);
		}
		else
			str_length = str_length + _putchar(s[a]);

		a++;
	}

	return (str_length);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
