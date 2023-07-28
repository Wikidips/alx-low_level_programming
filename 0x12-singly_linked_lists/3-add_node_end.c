#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Address of the new node to be added, or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
	} else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
	}

	return (newnode);
}
