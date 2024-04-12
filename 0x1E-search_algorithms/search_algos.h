#include <stdio.h>
#include <stdlib.h>

#ifndef SEARCH_ALGOS_
#define SEARCH_ALGOS_

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);

/* listint_t *jump_list(listint_t *list, size_t size, int value); */

/* skiplist_t *linear_skip(skiplist_t *list, int value); */

#endif
