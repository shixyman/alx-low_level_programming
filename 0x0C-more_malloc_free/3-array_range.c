#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/

int *array_range(int min, int max)
{
	int *ptr;
	int len, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (len = 0; len < size && min <= max; len++, min++)
		*(ptr + len) = min;
	return (ptr);
}
