#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: is the given number
 *
 * Return: the last digit of a number
 */
int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;
	a = num % 10;

	_putchar(a + '0');
	return (a);
}
