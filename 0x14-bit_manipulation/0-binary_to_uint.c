#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to str of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if it failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		output = (output << 1) | (*b - '0');
	}

	return (output);
}
