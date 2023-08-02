#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, handling loops.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t d = 0;
	const listint_t *current = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		d++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		current = current->next;
	}

	return (d);
}
