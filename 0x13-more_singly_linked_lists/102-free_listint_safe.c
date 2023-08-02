#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		tmp = (*h)->next;
		diff = *h - tmp;
		if (diff > 0)
		{
			free(*h);
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			break;
		}
	}

	*h = NULL;

	return (length);
}

