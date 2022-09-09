#include<stdio.h>

/**
 * main - Program entry point
 *
 * Program prints between 012 to 789.
 *
 * Return: Always 0
 */
int main(void)
{
	int m, n, g;

	m = 48;
	n = 48;
	g = 48;

	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (n != m && n != g && m != g && n < m && m < g)
				{
					putchar(n);
					putchar(m);
					putchar(g);
					if (m == 56 && n == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			m++;
		}
		n++;
	}

	putchar('\n');
	return (0);
}
