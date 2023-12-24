#include "hash_tables.h"

/**
 * hash_table_print - prints key-value pairs in hash table array order.
 * @ht: the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *new_node;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new_node = ht->array[i];
			while (new_node != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				count++;
			}
		}
	}
	printf("}\n");
}
