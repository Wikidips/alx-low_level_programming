#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: The starting number.
 * @m: The target number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor_num = 0;
	unsigned long int calc = n ^ m;

	while (calc > 0)
	{
		xor_num += calc & 1;
		calc >>= 1;
	}

	return (xor_num);
}

