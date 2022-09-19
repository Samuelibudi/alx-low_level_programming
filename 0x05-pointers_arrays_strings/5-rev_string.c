#include "main.h"

/**
 * rev_string - function to print string in reverse.
 *
 * @s: Pointer to string.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
