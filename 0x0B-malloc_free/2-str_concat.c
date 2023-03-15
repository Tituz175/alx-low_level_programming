#include "main.h"

/**
 * str_concat -> this function concatenates two given strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: the pointer to the new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len, count, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count])
	{
		count++;
		len++;
	}
	count = 0;
	while (s2[count])
	{
		count++;
		len++;
	}
	s = (char *)malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		s[count] = s1[count];
		count++;
		k++;
	}
	count = 0;
	while (s2[count])
	{
		s[k] = s2[count];
		count++;
		k++;
	}
	k++;
	s[k] = '\0';
	return (s);

}
