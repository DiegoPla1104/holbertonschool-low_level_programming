#include "lists.h"

/**
 *delete_dnodeint_at_index- Deletes the indicated node
 *@head: Start of the list
 *@index: Node to be erased
 *Return: 1 If success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (!node)
			return (-1);
		node = node->next;
	}

	if (node == *head)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
	}

	else
	{
		node->prev->next = node->next;
		if (node->next)
			node->next->prev = node->prev;
	}

	free(node);
	return (1);
}
