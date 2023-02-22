#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - this function prints a-z in lower case.
 *
 *
 *
 */
void print_alphabet(void)
{
	int ch;
	for (ch = 97; ch < 123; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
