#include "lists.h"

/**
 *sum_dlistint - Sums all the data of the list
 *@head: Star of the list
 *Return: The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int a;

	a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
