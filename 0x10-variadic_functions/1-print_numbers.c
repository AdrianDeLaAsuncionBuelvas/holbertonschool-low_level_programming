#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: const Pointer type Character
 * @n: type unsigned
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);

	if (n != '\0')
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator == NULL)
				printf("%d", va_arg(print, int));
			else
				printf("%d%s", va_arg(print, int), separator);
		}
		printf("%d", va_arg(print, int));
	}
	putchar('\n');
	va_end(print);
}
