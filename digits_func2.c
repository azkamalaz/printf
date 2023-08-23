
/**
  * digits_func2 - Print digits.
  * @num: digits.
  * @targ: digits to convert the digits to.
  * @digits: The digits found.
  * Return: length.
  */

int digits_func2(unsigned long num, unsigned int targ, const char *digits)
{
	int length = 0;
	char buffer[32];
	int i;
	int index = 0;

	while (num >= targ)
	{
		buffer[index++] = digits[num % targ];
		num /= targ;
	}

	buffer[index] = digits[num];

	for (i = index; i >= 0; i--)
	{
		_putchar(buffer[i]);
		length++;
	}

	return (length);
}
/*team: Abosede Ajoloko, Kamal Azenag*/
