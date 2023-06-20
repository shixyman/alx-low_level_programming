#include "main.h"

/**
 * print_last_digit - display the last number of digit
 *
 * @digit: the argument of last digit
 * Return: success  give the result of last digit
*/
int print_last_digit(int digit);
{
	int last;

	if (digit < 0)
	{
		digit = digit * -1;
		last = digit % 10;
		_putchar(last + '0');
	}
	else
	{
		last = digit % 10;
		_putchar(last + '0');
	}
	return (last);
}
