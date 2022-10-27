#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endan, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &io;

	return ((int)*c);
}
