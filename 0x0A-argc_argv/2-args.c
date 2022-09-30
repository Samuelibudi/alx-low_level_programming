#include <stdio.h>

/**
 * main - function prints all arguments received from the command line.
 * @argc: number of commandline arguments.
 * @argv: array that contains the command line arguments passed.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
