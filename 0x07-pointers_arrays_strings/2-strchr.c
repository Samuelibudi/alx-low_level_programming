#include "main.h"

/**
 * _strchr - Function to locate charater in a string.
 * @s: Pointer to string to be searched.
 * @c: Character to search for.
 * Return: Pointer to first occurence of character.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
