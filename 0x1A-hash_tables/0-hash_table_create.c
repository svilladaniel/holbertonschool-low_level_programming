#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: Size of the hash table
 * Return: Null if alloc couldnt be or hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array_h = NULL;

	if (size == 0)
		return (NULL);
	array_h = malloc(sizeof(hash_table_t));
	if (!array_h)
		return (NULL);
	array_h->size = size;
	array_h->array = calloc(size, sizeof(hash_node_t *));
	if (!(array_h->array))
	{
		free(array_h);
		return (NULL);
	}
	return (array_h);
}
