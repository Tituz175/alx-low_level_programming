#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - this function prints for 0-9
 * without 2 & 4
 */

void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		if (num == 50 || num == 52)
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar(10);
}
