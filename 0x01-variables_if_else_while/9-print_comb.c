#include <stdio.h>

/**
 * main - print all possible for single digit numbers with conditions
 * putchar without char
 *
 *
 * Return: 0 (successfully)
*/

int main(void)
{
	int alpha = 0;

	while (alpha < 10)
	{
		putchar(alpha + 48);
		if (alpha < 9)
		{
			putchar(44);
			putchar(32);
		}
			alpha += 1;
	}
	putchar('\n');

	return (0);
}
