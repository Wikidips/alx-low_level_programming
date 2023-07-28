#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns all elements in a linked list
 * @h: pointer to the list_t list
 * Return: num of elements in pinter h
 *
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)

	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}

