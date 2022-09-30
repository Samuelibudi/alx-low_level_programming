#include <stdio.h>

/**
 * main - function prints the program name.
 * @argc: number of commandline arguments.
 * @argv: array that contains the command line arguments passed.
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
