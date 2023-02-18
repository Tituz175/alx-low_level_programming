#include <stdio.h>
/**
 * main - is the program entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int end = 123;

	while (n < end)

	{
		putchar(n);
		n++;
		if (n == 123)
		{
			n = 65;
			end = 91;
		}
	}
	putchar(10);
	return (0);
}
