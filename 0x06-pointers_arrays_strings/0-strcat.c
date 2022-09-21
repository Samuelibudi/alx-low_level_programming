#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to destination.
 * @src: pointer to source.
 * Return: pointer to destination.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			*(dest + i) = *(src + j);
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
