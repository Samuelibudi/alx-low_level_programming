#include<stdio.h>

/**
 * main - Program entry point
 *
 * Program prints between 00 to 99.
 *
 * Return: Always 0
 */
int main(void)
{
	int m, n;

	m = 48;
	n = 48;

	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			if (n != m && n <  m)
			{
				putchar(n);
				putchar(m);
				if (m == 57 && n ==56)
				{
					break;
				}
			
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}

	putchar ('\n');
	return (0);
}
