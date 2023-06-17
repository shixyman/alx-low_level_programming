#include <stdio.h>

/**
 * main - display  all possible combinations of two two-digit number
 *
 * Return: 0 (succefully)
 */

int main(void)
{
	int i = 0, j = 0;
	int sidea, sideb, sidec, sided;

	while (i < 100)
	{
		sidea = i / 10;
		sideb = i % 10;
		j = 0;
		while (j < 100)
		{
			sidec = j / 10;
			sided = j % 10;

			if (sidea < sidec || (sidea == sidec && sideb < sided))
			{
				putchar(sidea + '0');
				putchar(sideb + '0');
				putchar(32);
				putchar(sidec + '0');
				putchar(sided + '0');

				if (sidea != 9 || sideb != 8)
				{
					putchar (44);
					putchar (32);
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
