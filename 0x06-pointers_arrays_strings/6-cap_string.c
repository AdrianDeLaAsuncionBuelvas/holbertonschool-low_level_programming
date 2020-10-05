#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: char type Character.
 * Return: str.
 */

char *cap_string(char *s)
{
	int j, a;
	char token[] = ",;!?(){}\n\t\" ";
        for (a = 0; s[a] != '\0'; a++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (j = 0; token[j]; j++) {
			if (s[a - 1] == token[j])
			{
				if (s[a] >= 'a' && s[a] <= 'z')
				{
					s[a] = s[a] - 32;
				}
			}
		}
	}
	return (s);
}
