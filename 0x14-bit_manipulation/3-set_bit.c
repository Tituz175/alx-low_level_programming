#include "main.h"

/**
 * set_bit - set the value of a bit at a given index in a number to 1.
 * @n: given number
 * @index: position of the bit
 * Return: value of the bit else -1 if there is an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	position = 1 << index;
	*n = *n | position;
	return (1);
}
