#include <stdio.h>

/**
 * main - Prints fibonnaci sequence to 50.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int m1, m2, n;

	m1 = 1;
	m2 = 2;
	printf("%ld, %ld", m1, m2);
	for (i = 0; i < 48; i++)
	{
		n = m1 + m2;
		printf(", %ld", n);
		m1 = m2;
		m2 = n;
	}
	printf("\n");
	return (0);
}
