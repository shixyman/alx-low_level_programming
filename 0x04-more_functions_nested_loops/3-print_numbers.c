#include "main.h"

/**
 * print_numbers - display number 0  to 9
 * using _putchar twice
 * Return: successfully 0 always
*/

void print_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		_putchar(number + '0');
		number += 1;
	}

	_putchar('\n');
}
