#include "main.h"

/**
 * main - Program entry point.
 *
 * Program outputs _putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i <= (sizeof(c) / sizeof(int)); i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
