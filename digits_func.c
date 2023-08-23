#include "main.h"
/**
  * digits_func - Print digits.
  * @num: digits.
  * @targ: digits to convert the digits to.
  * @digits: The digits found.
  * Return: length.
  */

int digits_func(unsigned long num, unsigned int targ, const char *digits)
{
	if (num >= targ)
		digits_func((num / targ), targ, digits);
	_putchar(digits[num % targ]);
	return (len_func(num, targ) + 1);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
