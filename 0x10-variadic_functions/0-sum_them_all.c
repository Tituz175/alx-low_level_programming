#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: the total number of numbers to add.
 * @...: the rest to the numbers.
 * Return: 0 if n <= 0 else the sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count, sum = 0;

	va_start(ap, n);

	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
