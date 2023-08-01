#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: Pointer to the head of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t d = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		d++;
		h = h->next;
	}

	return (d);
}

