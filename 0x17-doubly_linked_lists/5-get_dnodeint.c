#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specified index
 * in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list (dlistint_t).
 * @index: The index of the node to be retrieved.
 *
 * Return: If the index is valid, returns a pointer to the node
 * at the specified index.
 *         If the index is out of bounds or the list is empty, returns NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
			head = head->next;
	}

	if (i != index)
		return (NULL);

	return (head);
}
