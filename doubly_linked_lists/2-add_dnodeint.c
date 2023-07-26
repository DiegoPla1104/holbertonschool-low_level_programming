#include "lists.h"

/**
 *add_dnodeint- Adds a node at the start of the list
 *@head: The list that needs to be edited
 *@n: ???
 *Return: The addres of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;

	i = *head;
	i = malloc(sizeof(dlistint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;

	if (*head)
	(*head)->prev = i;
	i->prev = NULL;
	i->next = *head;
	*head = i;
	return (*head);
}
