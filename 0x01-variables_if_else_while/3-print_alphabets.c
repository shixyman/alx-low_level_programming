#include <stdio.h>

/**
 * main - use Putchar print lowercase & after UPPERCASE alphapet
 *
 * Return: 0 (successfully)
 *
*/
int main(void)
{
	char alphA = 'a';

	while (alphA <= 'z')
	{
		putchar(alphA);
		alphA++;
	}

	alphA = 'A';

	while (alphA <= 'Z')
	{
		putchar(alphA);
		alphA++;
	}

	putchar('\n');
	return (0);
}
