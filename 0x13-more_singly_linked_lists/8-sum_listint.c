#include "lists.h"

/**
 * sum_listint - Returns the sum of all
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of n (all data)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
