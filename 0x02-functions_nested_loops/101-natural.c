#include <stdio.h>

/**
 * main - Prints natural numbers that are
 *
 * multiples of 3or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int m, n;

	for (m = 1; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
			n = n + m;
	}
	printf("%d\n", n);
	return (0);
}
