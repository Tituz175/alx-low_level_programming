#include <stdio.h>
#include "main.h"

/**
 * _isdigit - this function will return 1 if the given value
 * is a number between 0-9 else 0
 * @c: is the given value
 * Return: 0 or 1 depending on the given value
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
