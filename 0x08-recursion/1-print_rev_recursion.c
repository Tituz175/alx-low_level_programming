#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - this function print a string from behind recursively.
 *
 * @s: is a character
 *
 * Return: On success 1.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

