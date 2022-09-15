#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, count;

for (count = 0; count < 10; count++)
{
	for (i = 0; i < 15; i++)
	{
		if (i >= 10)
			_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
	}
	_putchar('\n');
}
}
