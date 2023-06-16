#include <stdio.h>
/**
 * main- program that print all possible different combinations of two digits
 * Return: 0 (successfully)
 *
*/

int main(void)
{
	int l = 1, sideleft, sideright;

	while (l < 100)
	{
		sideleft = l / 10;
		sideright = l % 10;

		if (sideleft < sideright)
		{	putchar(sideleft + '0');
			putchar(sideright + '0');
			if (l < 89)
			{
				putchar(44);
				putchar(32);
			}

		l += 1;
	}

	return (0);

	}
}
