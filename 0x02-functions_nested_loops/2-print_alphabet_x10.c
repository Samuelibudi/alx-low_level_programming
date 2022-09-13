#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case.
 * 
 * Displays it 10 times.
 *
 * Return:Always 0
 */

void print_alphabet(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);

	_putchar('\n');
	}
}
