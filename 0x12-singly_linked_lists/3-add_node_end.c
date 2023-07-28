#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to add in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (str[new_node->len])
		new_node->len++;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	list_t *temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

