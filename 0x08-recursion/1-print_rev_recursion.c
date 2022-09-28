#include "main.h"

/**
 * _print_rev_recursion - function prints string in reverse.
 * @s: Pointer to string to print.
 * Returns: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
