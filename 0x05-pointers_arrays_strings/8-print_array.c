#include "main.h"
#include <stdio.h>
/**
 * print_array - dipslay n item of array integer
 * @arr: array give
 * @n : the paramter of number of elements
 *
 * Return:void
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i += 1)
	{
		printf("%d", arr[i]);
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
