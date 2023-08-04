#include "hash_tables.h"

/**
 *hash_table_get - Is a function retrieves a value associated with a key.
 *@ht: The hash table.
 *@key: The key to the hash table.
 *Return: NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *seek;

	if (ht == NULL || key == NULL)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);

	if (ht->array[ind] == NULL)
		return (NULL);

	seek = ht->array[ind];

	while (seek)
	{
		if (strcmp(seek->key, key) == 0)
			return (seek->value);
		seek = seek->next;
	}
	return (NULL);
}
