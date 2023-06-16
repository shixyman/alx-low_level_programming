#include <stdio.h>

/**
 * main - main print the alphabet in reverse lowercase
 *
 * Return: 0 (successfully)
 *
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha -= 1;
	}
	putchar('\n');

	return (0);
}

