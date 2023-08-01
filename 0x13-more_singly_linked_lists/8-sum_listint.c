#include "lists.h"

/**
 * sum_listint - Returns the sum of n in listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The sum of n or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

