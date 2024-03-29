#include "lists.h"

/**
 *print_dlistint - Prints all the elements of a list
 *@h: Head of the list
 *Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *i;
	size_t j = 0;

	for (i = h; i != NULL; i = i->next)
	{
		printf("%d\n", i->n);
		j++;
	}
	return (j);
}
