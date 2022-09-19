#include "main.h"

/**
 * print_rev - function to print string in reverse.
 *
 * @s: Pointer to string.
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = 0;

	i = _strlen(s);

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
