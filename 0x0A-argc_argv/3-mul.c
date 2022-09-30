#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two numbers.
 * @argc: number of commandline arguments.
 * @argv: array that contains the command line arguments passed.
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
