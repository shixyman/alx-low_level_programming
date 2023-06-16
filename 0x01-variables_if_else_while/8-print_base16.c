#include <stdio.h>

/**
 * main - print all element sof the base 64 in lowercase
 *
 * Return:0 (successfully)
 *
*/

int main(void)
{
	char alpha = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num += 1;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha += 1;
	}
	putchar('\n');

	return (0);
}
