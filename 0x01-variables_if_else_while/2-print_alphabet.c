#include<stdio.h>
#include<stdlib.h>

/**
 * main - Program entry point
 *
 * Program prints alphabet in lower case.
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
