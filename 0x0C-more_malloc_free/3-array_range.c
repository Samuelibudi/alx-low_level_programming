#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates ana array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 * Return: Pointer to int.
 */
int *array_range(int min, int max)
{
	int *cr;
	int p;

	if (min > max)
		return (NULL);

	cr = malloc(sizeof(*cr) * ((max - min) + 1));

	if (cr == NULL)
		return (NULL);

	for (i = 0; min <= max; p++, min++)
		cr[p] = min;

	return (cr);
}
