#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element for
 * which cmp function does not return 0.
 * @array: pointer to array of integers.
 * @size: size of array.
 * @cmp: pointer to function.
 * Return: returns integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);
	if (array && size)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
			else
				return (-1);
		}
}

