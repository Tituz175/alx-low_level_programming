#include "main.h"
#include <stdio.h>

/**
* binary_to_uint -> this function changes a given number
* in binary to unsigned int.
* @b: this is the given number.
* Return: the unsigned int.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int count;

	result = 0;

	if (!b)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		result <<= 1;

		if (b[count] == '1')
			result += 1;
	}

	return (result);
}
