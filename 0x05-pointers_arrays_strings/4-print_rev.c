#include <stdio.h>
#include "main.h"

/**
 * print_rev- prints a string using _putchar in reverse form.
 *
 * @s: this is the string to be printed.
 *
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

