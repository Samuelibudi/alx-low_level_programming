#include <stdio.h>

/**
 * main - ints sum of even valued numbers in fibonnaci sequence.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int m1, m2, n, sum_even;

	m1 = 1;
	m2 = 2;
	sum_even = n = 0;
	while (n <= 4000000)
	{
		n = m1 + m2;
		m1 = m2;
		m2 = n;
		if ((m1 % 2) == 0)
		{
			sum_even = sum_even + m1;
		}
	}
	printf("%ld\n", sum_even);
	return (0);
}
