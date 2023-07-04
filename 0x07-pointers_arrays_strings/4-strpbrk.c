#include "main.h"
/**
 * _strpbrk - Entry point
 * @s:my first  input
 * @accept: my second  input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
		int l;

		while (*s)
		{
			for (l = 0; accept[l]; l++)
			{
			if (*s == accept[l])
			return (s);
			}
		s++;
		}

	return ('\0');
}

