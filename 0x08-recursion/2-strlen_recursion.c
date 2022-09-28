#include "main.h"

/**
 * _strlen_recursion - function returns lenth of a string.
 * @s: Pointer to string to print.
 * Return: integer length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
