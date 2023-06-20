#include <stdio.h>


/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a =1;
	unsigned long int b, c, temp, sum;

	b = 1;
	c = 2;
	sum = 0;

	while (a <= 33)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + c;
		}
		temp = b + c;
		b = c;
		c = temp;
		a += 1;

	}

	printf("%lu\n", sum);

	return (0);
}
