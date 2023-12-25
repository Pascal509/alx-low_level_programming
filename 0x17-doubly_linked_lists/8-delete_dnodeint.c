#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: the head of a double-linked structure dlistint_t
 * @index: the index of the list where to delete the node
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node1, *node0;

	if (head == NULL || *head == NULL)
		return (-1);
	node0 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		for (i = 0; (i < index) && (node0->next != NULL); i++)
			node0 = node0->next;

		if (index > i)
			return (-1);

		node1 = node0->prev;
		node1->next = node0->next;
		
		if (node0->next != NULL)
			node0->next->prev = node1;
	}

	free(node0);

	return (1);
}
