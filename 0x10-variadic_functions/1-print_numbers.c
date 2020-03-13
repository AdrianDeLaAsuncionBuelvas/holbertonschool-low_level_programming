#include "variadic_functions.h"

/**
 *
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);

	if (print != '\0')
	{
		for (i = 0; i < n -1; i++)
		{
			if (separator == NULL)
				printf("%d", va_arg(print, int));
		else
		     printf ("%d%s", va_arg(print, unsigned int), separator);
		}
		printf("%d", va_arg(print, int));
	}
	va_end(print);
	putchar('\n');

}
