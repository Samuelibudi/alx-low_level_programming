#include "main.h"

/**
 * print_number - prints an integer.
 * @n: Parameter to print.
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int i, e, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	e = i;
	count = 1;

	while (e > 9)
	{
		e /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
