#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: the index of the bit.
 * @n: bit
 *
 * Return: The value of the bit at the given index (0 or 1),
 * or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
