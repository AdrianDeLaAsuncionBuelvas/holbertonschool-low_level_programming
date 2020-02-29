#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: Pointer char Character.
 * @needle: Pointer char Character
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int a = 1;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; *(haystack + i); i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 1; *(needle + j); j++)
			{
				if (*(haystack + (i + j)) == *(needle + j))
				{
					a++;
				}
			}
		}
		if (j == a)
		{
			return (haystack + i);
		}
		a = 1;
	}
	return ('\0');

}
