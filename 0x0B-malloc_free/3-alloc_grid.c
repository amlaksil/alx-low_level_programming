#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width < 1 || height < 1)
		return (NULL);
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (--i >= 0)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
