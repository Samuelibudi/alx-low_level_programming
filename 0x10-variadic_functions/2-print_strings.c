#include "variadic_functions.h"

/**
 * print_strings - function prints strings.
 * @separator: String to be printed between the strings.
 * @n: number of strings passed.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *c;

	i = 0;

	while (i < n)
	{
		c = va_arg(lst, char *);

		if (c)
			printf("%s", c);
		else
			printf("(nil)");

		if (i < n)
			if (separator)
				printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(lst);
}
