#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @height: width of array.
 * Return: pointer of an array of integer.
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	c = malloc(height * sizeof(int *));

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));
		if (c[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(c[i]);
			free(c);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			c[i][j] = 0;
	return (c);
}
