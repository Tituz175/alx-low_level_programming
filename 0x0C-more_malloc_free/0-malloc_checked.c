#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -> this function allocates memory
 * using malloc.
 * @b: the given number of size.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);
	return pt;
}
