#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: Pointer that point to linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;


	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}

