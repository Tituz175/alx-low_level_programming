#include "main.h"

/**
 * _puts_recursion - this is a recursion function
 *
 * @s: is a character
 *
 * Return: On success 1.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

