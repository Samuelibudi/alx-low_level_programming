#include "main.h"

/**
 * _strlen - function to return length of string.
 *
 * @s: Pointer to string
 *
 * Return: string length.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
