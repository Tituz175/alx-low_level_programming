#include "main.h"

/**
 * flip_bits -> this function calculates the number of
 * bits needed to be changed in other to get the desired
 * output
 * @n: first number
 * @m: second number
 * Return: the total number of flip needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip = 0, index;

	unsigned long int xor = n ^ m;
	unsigned long int current_bit;

	for (index = 63; index >= 0; index--)
	{
		current_bit = xor >> index;
		if (current_bit & 1)
			flip++;
	}

	return (flip);
}
