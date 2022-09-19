#include "main.h"

/**
 * puts_half - function to print half a string.
 *
 * @str: Pointer to string.
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 1)
		i = i / 2;
	else
		i = (i - 1) / 2;
	for (i = i + 1; i != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
