#include "function_pointers.h"

/**
 * array_iterator - execute a function gives as a parameter
 * @array: Pointer int
 * @size: unsigned type int
 * @action: function int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array != NULL)
				(*action)(*(array + i));
		}
	}
}
