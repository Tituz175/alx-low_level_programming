#include <stdio.h>
#include "main.h"

/**
 * _strcat -> this function copy a text for the source
 * and add it to the destination.
 * @dest: the destination string.
 * @src: the source string.
 * Return: a pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int len =  0, count;

	while (dest[len])
		len++;

	for (count = 0; src[count] != 0; count++)
	{
		dest[len] = src[count];
		len+=1;
	}
	dest[len] = '\0';
	return (dest);
}
