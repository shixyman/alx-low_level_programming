#include "main.h"

/**
 * print_diagonal - make a diagonal line with dollar sign
 * @number: argument of many times the character
 */

void print_diagonal(int number)
{
	if (number > 0)
	{
		int row = 1, slash;

		while (row <= number)
		{
			for (slash = 1; slash < row; slash += 1)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			row += 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
