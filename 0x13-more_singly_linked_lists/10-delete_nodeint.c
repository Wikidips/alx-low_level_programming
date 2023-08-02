#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !*head)
		return (-1);

	listint_t *current = *head;

	listint_t *prev = NULL;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
		{
			if (prev)
				prev->next = current->next;
			else
				*head = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		i++;
	}

	return (-1);
}

