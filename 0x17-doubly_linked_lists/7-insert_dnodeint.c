#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list.
 * @h: A pointer to a pointer to the head of the
 * doubly linked list (dlistint_t).
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The data (n) to be stored in the new node.
 *
 * Return: The address of the new node if successful, or NULL if it failed.
 *         If it's not possible to add the new node at index idx, returns NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *temp = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	for (i = 0; (i < idx - 1) && (temp->next != NULL); i++)
		temp = temp->next;
	if (idx - 1 > i)
		return (NULL);
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	temp = new->next;
	temp->prev = new;

	return (new);
}
