#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: binary
 *
 * Return: The unsigned int equivalent of the binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int result = 0;

	for (int i = 0; b[i]; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

