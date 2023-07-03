#include "main.h"

/**
 * print_diagsums - display the sum of 2 diagonals
 * @a: paramter of integer
 * @size: parameter size of matrix
 */
void print_diagsums(int *a, int size)
{
	int len, sum1 = 0, sum2 = 0;

	for (len = 0; len < size; len += 1)
	{
		sum1 += a[len];
		a += size;
	}

	a -= size;

	for (len = 0; len < size; len += 1)
	{
		sum2 += a[len];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
