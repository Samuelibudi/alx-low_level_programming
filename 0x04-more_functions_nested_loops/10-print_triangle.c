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
	int i, j, count;

	for (i = 1; i == size; i++)
	{
		j = size - i
		for (count = 0; count < size; count++)
		{
			while (j > 0)
			{
				_putchar(32);
				j--;
			}
			_putchar(35);
		}
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
