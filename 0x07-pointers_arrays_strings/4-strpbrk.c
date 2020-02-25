#include "holberton.h"
#include <stdio.h>

/**
 * -strpbrk - searches a string for any of a set of bytes.
 * @s: Pointer char type Character.
 * @accept: Pointer char type Character
 * Return: accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}


int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
