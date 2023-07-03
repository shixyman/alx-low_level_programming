#include "main.h"

/**
 * print_diagsums - display the sum of 2 diagonals
 * @a: paramter of integer
 * @size: parameter size of matrix
 */
void print_diagsums(int *a, int size)
{
	int len = 0, sum1 = 0, sum2 = 0;

	while (len < size)
	{
		sum1 += a[len];
		a += size;
		len += 1;
	}

	a -= size;

	len = 0;

	while (len < size)
	{
		sum2 += a[len];
		a -= size;
		len += 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
