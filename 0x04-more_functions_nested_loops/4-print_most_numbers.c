#include "main.h"

/**
 * print_most_numbers - function that print number from 0 10 9
 * excluding 2 and 4 on the same line.
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}

