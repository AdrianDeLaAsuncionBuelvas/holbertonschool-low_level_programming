#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: int type Integer.
 * @n: int type Integer.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int x;
	for (x = 0; x < n; x++)
	{
	printf("%d", x[a]);
	if (x < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
