#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string using _putchar.
 *
 * @str: this is the string to be printed.
 *
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != 0)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

