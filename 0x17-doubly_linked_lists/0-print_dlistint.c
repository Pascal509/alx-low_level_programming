#include <stdio.h>
#include <stddef.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count = 0;
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
