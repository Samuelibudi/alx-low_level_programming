#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 *
 * @size: Parameter to determine triangle size.
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
		{
			_putchar(32);
		}
		for (j--; j < size; j++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
