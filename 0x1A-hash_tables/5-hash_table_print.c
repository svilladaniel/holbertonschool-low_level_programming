#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash node
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *a = NULL;
	int j = 0;

	if (!ht)
		return;
	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		a = ht->array[index];
		while (a)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", a->key, a->value);
			j = 1;
			a = a->next;
		}
	}
	printf("}\n");
}
