#include "hash_tables.h"

/**
 *hash_table_create - crea una hash table
 *@size: tamano e array
 *Return: Devuelve un puntero a la hash table o de lo contrario devuelve NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int loop;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	hash->size = size;
	for (loop = 0; loop < size; loop++)
		hash->array[loop] = NULL;
	return (hash);
}
