#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: char type String.
 * Return: void.
 */

void rev_string(char *s)
{
int a, l, i;
char lent;

for (i = 0; s[i] != '\0'; i++)
{
l = i;
}
for (i--, a = 0; a  < l / 2; i--,  a++)
{
lent = s[a];
s[a] = s[i];
s[i] = lent;

}
}
