#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: First index where value is located, or -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
