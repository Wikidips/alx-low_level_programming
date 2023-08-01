#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: The value of n if it sucseed or 0 of it the list is empty.
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (head && *head)
	{
		n = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (n);
}

