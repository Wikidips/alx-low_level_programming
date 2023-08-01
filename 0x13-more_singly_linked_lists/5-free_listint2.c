#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *NODE;

	while (*head != NULL)
	{
		NODE = *head;
		*head = (*head)->next;
		free(NODE);
	}
}

