#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: char type Character
 * @s2: char type Character
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;

while ((s1[a] != '\0' && s2[b] != '\0') && s1[a] == s2[b])
{
s1++;
s2++;
}

if (s1[a] == s2[b])
{
return (0);
}
else
{
return (s1[a] - s2[b]);
}
}
