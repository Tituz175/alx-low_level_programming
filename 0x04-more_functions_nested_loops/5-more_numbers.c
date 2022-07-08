#include "main.h"

/**
 * more_numbers - function that print number from 0 10 14 on the same line
 * ten times on a new line.
 * Return: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}

