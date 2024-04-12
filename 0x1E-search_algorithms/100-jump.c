#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
int jump_search (int *array, size_t size, int value);
/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Always EXIT_SUCCESS
 */

int jump_search (int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t jump;
	jump = sqrt(size);

	size_t prev;
	size_t i;
	size_t current;
	current = jump;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (current < size && array[current] < value)
	{
		prev = current;
		current += jump;
		printf("Value checked arrays[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current);

	for (i = prev; i <= current && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return (-1);
}
