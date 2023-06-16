#include <stdio.h>

/**
 * main -main use putchat twice -to print the alphabet lowercase with ascii.
 *
 * Return:0 (successfully)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
