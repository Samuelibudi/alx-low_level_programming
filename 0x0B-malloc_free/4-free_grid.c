#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free a two dimensional grid.
 * @grid: multidimensional array.
 * @height: height of grid.
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
