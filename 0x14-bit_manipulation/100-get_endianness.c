#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int temp = 1;
	char *endian_ptr = (char *)&temp;

	return (*endian_ptr);
}

