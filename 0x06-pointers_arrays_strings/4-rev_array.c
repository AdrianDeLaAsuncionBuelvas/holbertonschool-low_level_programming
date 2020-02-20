#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int type Integer
 * @n: int type integer
 * Return: void
 */


void reverse_array(int *a, int n)
{
int i = 0;
int b;

while (i < (n / 2))
{
b = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = b;

i++;
}
}
