#include "main.h"

/**
 * _strspn - function to get length of a prefix substring.
 * @s: main string.
 * @accept: substring.
 * Return: integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count = 0;
				break;
			}
		}
		if (count == 1)
			break;
	}
	return (i);
}
