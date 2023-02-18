#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - is the program entry point
 * this program will always print out a random
 * number for each run time.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative", n);
	} else if (n > 0)
	{
		printf("%d is positive", n);
	} else
	{
		printf("%d is zero", n);
	}
	return (0);
}
