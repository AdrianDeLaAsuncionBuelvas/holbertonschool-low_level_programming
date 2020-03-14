#ifndef FUNCTION_VARIADIC_H
#define FUNCTION_VARIADIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print
{
	char *opc;
	void (*f)();
} opc_t;


#endif
