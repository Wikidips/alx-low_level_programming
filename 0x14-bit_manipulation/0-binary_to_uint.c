#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] == '1')
		{
			result |= (1 << (len));
		}
	}

	return (result);
}
