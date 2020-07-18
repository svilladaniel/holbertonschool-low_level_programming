#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by \n
 * @separator: separator between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);
	for (i = 0 ; i < n - 1 ; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(arguments, int));
		}
		else
		{
			printf("%d%s", va_arg(arguments, int), separator);
		}
	}
	i++;
	printf("%d\n", va_arg(arguments, int));
	va_end(arguments);
}
