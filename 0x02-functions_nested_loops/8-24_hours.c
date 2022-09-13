#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Returns: Always 0
 */
void jack_bauer(void)
{
	int i, e, m, s;

	for (i = 48; i < 51; i++)
		for (e = 48; e < 58; e++)
			for (m = 48; m < 54; m++)
				for (s = 48; s < 58; s++)
				{
					_putchar(i);
					_putchar(e);
					_putchar(':');
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
}
