#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it.
 * @size: size of array to create.
 * @c: character to initialize array.
 * Return: pointer to character.
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
		return (NULL);

	i = malloc(sizeof(c) * size);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		i[j] = c;

	return (i);
}

