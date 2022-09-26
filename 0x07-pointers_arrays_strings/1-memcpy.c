#include "main.h"

/**
 * _memcpy - Function to copy bytes from one memory location to another.
 * @dest: Pointer to destination memory location.
 * @src: Pointer to source memory location
 * @n: Number of bytes to copy.
 * Return: Pointer to memory location.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
