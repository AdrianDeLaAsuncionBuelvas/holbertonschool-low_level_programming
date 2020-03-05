#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, x;
	unsigned int a = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j]; j++)
	{
	}

	if (j < n)
	{
		n = j;
	}

	str = malloc(sizeof(*str) * (i + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (i + n); x++)
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

	str[x] = 0;
	return (str);
}
