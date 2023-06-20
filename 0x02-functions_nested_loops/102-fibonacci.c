#include <stdio.h>


/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int compt = 0;
	unsigned long a = 0, b = 1, sum;

	while (compt < 50)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;
		if (compt == 49)
			printf("\n");
		else
			printf(", ");
		compt += 1;
	}
		return (0);
}
