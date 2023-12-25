#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the doubly-linked list.
 * @n: The integer to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if it fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *lastNode = *head;

	if (*head == NULL)
	{
		if (newNode == NULL)
		{
			return (NULL);
		}

		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;

		*head = newNode;
	}
	else
	{
		if (newNode == NULL)
		{
			return (NULL);
		}

		newNode->n = n;
		newNode->next = NULL;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (newNode);
}
