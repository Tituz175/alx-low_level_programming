#include "main.h"
#include <string.h>

/**
* puts_half -> puts_half function
* @str: str parameter
*/
void puts_half(char *str)
{
	int len, start, i;

	len = strlen(str);

	if (len % 2 == 1)
		start = len / 2 + 1;
	else
		start = len / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
