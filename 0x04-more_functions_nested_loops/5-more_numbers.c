#include <stdio.h>
#include "main.h"

/**
 * more_numbers - this function print 0-14 ten times on
 * seperate lines.
 */

void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int number = 0;
		while (number <= 14)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
			number++;
		}
		_putchar(10);
		count++;
	}
}
