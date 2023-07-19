#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new line
 * @array: array
 * @size: elements to print
 * @action: pointer to print.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
