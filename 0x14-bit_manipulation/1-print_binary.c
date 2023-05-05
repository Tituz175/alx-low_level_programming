#include "main.h"
/**
* _power -> this function calculate the power of n
* to a given base.
* @base_num: this is the given base number.
* @power_num: this is the power.
* Return: the calculated number.
*/

unsigned long int _power(unsigned int base_num, unsigned int power_num)
{
	unsigned long int result;
	unsigned int count;

	result = 1;

	for (count = 1; count <= power_num; count++)
	{
		result *= base_num;
	}
	return (result);
}


/**
* print_binary -> this function prints the binary representation
*  of the given number.
* @n: this is the given number.
*/

void print_binary(unsigned long int n)
{
	unsigned long int divisor, checker;
	char stopper;

	stopper = 0;
	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		checker = n & divisor;

		if (checker == divisor)
		{
			stopper = 1;
			_putchar('1');
		}
		else if (stopper == 1 || divisor == 1)
			_putchar('0');

		divisor >>= 1;
	}
}
