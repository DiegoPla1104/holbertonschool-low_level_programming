#include "lists.h"
#include <stdio.h>
/**
 *print_list - Prints all the elements of a list_t list
 *@h: Is the head of the list.
 *
 *Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int nc = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			nc++;
		}
		else
		{
			printf("[0] (nil)\n");
			nc++;
			temp = temp->next;
		}
	}
	return (nc);
}
