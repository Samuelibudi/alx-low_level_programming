#include "main.h"

/**
 * print_last_digit - Prints last digit of a number.
 *
 * @n: Number whose last digit is printed.
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	if  (n >= 0)
		return (n % 10);
	else
		return (n % -10);
}
