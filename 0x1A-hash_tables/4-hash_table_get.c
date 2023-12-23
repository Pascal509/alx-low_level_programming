#include "hash_tables.h"

/**
 * hash_table_get - gets any value associated with a key.
 * @ht: pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 *
 * Return: the value associated with the key, or NULL if key can't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	new_node = ht->array[index];
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
			return (new_node->value);
		new_node = new_node->next;
	}
	return (NULL);
}
