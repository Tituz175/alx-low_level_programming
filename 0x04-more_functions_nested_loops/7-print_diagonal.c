#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - this function print \ depending on the value
 * given.
 * @n: this the number of \ to print.
 */

void print_diagonal(int n)
{
	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		int x = 0;

		while (x < n)
		{
			int y = 0;

			while (y < x)
			{
				_putchar(32);
				y++;
			}
			_putchar(92);
			_putchar(10);
			x++;
		}
	}
}
