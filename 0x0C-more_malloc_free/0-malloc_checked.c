#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: Pointer p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *) malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
