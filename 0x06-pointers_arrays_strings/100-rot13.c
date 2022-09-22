#include "main.h"

/**
 * rot13 - function to encode a string using rot13.
 * @s: input string.
 * Return: pointer to result.
 */
char *rot13(char *s)
{
	int i = 0, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
