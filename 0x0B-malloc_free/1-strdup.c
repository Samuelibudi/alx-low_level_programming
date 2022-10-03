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
	unsigned int i = _strlen(str) + 1;
	int count = 0;
	char *c;

	c = malloc(sizeof(char) * i);

	while (count >= 0)
	{
		*(c + count) = *(str + i);
		if (*(str + count) == '\0')
			break;
		count++;
	}
	return (c);
}

