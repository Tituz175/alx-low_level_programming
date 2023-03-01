#include <stdio.h>
#include "main.h"

/**
 * _strcpy -> copy a string
 * @dest: Destination value 
 * @src: Source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*src != '\0')
	{
		dest[count] = *src;
		count++;
		src++;
	}
	dest[count++] = '\0';

	return (dest);
}
