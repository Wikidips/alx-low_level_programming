#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * 
 * @array: Array to execute func on.
 * @size: Size of the array.
 * @action: Pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        for (size_t i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

