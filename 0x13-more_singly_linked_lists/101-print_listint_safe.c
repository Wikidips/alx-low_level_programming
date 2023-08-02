#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	const listint_t *current, *tmp;

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		c++;
		tmp = current;
		current = current->next;

		if (tmp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (c);
}

