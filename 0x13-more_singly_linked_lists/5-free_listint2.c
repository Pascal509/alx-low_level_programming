#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *curr;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
}
