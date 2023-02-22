#include <stdio.h>
#include "main.h"
/**
 * _abs - get the absolute of a number.
 *
 * @num: this is the given number.
 *
 * Return: return the absolute of the number.
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
