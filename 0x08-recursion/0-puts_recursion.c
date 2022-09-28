#include "main.h"

/**
 * _puts_recursion - function prints string.
 * @s: Pointer to string to print.
 * Returns: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	putchar('\n');
}
