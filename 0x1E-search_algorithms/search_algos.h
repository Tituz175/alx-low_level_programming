#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int min_number(int a, int b);
int bin_search(int *array, int low, int high, int value);

#endif
