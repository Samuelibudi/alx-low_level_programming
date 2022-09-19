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
		if (s[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
		for (i = i + 1; i != '\0'; i++)
			_putchar(s[i]);
	}
	else if (i % 2 != 0)
	{
		i = (i - 1) / 2;
		for (i = i + 2; i != '\0'; i++)
			_putchar(s[i]);
	}
	_putchar('\n');
}
