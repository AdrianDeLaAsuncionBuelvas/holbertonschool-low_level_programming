#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character Returns 1 if c is a letter.
 * @c : type Integer
 * Return: 1 if c is a letter, lowercase or uppercase Return: 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
