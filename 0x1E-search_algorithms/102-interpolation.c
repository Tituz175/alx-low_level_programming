#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search -> this function searches for a value in an array
 * of integers using the Interpolation search algorithm
 * @array: this is the given array
 * @size: this is the size of the given array
 * @value: this is the search value
 * Return: the index of the value in the array if found else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int pos, low, high;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

	while ((array[low] != array[high]) && (value <= array[high])
	&& (value >= array[low]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	if (array[pos] == value)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		return (low);
	}
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
