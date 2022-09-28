#include "main.h"
/**
 * sqrt_guess - guesses sqrt.
 * @i: guess starts at 1.
 * @j: Number to find sqrt.
 * Return: integer.
 */
int sqrt_guess(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqrt_guess(i + 1, j));
}
/**
 * _sqrt_recursion - function to calculate natural square root of a number.
 * @n: Number to calculate natural square root.
 * Return: integer natural square root. -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < -1)
		return (-1);
	else
		return (sqrt_guess(1, n));
}
