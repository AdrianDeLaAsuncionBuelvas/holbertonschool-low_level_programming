#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: char type Character
 * @s2: char type Character
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
