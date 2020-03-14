#include "variadic_functions.h"


void _print_char(va_list str)
{
	char bombon;
	bombon = va_arg(str, int);
	printf("%c", bombon);
}

void _print_int(va_list str)
{
	printf("%d", va_arg(str, int));
}

void _print_float(va_list str)
{
	printf("%f", va_arg(str, double));
}

void _print_str(va_list str)
{
	char *s;

	s = va_arg(str, char *);
	if (!s || !(*s))
	{
		printf("%s", "(nil)");
	return;
	}
	printf("%s", s);
	}

/**
 *
 *
 *
 *
 *
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

	while (format[i] != '\0' && format != NULL)
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
