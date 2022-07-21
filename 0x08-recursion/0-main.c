void _puts_recursion(char *);
void _print_rev_recursion(char *s);


#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	/*_puts_recursion("First, solve the problem. Then, write the code");*/
        /*_print_rev_recursion("First, solve the problem. Then, write the code");*/
        int result = _strlen_recursion("code");
        printf("%d\n", result);
	return (0);
}