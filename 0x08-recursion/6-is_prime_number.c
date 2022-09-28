#include "main.h"

/**
 * prime_check - checks if number is prime number.
 * @i: Number to check.
 * @j: factor to check.
 * Return: 1 if prime, 0 otherwise.
 */

int prime_check(int i, int j)
{
	if (i < 2 || i % j == 0)
		return (0);
	else if (j > i / 2)
		return (1);
	else
		return (prime_check(i, j + 1));
}
/**
 * is_prime_number - function to check for prime number.
 * @n: Number to check.
 * Return: 1 if n in prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_check(n, 2));
}
