#include "lists.h"

/**
 *get_dnodeint_at_index - Looks for n node
 *@head: Start of the list
 *@index: Node to be searched
 *Return: The adreess of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (0);

	while (index)
	{
		head = head->next;
		if (!head)
			return (0);
		index--;
	}

	return (head);
}
