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
	int c[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int i, sz;

	sz = sizeof(c) / sizeof(int);
	for (i = 0; i < sz; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
