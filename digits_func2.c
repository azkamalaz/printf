#include "main.h"
/**
  * digits_func2 - Print digits.
  * @num: digits.
  * @targ: digits to convert the digits to.
  * @digits: The digits found.
  * Return: length.
  */

int digits_func2(unsigned long num, unsigned int targ, const char *digits)
{
	int length;

	if (num >= targ)
		length = digits_func2((num / targ), targ, digits);
	length += _putchar(digits[num % targ]);

	return (length);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
