#include "main.h"

/**
 * jack_bauer - display minutes of day/night 24hours
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour = 0, min;

	while (hour <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(58);
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min += 1;
		}
		hour += 1;
	}
}
