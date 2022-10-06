#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of second string to add.
 * Return: Pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int i, j, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	if (n > j)
		n = j;

	p = malloc(i + n + 1);

	if (p == NULL)
		return (NULL);

	for (count = 0; count < (i + n); count++)
	{
		if (count < i)
			p[count] = s1[count];
		else
			p[count] = s2[count - i];
	}
	p[count] = '\0';
	return (p);
}
