#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !*head)
		return (-1);

	listint_t *current_node = *head;

	listint_t *previous_node = NULL;
	unsigned int position = 0;

	while (current_node)
	{
		if (position == index)
		{
			if (previous_node)
				previous_node->next = current_node->next;
			else
				*head = current_node->next;
			free(current_node);
			return (1);
		}

		previous_node = current_node;
		current_node = current_node->next;
		position++;
	}

	return (-1);
}

