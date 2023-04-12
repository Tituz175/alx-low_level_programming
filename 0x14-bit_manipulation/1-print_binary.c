#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* print_binary -> this function prints the binary representation
*  of the given number.
* @n: this is the given number.
*/

void print_binary(unsigned long int n)
{
	unsigned long int divisor, checker;
	char stopper, ch;

	stopper = 0;
	divisor = (unsigned long int)pow(2, sizeof(unsigned long int) * 8 -1);

	while (divisor != 0)
	{
		checker = n & divisor;

		if (checker == divisor)
		{
			stopper = 1;
			ch = '1';
		}
		else if(stopper == 1 || divisor == 1)
			ch = '0';

		_putchar(ch);

		divisor >>= 1;
	}
}
