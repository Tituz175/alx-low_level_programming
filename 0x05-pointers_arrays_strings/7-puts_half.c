#include "main.h"
#include <string.h>

/**
* puts_half -> puts_half function
* @str: str parameter
*/
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = len/2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
