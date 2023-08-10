#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - This holds the address of a 2D array
 * @width: This takes an interger argument
 * @height: This takes an interger argument
 * Return: This returns a pointer on success and NULL on unsuccessful execution
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == 0)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *) malloc(width * sizeof(int));
	if(grid[i] == NULL)
	{
		for (i = 0; i >= 0; i++)
	{
	free (grid[i]);
	return (NULL);

	free(grid);
	return(NULL);
	}
	}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}
	return (grid);
}
