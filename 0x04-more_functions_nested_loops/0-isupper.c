#include <stdio.h>
#include "main.h"

/**
 * _isupper - this function will return 1 if the letter is
 * uppercase letter
 * @c: is the given number
 * Return: 1 if the letter is uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
