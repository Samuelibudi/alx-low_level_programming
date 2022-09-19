#include "main.h"

/**
 * rev_string - function to print string in reverse.
 *
 * @s: Pointer to string.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0, m, n;
	char *str, tmp;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	str = s;

	for (m = 0; m < (i - 1); m++)
	{
		for (n = m + 1; n > 0; n--)
		{
			tmp = *(str + n);
			*(str + n) = *(str + (n - 1));
			*(str + (n - 1)) = tmp;
		}
	}
}
