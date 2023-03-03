#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count, temp, mid;

	if (n % 2 == 0)
		mid = n;
	else
		mid = n - 1;
	for (count = 0; count < mid / 2; count++)
	{
		temp = a[count];
		a[count] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
