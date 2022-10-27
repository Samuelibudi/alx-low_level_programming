#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len, base;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	base = 1;

	for (len--; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
		{
			i += base;
		}
		base *= 2;
	}
	return (i);
}
