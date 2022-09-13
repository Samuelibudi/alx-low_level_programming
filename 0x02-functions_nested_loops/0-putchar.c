#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Program outputs _putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[8] = "_putchar";

	for (int i = 0; i <= sizeof(c); i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
