#include <stdio.h>


/**
 * main - find and display  the sum of the even-valued terms
 *  a new line
 * Return: Always 0 (Successfully)
 */
int main(void)
{
	int a = 1;
	unsigned long int b, c, temp, sum;

	b = 1;
	c = 2;
	sum = 0;

	while (a <= 33)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum  += c;
		}

		temp = b + c;
		b = c;
		c = temp;
		++i;

	}

	printf("%lu\n", sum);

	return (0);
}
