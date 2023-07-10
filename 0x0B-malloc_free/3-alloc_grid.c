#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: parameter  of columns
 * @height: parameter of rows
 * Return: pointer of 2D array
 */
int **alloc_grid(int width, int height)
{
	int row, col, f, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(*p));
	if (ptr == NULL)
		return (p);
	for (row = 0; row < height; row += 1)
	{
		p[row] = malloc(width * sizeof(int));
		if (ptr[row] == NULL)
		{
			for (f = 0; f < row; f++)
				free(ptr[f]);
			free(ptr);
			return (NULL);
		}
		for (col = 0; col < width; col += 1)
			ptr[row][col] = 0;
	}
	return (ptr);
}