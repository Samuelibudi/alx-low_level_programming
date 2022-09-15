#include <stdio.h>

/**
 * main - prints largest prime factor.
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, fac;

	i = 612852475143;
	for (fac = 2; fac <= i; fac++)
	{
		if (i % fac == 0)
		{
			i /= fac;
			fac--;
		}
	}
	printf("%ld\n", fac);
	return (0);
}
