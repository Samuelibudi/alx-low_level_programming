#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - function fress a 2 dimensional array.
 * @grid: multidimensional array.
 * @height: height of the array.
 * Return: nothing.
 */
void _free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - function splits string into words.
 * @str: String to split.
 * Return: pointer to an array.
 */
char **strtow(char *str)
{
	char **c;
	unsigned int ch, height, i, j, m;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (ch = height = 0; str[ch] != '\0'; ch++)
		if (str[ch] != ' ' && (str[ch + 1] == ' ' || str[ch + 1] == '\0'))
			height++;
	c = malloc((height + 1) * sizeof(char *));
	if (c == NULL || height == 0)
	{
		free(c);
		return (NULL);
	}
	for (i = m = 0; i < height; i++)
	{
		for (ch = m; str[ch] != '\0'; ch++)
		{
			if (str[ch] == ' ')
				m++;
			if (str[ch] != ' ' && (str[ch + 1] == ' ' || str[ch + 1] == '\0'))
			{
				c[i] = malloc((ch - m + 2) * sizeof(char));
				if (c[i] == NULL)
				{
					_free_grid(c, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; m <= ch; m++, j++)
			c[i][j] = str[m];
		c[i][j] = '\0';
	}
	c[i] = NULL;
	return (c);
}
