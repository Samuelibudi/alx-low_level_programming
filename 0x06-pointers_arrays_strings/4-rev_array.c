#include "main.h"

/**
 * reverse_array - function reverses the content of an array.
 * @a: pointer to array.
 * @n: number of elements of array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, count;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			count = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = count;
		}
	}
}
