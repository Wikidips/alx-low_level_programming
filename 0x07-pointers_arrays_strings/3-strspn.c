#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: the first input 
 *@accept: the second input 
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accep)
{
	int n, m;

	for (n = 0; *(s + n); n++)
	{
		for (m = 0; *(accept + m); m++)
		{
			if (*(s + n) == *(accept + m))
			{
				break;
			}
		}
		if (*(accept + m) == '\0')
		{
			break;
		}

	}
	return (n);
}	
