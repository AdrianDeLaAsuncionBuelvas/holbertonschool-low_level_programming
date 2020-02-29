#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a : int type Integer.
 * Return: 0;
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n *( -1));
	}
	else
	{
		return (n);
	}
}
