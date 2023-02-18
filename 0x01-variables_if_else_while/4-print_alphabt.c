#include <stdio.h>
/**
 * main - is the program entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)

	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
		n++;
	}
	return (0);
}
