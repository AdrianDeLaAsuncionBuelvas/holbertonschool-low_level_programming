#include "function_pointers.h"

/**
 * print_name - print name
 * @name: Pointer Char
 * @f: Pointer a function char
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if ((*f) != NULL)
	{
		f(name);
	}
}
