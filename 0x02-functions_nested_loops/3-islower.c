#include "holberton.h"
/**
* _islower - Return 1 if letter is lowercase.
* @c: char character.
* Return: 1 if lowercase, 0 if not lowercase
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
