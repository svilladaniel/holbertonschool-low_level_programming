#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator of the strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *a;

	va_start(arguments, n);
	for (i = 0 ; i < n ; i++)
	{
		a = (va_arg(arguments, char *));
		if (a)
		{
			printf("%s", a);
		}
		if (a == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
