#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - Adds a node at the start of the list.
 *@head: Is the head of the list.
 *@str: Is a string.
 *
 *Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = *head;
		*head = node;
	}
	return (node);
}
