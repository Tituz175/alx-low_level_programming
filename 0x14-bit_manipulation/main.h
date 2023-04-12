#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned long int _power(unsigned int base_num, unsigned int power_num);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif