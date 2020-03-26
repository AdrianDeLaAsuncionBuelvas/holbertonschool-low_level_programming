#include "holberton.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: Pointer type char, contains the binary number
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);


	while (*b != '\0')

		if (*b == '0' || *b == '1')
			res = 2 * res + (*b++ - '0');
		else
			return (0);

	return (res);
}
