#ifndef __SEARCH_ALGOS__H_
#define __SEARCH_ALGOS__H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototypes Functions*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
