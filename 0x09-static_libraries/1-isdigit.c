#include "holberton.h"

/**
 *_isdigit -  checks for uppercase character.
 * @c : int type Integer.
 * Return: 1 o 0.
 */

int _isdigit(int c)
{

	if ((c >= 48) && (c <= 57))
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
