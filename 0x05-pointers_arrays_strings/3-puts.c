#include "main.h"

/**
 * _puts - function to a string followed by a new line.
 *
 * @str: Pointer to string.
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
