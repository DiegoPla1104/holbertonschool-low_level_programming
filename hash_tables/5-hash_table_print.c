#include "hash_tables.h"

/**
 *hash_table_print - Prints a hash table
 *@ht: Hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	unsigned int b;
	hash_node_t *temp;

	a = 0;
	b = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (a < ht->size)
	{
		temp = ht->array[a];

		while (temp)
		{
			if (b == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			b = 1;
			temp = temp->next;
		}
		a++;
	}
	printf("}\n");
}
