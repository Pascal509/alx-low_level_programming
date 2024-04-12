#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Write a function that searches for a value in
 * an array of integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index where the value is located, or -1 if not
 * found or if array is NULL
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
