#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: char type Character.
 * Return: str.
 */

char *cap_string(char *s)
{
	int i = 0;
	char *a = s;
	char token[] = ",;!?(){}\n\t\" ";
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			for (i = 0; token[i]; i++) {
			if (*(s - 1) == token[i])
			{
				*s = *s - 32;
			}
			}
		}
		s++;
	}
	return (a);
}
