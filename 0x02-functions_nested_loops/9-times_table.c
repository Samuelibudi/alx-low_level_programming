#include "main.h"

/**
 * times_table - print 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int m, n, pdt, op;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			pdt = n * m;
			if (pdt < 10)
			{
				pdt = pdt + 48;

				_putchar(pdt);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((pdt / 10) + 48);
				_putchar((pdt % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

