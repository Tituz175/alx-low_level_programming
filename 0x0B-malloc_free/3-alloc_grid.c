#include "main.h"

/**
 * alloc_grid -> create a grid.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: pointer of the grid.
 */

int **alloc_grid(int width, int height)
{
	int k, countW, countH, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (countH = 0; countH < height; countH++)
	{
		a[countH] = malloc(width * sizeof(int));
		if (a[countH] == NULL)
		{
			for (countW = countH; countW >= 0; countW--)
			{
				free(a[countH]);
			}
			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			a[k][l] = 0;
	}
	return (a);
}
