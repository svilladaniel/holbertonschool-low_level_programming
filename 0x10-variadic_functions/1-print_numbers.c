#include "variadic_functions.h"
#inlude <stdarg.h>



void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	int i;

	va_start (arguments, n);
	for (i = 0 ; i < n ; i++)
	{
		printf
	}
	va_end (arguments);
}
