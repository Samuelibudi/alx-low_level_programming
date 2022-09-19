#include "main.h"

/**
 * swap_int - function to swap two variables.
 *
 * @a: Parameter to swap.
 * @b: Parameter to swap.
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;

	*b = n;
}
