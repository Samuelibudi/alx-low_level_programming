#include <stdio.h>

/**
 * main - function prints number of arguments passed into program.
 * @argc: number of commandline arguments.
 * @argv: array that contains the command line arguments passed.
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
