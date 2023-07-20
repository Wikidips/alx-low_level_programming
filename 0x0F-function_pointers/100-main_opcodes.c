#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the magical program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]);
{
	char *opcodes;
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", opcodes[i]);

		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}

