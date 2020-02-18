#include "holberton.h"

/**
 * swap_int -swaps the values of two integers.
 * @a: int type Integer Pointer.
 * @b: int type Integer Pointer.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
