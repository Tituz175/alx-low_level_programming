#include <stdio.h>
#include "main.h"

/**
 * _puts -> this function prints a string
 * to stdout.
 * @str: this is the given string.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
