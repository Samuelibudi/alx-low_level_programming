#include "main.h"

/**
 * _strcmp - function compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equal, else otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, i = 0;

	while (i == 0)
	{
		if ((*(s1 + count) == '\0') && (*(s2 + count) == '\0'))
			break;
		i = *(s1 + count) - *(s2 + count);
		count++;
	}
	return (i);
}
