#include "holberton.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: int type Integer
 * Return: primeNum.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (primeNum(n, n - 1));
	}

/**
 * primeNum - Count Prime Numbers
 * @n: int type Integer
 * @a: int type Integer
 * Return: primeNum
 */

int primeNum(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (primeNum(n, a - 1));
}
