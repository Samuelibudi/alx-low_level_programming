#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory.
 * @b: Amount of memory to allocate.
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b * sizeof(int));

	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	else
		return (p);
}
