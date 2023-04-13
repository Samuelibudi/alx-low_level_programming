#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                     using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int left, right, mid, i;
	size_t bound;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound >= size) ? (size - 1) : bound;
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	while (left <= right)
	{
	mid = (left + right) / 2;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%d%s", array[i], (i < right) ? ", " : "\n");

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}

	return (-1);
}

