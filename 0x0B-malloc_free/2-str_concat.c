#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: Pointer type Character
 * @s2: Pointer type Character
 * Return: srt
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, x;
	int a = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{

	}

		for (j = 0; s2[j]; j++)
		{

		}

		str = malloc(sizeof(*str) * (i + j) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (i + j); x++)
	{
		if (x < i)
		{
			str[x] = s1[x];
		}
		else
		{
			str[x] = s2[a];
			a = a + 1;
		}

	}

	return (str);
}
