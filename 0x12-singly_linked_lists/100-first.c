#include "lists.h"

/**
 * before_main - Function that prints a message.
 * function to be executed.
 * Return: Void
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
