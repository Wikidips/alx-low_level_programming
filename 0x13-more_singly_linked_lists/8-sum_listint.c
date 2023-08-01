#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node.
 *
 * Return: Pointer to the node or NULL if it's empty.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *node;

	node = head;

	for (k = 0; node && k < index; k++)
		node = node->next;

	return (node);
}

