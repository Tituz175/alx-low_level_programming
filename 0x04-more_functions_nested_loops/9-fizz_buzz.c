#include <stdio.h>
#include "main.h"

/**
 * main - this is the program entry point.
 * Return: 0 always.
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0)
		{
			if (num % 5 == 0)
			{
				printf("FizzBuzz ");
				num++;
			}
			else
			{
				printf("Fizz ");
				num++;
			}
		}
		else if (num % 5 == 0)
		{
			if (num % 3 == 0)
			{
				printf("FizzBuzz ");
				num++;
			}
			else
			{
				printf("Buzz ");
				num++;
			}
		}
		else
		{
			printf("%d ", num);
			num++;
		}
	}
	printf("\n");

	return (0);
}
