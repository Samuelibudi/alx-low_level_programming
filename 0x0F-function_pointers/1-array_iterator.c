#include "function_pointers.h"

/**
 * array_iterator - A function given that executes a function
 * given as a parametr on each element of an array.
 * @array: pointer to array.
 * @action: pointer to function.
 * @size: Size of array.
 * Retunr : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
