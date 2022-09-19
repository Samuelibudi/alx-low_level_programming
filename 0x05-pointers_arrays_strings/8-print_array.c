#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of array.
 * @a: input array.
 * @n: Number of elements to print.
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
