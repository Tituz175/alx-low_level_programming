#include "main.h"

/**
 * _strlen - calculate the lenght of a string.
 *
 * @s:the string to be counted.
 *
 * Return: int.
 *
 */

int _strlen(char *s)
{
	int len;

	while (s[len] != 0)
	{
		len++;
	}

	return (len);
}

