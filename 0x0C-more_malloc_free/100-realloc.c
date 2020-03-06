#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void Pointer int
 * @old_size: unsigned type Integer
 * @new_size: unsigned type Integer
 * Return: void ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	free(ptr);

	ptr = malloc(sizeof(char) * new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
