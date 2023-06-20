#include "main.h"

/**
 * print_sign - check the sign if number is negative or positive or equal 0
 *
 * @s: argument of  function
 *
 * Return: always 0 successfully
 */

int print_sign(int s)
{
	if (s > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (s == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (s < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
