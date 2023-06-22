#include "main.h"

/**
 * more_numbers -display -0 to 14 many 10xtimes
 *	with -putchar
 * Return : always successfully 0
 */

void more_numbers(void)
{
	int row, number = 0;

	for (row = 0 ; row < 10 ; row += 1)
	{
		number = 0;

		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
			number += 1;
		}
		_putchar('\n');
	}
}

