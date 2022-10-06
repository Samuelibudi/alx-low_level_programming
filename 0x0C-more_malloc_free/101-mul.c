#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * is_zero - checks if any argument is zero.
 * @argv: arguments.
 * Return: nothing
 */
void is_zero(char *argv[])
{
	int i, check_1 = 1, check_2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			check_1 = 0;
			break;
		}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			check_2 = 0;
			break;
		}

	if (check_1 == 1 || check_2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * initialize_array - set memory to zero.
 * @ar: array
 * @lar: length of array.
 * Return: pointer to character
 */
char *initialize_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * checknum - determines length of the number.
 * @argv: args vector
 * @m: row of array.
 * Return: length of number.
 */
int checknum(char *argv[], int m)
{
	int ln;

		for (ln = 0; argv[m][ln]; ln++)
			if (!isdigit(argv[m][ln]))
			{
				printf("Error\n");
				exit(98);
			}
	return (ln);
}

/**
 * main - Program entry point.
 * @argc: number of arguments
 * @argv: args vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = checknum(argv, 1), ln2 = checknum(argv, 2);
	is_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = initialize_array(nout, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = initialize_array(nout, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
