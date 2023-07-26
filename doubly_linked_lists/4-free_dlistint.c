#include "lists.h"

/**
 *free_dlistint - Frees the list
 *@head: Head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
