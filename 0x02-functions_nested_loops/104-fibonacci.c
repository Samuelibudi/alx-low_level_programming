#include <stdio.h>

/**
 * main - Prints fibonnaci sequence to 50.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, boolean1, boolean2;
	long int m1, m2, n, n2, n3, n4;

	m1 = 1;
	m2 = 2;
	boolean1 = boolean2 = 1;
	printf("%ld, %ld", m1, m2);
	for (i = 0; i < 96; i++)
	{
		if (boolean1)
		{
			n = m1 + m2;
			printf(", %ld", n);
			m1 = m2;
			m2 = n;
		}
		else
		{
			if (boolean2)
			{
				n3 = m1 % 1000000000;
				n4 = m2 % 1000000000;
				m1 = m1 / 1000000000;
				m2 = m2 / 1000000000;
				boolean2 = 0;
			}
			n2 = (n3 + n4);
			n = m1 + m2 + (n2 / 1000000000);
			printf(", %ld", n);
			printf("%ld", n2 % 1000000000);
			m1 = m2;
			n3 = n4;
			m2 = n;
			n4 = (n2 % 1000000000);
		}
		if (((m1 + m2) < 0) && boolean1 == 1)
			boolean1 = 0;
	}
	printf("\n");
	return (0);
}
