#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *ch;

	i = 1;
	ch = (char *)&i;

	return (*ch);
}
