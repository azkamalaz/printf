#include "main.h"
/**
  *len_func - calculate the length of a string.
  *@num: digits;
  *@targ: base of digits.
  *Return: length (i).
  */
unsigned int len_func(unsigned int num, int targ)
{
	unsigned int i;

	i = 0;
	while (num > 0)
	{
		num = num / targ;
		if (num == 0)
			break;
		i++;
	}
	return (i);
}
