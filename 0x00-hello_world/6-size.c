#include <stdio.h>
/**
 * main - is the code entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	float d;
	long int l;
	long long int b;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));

	return (0);
}
