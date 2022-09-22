#include "main.h"
/**
 * infinite_add - function adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: buffer to store results
 * @size_r: buffer size.
 * Return: pointer to result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int m1 = 0, m2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + m1) != '\0')
		m1++;
	while (*(n2 + m2) != '\0')
		m2++;
	if (m1 >= m2)
		bg = m1;
	else
		bg = m2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	m1--, m2--, size_r--;
	dr1 = *(n1 + m1) - 48, dr2 = *(n2 + m2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (m1 > 0)
			m1--, dr1 = *(n1 + m1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			m2--, dr2 = *(n2 + m2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
