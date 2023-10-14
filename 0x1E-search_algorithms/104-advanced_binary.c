#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary -> this function searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: this is the given array
 * @size: this is the size of the given array
 * @value: this is the search value
 * Return: the index of the value in the array if found else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_fuc(array, 0, size - 1, value));
}

/**
 * binary_search_fuc -> this function searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: this is the given array
 * @low: the lowest index of the array
 * @high: the highest index of the array
 * @value: this is the search value
 * Return: the index of the value in the array if found else -1
 */

int binary_search_fuc(int *array, int low, int high, int value)
{
	int i, mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (array[low] == value)
		return (low);

	if (array[low] != array[high])
	{
		if (array[mid] >= value)
			return (binary_search_fuc(array, low, mid, value));
		if (array[mid] < value)
			return (binary_search_fuc(array, mid + 1, high, value));
	}
	return (-1);
}
