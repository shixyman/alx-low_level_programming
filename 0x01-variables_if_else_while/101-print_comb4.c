#include <stdio.h>

/**
 * main -program that print all conbinations of three digits
 *
 * Return:0 'successfully'
*/

int main(void)
{
	int l = 1, sideleft, sidemiddle, sideright;

	while (l < 1000)
	{
		sideleft = l / 100;
		sidemiddle = (l / 10) % 10;
		sideright = l % 10;

		if (sideleft < sidemiddle && sidemiddle < sideright)
		{
			putchar(sideleft + '0');
			putchar(sidemiddle + '0');
			putchar(sideright + '0');

			if (l < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
		l += 1;
	}
	putchar('\n');

	return (0);
}
