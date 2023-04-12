#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index in a number to 0.
 * @n: given number
 * @index: position of the bit
 * Return: value of the bit else -1 if there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	position = 1 << index;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~position;
	return (1);
}
