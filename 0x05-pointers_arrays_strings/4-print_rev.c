#include <stdio.h>
#include "main.h"

/**
 * print_rev -> print the reverse other of a
 * string.
 * @s: the given string.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len++;
	}

	len--;

	while (len >=  0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
