#include<main.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Pointer to the binary number to modify.
 * @index: The index.
 *
 * Return: 1 if successful, -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	unsigned long int mask = 1 << index;
	*n = (*n | mask);

	return (1);#include<main.h>

}
