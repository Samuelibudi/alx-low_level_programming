#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two.
 * @a:input pointer.
 * @size:size of matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, m1 = 0, m2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			m1 = m1 + *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			m2 = m2 + *(a + i);
	}
	printf("%d, %d\n", m1, m2);
}
