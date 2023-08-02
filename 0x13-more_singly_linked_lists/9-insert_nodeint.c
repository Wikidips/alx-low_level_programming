#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a certain position.
 * @head: Pointer to the head of the list
 * @idx: Index of the list where the new node must be stored
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (!head)
		return (NULL);

	listint_t *NEW_node = malloc(sizeof(listint_t));

	if (!NEW_node)
		return (NULL);

	NEW_node->n = n;
	NEW_node->next = NULL;

	if (idx == 0)
	{
		NEW_node->next = *head;
		*head = NEW_node;
		return (NEW_node);
	}

	listint_t *current = *head;
	unsigned int d = 0;

	while (current)
	{
		if (d == idx - 1)
		{
			NEW_node->next = current->next;
			current->next = NEW_node;
			return (NEW_node);
		}
		current = current->next;
		d++;
	}

	free(NEW_node);
	return (NULL);
}

