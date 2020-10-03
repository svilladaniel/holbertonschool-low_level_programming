#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: Hash node
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *a = NULL, *last = NULL;

	if (!ht)
		return;
	if (ht->size == 0 || !(ht->array))
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size ; i++)
	{
		a = ht->array[i];
		while (a)
		{
			last = a;
			a = a->next;
			free(last->key);
			free(last->value);
			free(last);
		}
	}
	free(ht->array);
	free(ht);
}
