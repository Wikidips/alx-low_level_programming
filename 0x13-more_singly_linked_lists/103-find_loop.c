#include "lists.h"

/**
 * find_listint_loop - look for the loop in a linked list
 * @head: pointer that point to the linked list
 *
 * Return: node adress, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *smart = head;
	listint_t *dump = head;


	if (head == NULL)
		return (NULL);

	while (smart && dump && dump->next)
	{
		dump = dump->next->next;
		smart = smart->next;
		if (dump == smart)
		{
			smart = head;
			while (smart != dump)
			{
				smart = smart->next;
				dump = dump->next;
			}
			return (dump);
		}
	}

	return (NULL);
}

