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

	char alpha[] = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
	};

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
