#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function free matrix
 * @grid: the matrix
 * @height: height of matrix
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
