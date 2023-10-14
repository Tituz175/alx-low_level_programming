#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search -> this function searches for a value in an array
 * of integers using the Exponential search algorithm
 * @array: this is the given array
 * @size: this is the size of the given array
 * @value: this is the search value
 * Return: the index of the value in the array if found else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%ld] and ", i / 2);

	if (i >= size)
		printf("[%ld]\n", size - 1);
	else
		printf("[%ld]\n", i);

	return (bin_search(array, i / 2, min_number(i, size - 1), value));
}

/**
 * bin_search -> this function searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: this is the given array
 * @low: the lowest index of the array
 * @high: the highest index of the array
 * @value: this is the search value
 * Return: the index of the value in the array if found else -1
 */

int bin_search(int *array, int low, int high, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

		return (-1);
}

/**
 * min_number -> this function get the minimum number
 * between two numbers
 * @a: first number
 * @b: second number
 * Return: the lower number
 */

int min_number(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
