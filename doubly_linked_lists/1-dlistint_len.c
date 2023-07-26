#include "lists.h"

/**
 *dlistint_len - Counts the number of elements in a list
 *@h: Head of the list
 *Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;

	while (temp && temp->prev)
	{
		temp = temp->prev;
	}

	for (count = 0; temp; count++, temp = temp->next)
		;

	return (count);
}
