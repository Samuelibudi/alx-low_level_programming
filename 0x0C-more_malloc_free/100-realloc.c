#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates memory block.
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size in bytes of allocated space for ptr.
 * @new_size: Size in bytes for new memory block.
 * Return: nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULLL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
