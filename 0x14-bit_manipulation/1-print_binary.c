#include "main.h"

/**
 * print_binary - prints the binary of a decimal number.
 * @n: num to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int temp;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;

		if (temp & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (c == NULL)
		_putchar('0');
}
