#include "main.h"

/**
 * print_line - prints a line on the terminal
 *
 * @n: Parameter to determine length of line.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
int i;

if (n > 0)
{
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
else
	_putchar('\n');
}
