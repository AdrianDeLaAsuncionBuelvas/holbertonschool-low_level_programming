#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Pointer type array
 * @size: int type Integer
 * @cmp: function Pointer type int
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if ((*cmp) != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
