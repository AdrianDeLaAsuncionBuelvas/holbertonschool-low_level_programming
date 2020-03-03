#include "holberton.h"
#include <stdlib.h>

/**
 *  create_array - creates an array of chars
 * @size: unsigned type Integer
 * @c: char type Character
 * Return: *p
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{

		return (0);
	}

	p = malloc(size * sizeof(c));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{

		p[i] = c;
	}

	p[i] = '\0';

	return (p);
}
