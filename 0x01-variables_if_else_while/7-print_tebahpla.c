#include<stdio.h>
#include<stdlib.h>

/**
 * main - Program entry point
 *
 * Program prints alphabet in lower case and reverse.
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
