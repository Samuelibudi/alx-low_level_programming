#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds numbers.
 * @argc: number of commandline arguments.
 * @argv: array that contains the command line arguments passed.
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
