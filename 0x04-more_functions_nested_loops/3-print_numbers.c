#include <stdio.h>
#include "main.h"

/**
 * print_numbers - this function print numbers from 0 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar(10);
}
