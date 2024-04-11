#include <stdio.h>
#include "search_algos.h"

/* Write a function that searches for a value in an array
 * of integers using the Linear search algorithm */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return -1;
}
