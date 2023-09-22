#ifndef _SEARCH_ALGO_
#define _SEARCH_ALGO_
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


 /*a function that searches for a value in an array of integers using the Linear search algorithm*/
int linear_search(int *array, size_t size, int value);

/*a function that searches for a value in a sorted array of integers using the Binary search algorithm*/
int binary_search(int *array, size_t size, int value);
#endif
