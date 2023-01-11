#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid previously created by alloc_grid
 * @grid: double pointer
 * @height: number of row
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
