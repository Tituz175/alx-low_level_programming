#include <stdio.h>
#include "main.h"

/**
 * print_line - print line depending on the value given.
 * @n: numbers of line to be print.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
		_putchar(10);
	}
}
