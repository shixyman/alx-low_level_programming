#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void time_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a += 1)
	{
		for (b = 0; b < 10; b += 1)
		{
			c = b * i;
			if (b == 0)
			{
				_putchar(c + '0');
			}
		if (b != 0 && c < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(c + '0');
		}
		else if (c >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		}

		_putchar('\n');
	}
}
