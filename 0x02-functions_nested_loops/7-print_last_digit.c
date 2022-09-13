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
	int m;

	m = n % 10;
	if  (m > 0)
	{
		_putchar(m + 48);
		return (m);
	}
	else
	{
		_putchar(-m + 48);
		return (-m);
	}
}
