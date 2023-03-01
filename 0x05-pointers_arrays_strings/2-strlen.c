#include <stdio.h>
#include "main.h"

/**
 * _strlen -> this function get the len of a
 * string.
 * @s: this is the given set of char
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
