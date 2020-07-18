#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *a;

	va_start(arguments, n);
	for (i = 0 ; i < n ; i++)
	{
		a = va_arg(arguments, char *);
		if (a == NULL)
		{
			printf ( "(nill)");
		}
		else
		{
			printf("%s", a);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

	
