#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size, in number of nodes, to make the new hash table.
 *
 * Return: a pointer (*ht) to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		fprintf(stderr, "Error: memory allocation failed\n");
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		fprintf(stderr, "Error: memory allocation failed\n");
		return (NULL);
	}

	for (; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
