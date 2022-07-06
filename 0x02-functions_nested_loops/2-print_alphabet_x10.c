#include "main.h"

/**
 * print_alphabet_x10 -> print the lowercase alphabet ten times on a
 * different line
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
