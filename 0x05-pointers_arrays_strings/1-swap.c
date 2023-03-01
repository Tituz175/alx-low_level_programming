#include <stdio.h>
#include "main.h"

/**
 * swap_int -> this function swap the value of
 * two integers.
 * @a: is the first value.
 * @b: is the second value.
 */

void swap_int(int *a, int *b)
{
	int temp_b = *b;

	*b = *a;
	*a = temp_b;

}
