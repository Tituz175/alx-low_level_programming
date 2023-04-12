#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index in a number.
 * @n: given number
 * @index: position of the bit
 * Return: value of the bit else -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	checker = n & divisor;

	if (checker == divisor)
		return (1);
	return(0);
}
