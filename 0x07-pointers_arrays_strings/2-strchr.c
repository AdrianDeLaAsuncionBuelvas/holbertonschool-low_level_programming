#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: Pointer char type Character.
 * @c: char type Character.
 * Return: s or NULL.
 */

char *_strchr(char *s, char c)
{
	for (s = s; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
