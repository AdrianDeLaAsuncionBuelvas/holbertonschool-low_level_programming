#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: char type Character.
 * Return: lenght.
 */

int is_palindrome(char *s)
{
	int lenght;

	lenght = _strlen_recursion(s) - 1;

	return (lengthPalindrome(s, 0, lenght));

}

/**
 * lengthPalindrome - function for calls the length.
 * @str: Pointer type Character.
 * @a: int type Integer.
 * @b: int typ Integer.
 * Return: lengthPalindrome.
 */

int lengthPalindrome(char *str, int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	if (*(str + a) != *(str + b))
	{
		return (0);
	}
	if (a < b + 1)
	{
		return (lengthPalindrome(str, a + 1, b - 1));
	}
		return (1);

}


/**
 * _strlen_recursion - returns the length of a string.
 * @s: Pointer type Character.
 * Return: 1 + function.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}
	else
	{
		return (1 + _strlen_recursion(s + 1));

	}

}
