#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		(*head)->next = newNode;
	}

	*head = newNode;
	return newNode;
}
