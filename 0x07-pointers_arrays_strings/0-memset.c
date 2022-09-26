#include "main.h"

/**
 * _memset - Function to set memory to constant byte.
 * @s: Pointer to memory location.
 * @b: Constant byte.
 * @n: Number of bytes to set.
 * Return: Pointer to memory location.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
