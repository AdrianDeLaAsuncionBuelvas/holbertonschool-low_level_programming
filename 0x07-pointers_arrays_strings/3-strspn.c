#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char type Character.
 * @accept: char type Character.
 * Return: leng
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, a;
	int leng = 0;

	for (i = 0; *(s + i); s++)
	{
		a = leng;
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				leng++;
			}
		}
		if (a == leng)
		{
			return (leng);
		}
	}

	return (leng);
}
