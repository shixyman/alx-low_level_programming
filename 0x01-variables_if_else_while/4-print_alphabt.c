#include <stdio.h>

/**
 * main - using putchar print all letters except e and q
 *
 * Return:0 (successfully)
 *
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
