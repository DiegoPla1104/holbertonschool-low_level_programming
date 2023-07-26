#include "lists.h"

/**
 *add_dnodeint_end - Adds a node at the end of a list
 *@head: Start of the list
 *@n: Data to put into the new node
 *Return: New
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	temp = *head;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = *head;
		*head = new;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (*head);
}
