#include <stdio.h>

/**
 * main -main print all numbers base 10 start from 0
 *
 * Return:0 (successfully)
 *
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
