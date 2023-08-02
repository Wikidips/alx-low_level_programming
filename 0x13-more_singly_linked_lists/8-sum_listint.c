#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data or 0 if the list doesn't exist.
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

