#include "lists.h"
#include <stdio.h>
/**
 *list_len - Prints all the elements of a list_t list
 *@h: Is the head of the list.
 *
 *Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int nc = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str != NULL)
		{
			temp = temp->next;
			nc++;
		}
		else
		{
			nc++;
			temp = temp->next;
		}
	}
	return (nc);
}
