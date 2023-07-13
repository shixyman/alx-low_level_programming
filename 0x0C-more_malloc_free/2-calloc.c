#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: return voidof  pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int len;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (len = 0; len < (nmemb * size); len += 1)
		ptr[i] = 0;
	return (ptr);
}
