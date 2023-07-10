#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function return poiter
 * to 2 dimentions array initalized with 0
 * @width: with of the matrix (2d array)
 * @height: height of the matrix
 * Return: pointer to array if fail NULL
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int height_i, width_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (height_i = 0; height_i < height; height_i++)
	{
		matrix[height_i] = malloc(sizeof(int) * width);

		while (height_i >= 0)
		{
		free(matrix[height_i]);
		height_i--;
		}

		free(matrix);
		return (NULL);

	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			matrix[height_i][width_i] = 0;
	}

	return (matrix);
}
