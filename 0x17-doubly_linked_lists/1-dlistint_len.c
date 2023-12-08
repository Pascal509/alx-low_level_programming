#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count = 0;
		h = h->next;
		count++;
	}

	return count;
}
