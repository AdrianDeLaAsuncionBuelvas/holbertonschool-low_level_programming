#include "holberton.h"
/**
* _abs - computes the absolute value of an integer.
* @a : int type Integer.
* Return: 0;
*/
int _abs(int a)
{
if (a < 0)
{
return (a * -1);
}
else
{
return (a);
}
}
