#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings separated by a string.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);

		if (value != NULL)
		{
			printf("%s", value);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	putchar('\n');
}

