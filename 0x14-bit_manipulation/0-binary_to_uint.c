#include "main.h"

/**
 * binary_to_uint - Write a function that converts a binary to int.
 * @b: char to be printed
 *
 * Return: c SUCCESS the final char
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int c;
	int len, secondbase;

	c = 0;
	len = 0;
	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;
	for (len--, secondbase = 1; len >= 0; len--, secondbase *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			c += secondbase;
	}
	return (c);
}
