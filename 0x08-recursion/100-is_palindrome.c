#include "main.h"
/**
 * _strlen_recursion - functions returns string length.
 * @s: string
 * Return: Integer string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare - compares reverse string with normal one.
 * @s: string to compare.
 * @i: starts from beginning of string.
 * @j: starts from end of string.
 * Return: integer
 */
int compare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + compare(s, i + 1, j - 2));
	}
	return (0);
}
/**
 * is_palindrome - function detects if string is palindrome.
 * @s: Pointer to string.
 * Return: 1 if is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
