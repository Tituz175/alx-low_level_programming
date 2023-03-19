#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -> this function concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: numbers of chracters in second string.
 * Return: a point to the copy location.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		result[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		result[len++] = s2[index];

	result[len] = '\0';


	return (result);
}
