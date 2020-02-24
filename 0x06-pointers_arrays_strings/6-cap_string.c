#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: char type Character.
 * Return: str.
 */

char *cap_string(char *str)
{

	char x[] = {32, 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}

		for (b = 0; x[b]; b++)
		{
			if (str[a - 1] == x[b])
			{
				if (str[a] >= 'a' && str[a] <= 'z')
				{
					str[a] = str[a] - 32;
				}
			}
		}
	}
	return (str);
}
