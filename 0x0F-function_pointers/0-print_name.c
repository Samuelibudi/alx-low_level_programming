#include "function_pointers.h"

/**
 * print_name - function to print a name.
 * @name: Pointer to name to print.
 * @f: Pointer to function.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
