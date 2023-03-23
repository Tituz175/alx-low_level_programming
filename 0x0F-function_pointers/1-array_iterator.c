#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: pointer to array
 * @size: size of array
 * @action: function to call for each element of array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	for (count = 0; count < size; count++)
		action(array[count]);
}
