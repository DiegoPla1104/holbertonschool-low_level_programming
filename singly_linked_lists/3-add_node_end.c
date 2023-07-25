#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - Adds a node at the end of the list.
 *@head: Is the head of the list.
 *@str: Is a string.
 *
 *Return: the number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p = *head;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;
		*head = node;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		node->str = strdup(str);
		node->len = strlen(str);
		p->next = node;
		node->next = NULL;
	}
	return (*head);
}
