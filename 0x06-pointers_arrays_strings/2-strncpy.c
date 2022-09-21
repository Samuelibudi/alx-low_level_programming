#include "main.h"

/**
 * _strncpy - function copies a string.
 * @dest: Destination of copied string.
 * @src: Source of copied string.
 * @n: amount of bytes from src.
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	for (; count < n; count++)
		dest[count] = '\0';
	return (dest);
}
