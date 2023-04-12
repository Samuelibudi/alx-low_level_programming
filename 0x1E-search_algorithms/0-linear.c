#include "search_algos.h"

/**
 * linear_search - Function that implements linear serach algorithm on array.
 * @array: Pointer to first element of array to search
 * @size: size of array to search
 * @value: Value to search for.
 * Return: Index of first occurence of value in array, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (size == 0)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		return (-1);
	else
		return (i);
}
