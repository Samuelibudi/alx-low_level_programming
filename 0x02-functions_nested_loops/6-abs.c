#include "main.h"

/**
 * _abs - Computes the absolute value.
 *
 * @n: Integer whose absolute value is to be returned.
 *
 * Return: returns absolute value.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
