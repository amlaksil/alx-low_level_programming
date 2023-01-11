#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: row
 * @height: column
 *
 * Return: NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);
	*ptr = malloc(sizeof(int) * width * height);

	if (*ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
		_putchar('\0');
	}
	return (ptr);
}
