#include "main.h"

/**
 * flip_bits - return the number of bits ypu would need to flip to
 * get form one number t,o another.
 * @n: number one
 * @m: number two
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}

	return (i);
}
