#include <stdio.h>
#include "main.h"

/**
 * print_square - print # in square shape depending on
 * the given value
 * @size: the give value.
 */

void print_square(int size)
{
	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		int x = 0;

		while (x < size)
		{
			int y = 0;

			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
