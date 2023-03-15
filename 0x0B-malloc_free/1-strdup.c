#include "main.h"
/**
 * _strdup -> this function makes a copy of a given
 * string to another allocated memory.
 * @str: string to be dupliated
 * Return: a pointer to a newly allocated space.
 */

char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + count) != '\0')
	{
		len++;
		count++;
	}

	s = (char *)malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (count = 0; count < len; count++)
	{
		*(s + count) = *(str + count);
	}
	*(s + len) = '\0';

	return (s);
}
