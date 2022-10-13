#include "variadic_functions.h"

/**
 * sum_them_all - Calculate sum of all inputs.
 * @n: Number of arguments.
 * Return: sum of inputs.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(lst, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(lst, int);

	va_end(lst);

	return (sum);
}
