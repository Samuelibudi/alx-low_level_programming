#include "main.h"

/**
 * factorial - function to calculate factorial.
 * @n: Number to calculate the factorial.
 * Return: integer factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
