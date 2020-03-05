#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Integer
 * @max: Integer
 * Return: Pointer n
 */

int *array_range(int min, int max)
{
	int x, i = 0;
	int *n;

	if (min > max)
		return (NULL);

	n = malloc(sizeof(*n) * (max - min + 1));

	if (n == NULL)
		return (NULL);

	for (x = min; x <= max; x++, i++)
		n[i] = x;

	return (n);
}
