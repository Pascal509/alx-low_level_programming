#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the doubly-linked list.
 * @n: The integer to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if it fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t*)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return NULL;
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;
	return newNode;
}
