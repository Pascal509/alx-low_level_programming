#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: memory allocation failed\n");
		return (NULL);
	}

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
	{
		fprintf(stderr, "Error: memory allocation failed\n");
		return (NULL);
	}

	for (; i < size; i++)
		ptr->array[i] = NULL;

	return (ptr);
}
