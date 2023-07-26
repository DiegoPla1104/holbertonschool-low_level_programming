#include "lists.h"

/**
 *insert_dnodeint_at_index - Creates a node in the space where it's indicated
 *@h: Start of the list
 *@idx: Place to incert the new node
 *@n: Data to put into the new node
 *Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node = *h;
	unsigned int a = 1;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			node->prev = new;
		*h = new;
		new->prev = NULL;
		new->next = node;
		return (new);
	}
	for (a = 1; a < idx; a++)
	{
		node = node->next;
		if (node == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = node;
	new->next = node->next;
	if (node->next)
		node->next->prev = new;
	node->next = new;
	return (new);
}
