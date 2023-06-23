#include "main.h"

/**
 * print_number - display number.
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int tmp;

	if (n < 0)
	{
		tmp = -n;
		_putchar('-');
	}
	else
	{
		tmp = n;
	}

	if (tmp / 10)
	{
		print_number(tmp / 10);
	}

	_putchar((n1 % 10) + '0');
}
