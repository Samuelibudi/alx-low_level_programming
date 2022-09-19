#include "main.h"

/**
 * puts2 - function to every other charater of string followed by a new line.
 *
 * @str: Pointer to string.
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
