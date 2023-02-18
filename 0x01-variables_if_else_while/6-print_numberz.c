#include <stdio.h>

/**
 * main - is the program entry point
 *
 * Return: 0 (success)
 *
 */

int main(void)
{

	int num = 0;

	for (; num < 10; num++)
	{
		putchar(48 + num);
	}
	putchar(10);
	return (0);
}
