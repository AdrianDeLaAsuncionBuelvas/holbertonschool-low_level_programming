#include "search_algos.h"

/**
 * print_array - print the Text and Value.
 * @arr: is a pointer to the first element of the array to search in.
 * @l: is the bottom of the array.
 * @h: is the top of the array.
 */

void print_array(int *arr, size_t l, size_t h)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i < h; i++)
		printf("%i, ", arr[i]);
	printf("%i\n", arr[i]);
}


/**
 * binary_search - searches for a value in a sorted array of integers \
using the Binary search algorithm.
 * @array:  is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value:  is the value to search for.
 * Return: the index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h, mid = 0;

	if (!array)
		return (-1);

	h = size - 1;
	while (l <= h)
	{
		print_array(array, l, h);
		mid = (l + h) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			h = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
