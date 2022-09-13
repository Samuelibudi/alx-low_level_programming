#include "main.h"

/**
 * print_times_table - print n times table.
 * 
 * @n: Parameter whose times table is to be printed.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int m, c, pdt;

if (n >= 0 && n <= 15)
{
	for (m = 0; m < n; m++)
	{
		_putchar(48);
		for (c = 1; c < n; c++)
		{
			pdt = c * m;
			_putchar(44);
			_putchar(32);
			if (pdt < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(pdt + 48);
			}
			else if (pdt <= 99)
			{
				_putchar(32);
				_putchar((pdt / 10) + 48);
				_putchar((pdt % 10) + 48);
			}
			else
			{
				_putchar(((pdt / 100) % 10) + 48);
				_putchar(((pdt / 10) % 10) + 48);
				_putchar((pdt % 10) + 48);
			}
		}
		_putchar('\n');
	}
}


