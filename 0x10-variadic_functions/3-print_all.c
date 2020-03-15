#include "variadic_functions.h"

/**
 * _print_char - print Character
 * @str: variadic function
 */

void _print_char(va_list str)
{
	char bombon;

	bombon = va_arg(str, int);
	printf("%c", bombon);
}

/**
 * _print_int - print Integer
 * @str: variadic function
 */

void _print_int(va_list str)
{
	printf("%d", va_arg(str, int));
}

/**
 * _print_float - print float
 * @str: variadic function
 */

void _print_float(va_list str)
{
	printf("%f", va_arg(str, double));
}

/**
 * _print_str - print String
 * @str: variadic function
 */

void _print_str(va_list str)
{
	char *s;

	s = va_arg(str, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: const Pointer const
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list str;
	char *s = "";

	opc_t prints[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_str}
	};

	i = 0;
	va_start(str, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == prints[j].opc[0])
			{
				printf("%s", s);
				prints[j].f(str);
				s = ", ";
				break;
			}
			j++;
		}
		i++;

	}


	putchar('\n');
	va_end(str);

}
