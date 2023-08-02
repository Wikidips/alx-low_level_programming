#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * in the linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int c = 0;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (c == index - 1)
		{
			tmp = current->next;
			if (tmp == NULL)
				return (-1);
			current->next = tmp->next;
			free(tmp);
			return (1);
		}
		current = current->next;
		c++;
	}
	return (-1);
}
