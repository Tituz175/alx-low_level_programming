#include <stdio.h>

/**
 * main - the program entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num_1;
	int num_2;

	for (num_1 = 48; num_1 <= 57; num_1++)
	{
		for (num_2 = 49; num_2 <= 57; num_2++)
		{
			if (num_2 > num_1)
			{
				putchar(num_1);
				putchar(num_2);
				if (num_1 != 56 || num_2 != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);

}
