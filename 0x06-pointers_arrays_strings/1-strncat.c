#include <stdio.h>
#include "main.h"

/**
 * _strncat- function to concatenate two strings and return a new string
 * with n elements of the appended string.
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to include from appended string
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, count = 0;
	char *p;

	while (*(dest + len) != '\0')
		len++;

	while (!(*(src + count) == '\0' || count == n))
	{
		*(dest + len) = *(src + count);
		count++;
		len++;
	}
	*(dest + len) = '\0';
	p = dest;
	return (p);
}
