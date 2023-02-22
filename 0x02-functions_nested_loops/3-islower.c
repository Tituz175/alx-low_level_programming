#include <stdio.h>
#include "main.h"
/**
 * _islower - this function check for lower case
 * letter.
 *
 * @c: the given letter to check
 *
 * Return: will return 0 or 1
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
