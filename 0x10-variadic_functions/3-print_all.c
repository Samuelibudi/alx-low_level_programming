#include "variadic_functions.h"

/**
 * print_all - Function prints anything.
 * @format: Types of the arguments
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list lst;
	unsigned int i = 0, j, m = 0;
	char *c;
	const char t_args[] = "cifs";

	va_start(lst, format);
	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j] && m)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lst, int)), m = 1;
				break;
			case 'i':
				printf("%d", va_arg(lst, int)), m = 1;
				break;
			case 'f':
				printf("%f", va_arg(lst, double)), m = 1;
				break;
			case 's':
				c = va_arg(lst, char *), m = 1;
				if (!c)
				{
					printf("(nil)");
					break;
				}
				printf("%s", c);
				break;
		} i++;
	}
	printf("\n"), va_end(lst);
}
