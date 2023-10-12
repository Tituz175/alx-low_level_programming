#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search -> this function searches for a value in an array
 * of integers using the Juump search algorithm
 * @array: this is the given array
 * @size: this is the size of the given array
 * @value: this is the search value
 * Return: the index of the value in the array if found else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, end;

	start = 0;
	end = 0;

	if (array == NULL)
		return (-1);

	while (array[end] < value && end <= size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (; start <= end && start < size; start++)
	{
		printf("Value checked array[%li] = [%i]\n", start, array[start]);
		if (value == array[start])
			return (start);
	}
	return (-1);
}
