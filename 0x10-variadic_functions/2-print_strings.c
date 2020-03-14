#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator:const type Character
 * @n: Unsigned type int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);

	if (n != '\0')
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(str, char*);
			if (s == NULL)
				printf("(nil)");

			else
				printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(str);
}
