#include "main.h"
#include <stdlib.h>

/**
 * argtostr - function concatenates all the arguments of a program.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 * Return: pointer to array of char.
 */
char *argtostr(int ac, char **av)
{
	char *m;
	int c, i, j, n;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	m = malloc((c + 1) * sizeof(char));

	if (m == NULL)
	{
		free(m);
		return (NULL);
	}

	for (i = j = n = 0; n < c; j++, n++)
	{
		if (av[i][j] == '\0')
		{
			m[n] = '\n';
			i++;
			n++;
			j = 0;
		}
		if (n < c - 1)
			m[n] = av[i][j];
	}
	m[n] = '\0';

	return (m);
}
