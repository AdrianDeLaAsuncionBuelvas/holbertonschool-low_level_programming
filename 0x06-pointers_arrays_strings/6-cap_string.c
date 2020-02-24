#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: char type Character.
 * Return: str.
 */

char *cap_string(char *str)
{

char x[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{

		for (b = 0; x[b]; b++)
		{
			if (str[a - 1] == x[b])
			{

				if (str[a] >= 'a' && str[a] <= 'z')
				{
					str[a] = str[a] - 'a' + 'A';
				}
			}
		}
	}
	return (str);
}
