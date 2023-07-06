#include "main.h"

/**
 * is_prime_number - fuction that check if the number is a prime.
 *
 * @n: the number
 *
 * Return: return 0 if n < 2.
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_number(n, 2));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

