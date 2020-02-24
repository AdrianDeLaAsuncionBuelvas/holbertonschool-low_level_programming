#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: char type Character.
 * Return: str.
 */

char *leet(char *str)
{
	char min[] = {'a', 'e', 'o', 't', 'l'};
	char may[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; min[a] != '\0' && may[0]  != '\0'; a++)
		{
			if (str[i] == min[a] || str[i] == may[a])
			{
				str[i] = num[a];
				break;
			}
		}
	}
	return (str);

}
