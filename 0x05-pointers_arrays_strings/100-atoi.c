#include "main.h"

/**
 * _atoi - function converts string to integer.
 * @s: string to convert.
 * Return: returns integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, p = 0, n = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			n *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		p = p + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (p * n);
}
