#include <stdio.h>
#include "main.h"
/**
 * _isalpha - this function check for upper case
 * letter.
 *
 * @c: the given letter to check
 *
 * Return: will return 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
