#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: char type Character
 * Return: a
 */
char *rot13(char *str)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *a = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == rot13[i])
			{
				*str = ROT13[i];
				break;
			}
		}
		str++;
	}
	return (a);
}
