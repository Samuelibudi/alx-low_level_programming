#include "3-calc.h"

/**
 * op_add - Add two numbers.
 * @a: First number
 * @b: Second number
 * Return: sum 
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers.
 * @a: First number
 * @b: Second number
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: First number
 * @b: Second number
 * Return: Quotient.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - Find the remainder.
 * @a: First number
 * @b: Second number
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}


