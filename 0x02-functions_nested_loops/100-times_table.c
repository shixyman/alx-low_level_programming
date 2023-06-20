#include "main.h"


/**
 * print_times_table - prints the n times table
 * @number: number of the times table
 */
void print_times_table(int number)
{
	int a, b, k;

	if (number >= 0 && number <= 15)
	{
		for (a = 0; a <= number; a += 1)
		{
			for (b = 0; b <= number; b++)
			{
				c = b * i;
				if (b == 0)
				{
					_putchar(c + '0');
				} else if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				} else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
				_putchar('\n');
		}
	}
}
