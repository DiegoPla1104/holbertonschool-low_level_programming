#include "hash_tables.h"

/**
 *hash_table_delete - Deletes a hash table
 *@ht: Hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int loop;

	loop = 0;

	if (ht == NULL)
		return;

	while (loop < ht->size)
	{

		while (ht->array[loop] != NULL)
		{
			node = ht->array[loop];
			free(node->key);
			free(node->value);
			ht->array[loop] = ht->array[loop]->next;
			free(node);
		}
		loop++;
	}
	free(ht->array);
	free(ht);
}
