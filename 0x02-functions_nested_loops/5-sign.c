#include <stdio.h>
#include "main.h"
/**
 * print_sign - this function print and return depending
 * on the value of n
 *
 * @n: this is the given number
 *
 * Return: return -1,0,1 base on the given number
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
