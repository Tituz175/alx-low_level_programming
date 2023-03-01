#include <stdio.h>
#include "main.h"

/**
 * print_array -> print the values of an array
 * @a: array address
 * @n: length of array
 */

void print_array(int *a, int n)
{
	int count = 0;
	int stop = n - 1;

	while (count < n)
	{
		if (count == stop)
		{
			printf("%d", *(a + count));
			count++;
		}
		else
		{
			printf("%d, ", *(a + count));
			count++;
		}
	}
	putchar('\n');
}
