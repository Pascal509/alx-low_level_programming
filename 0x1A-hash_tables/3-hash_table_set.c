#include "hash_tables.h"

hash_node_t *set_pair(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	printf("set_pair created\n");
	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (0);
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
		return (0);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	if (strcmp(new_node->key, key) == 0)
		printf("set_pair succeeded\n");
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];
	if (new_node == NULL)
	{
		printf("calling set_pair before while loop\n");
		new_node = set_pair(key, value);
		new_node->next = NULL;
		ht->array[index] = new_node;
		if (strcmp(ht->array[index]->key, key) == 0)
			printf("Key and value assigned\n");
		return (1);
	}
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			if (strcmp(new_node->value, value) == 0)
				return (1);
			free(new_node->value);
			new_node->value = malloc(strlen(value) + 1);
			if (new_node->value == NULL)
				return (0);
			strcpy(new_node->value, value);
			return (1);
		}
		new_node = new_node->next;
	}
	if (new_node == NULL)
	{
		new_node = set_pair(key, value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
