#include "main.h"

/**
 * _strstr - Function finds the first occurence of a string.
 * @haystack: Main string oto search.
 * @needle: String to search for.
 * Return: returns pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	char *c1, *c2;

	while (*haystack != '\0')
	{
		c1 = haystack;
		c2 = needle;

		while (*haystack != '\0' && *c2 != '\0' && *haystack == *c2)
		{
			haystack++;
			c2++;
		}
		if (!*c2)
			return (c1);
		haystack = c1 + 1;
	}
	return (0);
}
