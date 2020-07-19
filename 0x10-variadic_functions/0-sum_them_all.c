#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all- returns the sum of all its parameters
 * @n: number of arguments
 * Return: the add of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum = 0, i;
	
	if (n == 0)
	{
		return (0);
	}
	va_start(arguments, n);
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}