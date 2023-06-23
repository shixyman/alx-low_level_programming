#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	int divisor = 1;
	int tmp = number;

	while (tmp > 9)
	{
		tmp /= 10;
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((number / divisor) + '0');
		number %= divisor;
		divisor /= 10;
	}
}
