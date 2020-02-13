#include "holberton.h"
/**
*_isupper -  checks for uppercase character.
* @c : int type Integer.
* Return: 1 o 0;
*/

int _isupper(int c)
{

if ((c >= 'A') && (c <= 'Z'))
{
return (1);

}
else
{
return (0);
}
}
