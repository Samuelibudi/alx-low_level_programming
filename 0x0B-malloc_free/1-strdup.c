#include "main.h"
#include <stdlib.h>

/**
 * *_strlen - function returns length of string.
 * @s: pointer to string
 * Return: string length.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}

/**
 * _strdup - Copies a string to allocated memory.
 * @str: Pointer to string to copy.
 * Return: A pointer to copy of string.
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int count = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	c = (char *)malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);

	for (count = 0; count <= i; count++)
		c[count] = str[count];

	return (c);
}

