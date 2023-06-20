#include <stdio.h>


/**
 * main - find and display  the sum of the even-valued terms
 *  a new line
 * Return: Always 0 (Successfully)
 */
int main(void)
{
	int a;
	unsigned long int b, c, temp, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum  += b;
		}

		temp = b + c;
		b = c;
		c = temp;
	}

	printf("%lu\n", sum);

	return (0);
}
