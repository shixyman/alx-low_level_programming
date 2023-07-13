#include <stdlib.h>

/**
 * _realloc - re-allocate a memory block
 * @ptr: parameter memory block to reallocate
 * @old_size: parameter ofsize of memory
 * @new_size: parameter size of memory
 * Return: return pointer to new memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		pointer[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return ((void *)pointer);
}
