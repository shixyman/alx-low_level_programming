#include "main.h"

/**
 * print_diagonal - make a diagonal line with dollar sign
 * @number: argument of many times the character
 */

void print_diagonal(int number)
{
	if (number > 0)
	{
		int row = 0, slash;

		while (number >= row)
		{
			for (slash = 0; number > slash; slash += 1)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
