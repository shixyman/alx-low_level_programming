#include <stdio.h>


/**
 * main - list all the numbers below 1024 (excluded)
 *        and  are multiples by 3 or 5.
 *
 * Return: Always 0 successfully
 */

int main(void)
{
	int c = 0, sum = 0;

	while (c < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		sum += i;
		c += 1;
	}

	printf("%d\n", sum);

	return (0);
}
