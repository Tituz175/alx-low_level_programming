#include "main.h"

/**
 * swap_int - this function swaps two variables
 * with another.
 *
 * @a: pointer variable of the first number
 * @b: pointer variable of the second number
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

