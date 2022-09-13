#include "main.h"

/**
 * times_table - print 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int m, n, pdt;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			pdt = n * m;
			
			if (pdt < 10)
			{
				_putchar(pdt + 48);
				_putchar(44);
				_putchar(32);
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


