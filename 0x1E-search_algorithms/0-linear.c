#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search -> this function searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: this is the given array
 * @size: this is the size of the given array
 * @value: this is the search value
 * Return: the index of the value in the array if found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, *(array + count));
		if (*(array + count) == value)
			return (count);
	}

	return (-1);
}
