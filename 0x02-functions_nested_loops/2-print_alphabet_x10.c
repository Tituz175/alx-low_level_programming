#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - this function prints a-z in lower case on
 * 10 different lines.
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	int ch;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (ch = 97; ch < 123; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
