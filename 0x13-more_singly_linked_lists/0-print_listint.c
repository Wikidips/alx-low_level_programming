#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Q = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Q++;
		h = h->next;
	}

	return (Q);
}

