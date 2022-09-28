#include "main.h"

/**
 * _strlen_recursion - function returns lenth of a string.
 * @s: Pointer to string to print.
 * Return: integer length of a string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
