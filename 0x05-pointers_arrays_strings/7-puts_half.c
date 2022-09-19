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
	int i = 0, m;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 1)
		m = i / 2;
	else
		m = (i - 1) / 2;
	for (m = m + 1; m < i; m++)
		_putchar(str[m]);
	_putchar('\n');
}
