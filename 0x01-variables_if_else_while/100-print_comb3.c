#include <stdio.h>
/**
 * main- program that print all possible different combinations of two digits
 * Return: 0 (successfully)
 *
*/

int main(void)
{
	int l = 1, sideleft, sideright;

	while (i < 100)
	{
		sideleft = i / 10;
		sideright = i % 10;

		if (sideleft < sideright)
		{	putchar(sideleft + '0');
			putchar(sideright + '0');
			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}

		l += 1;
	}

	return (0);
}
