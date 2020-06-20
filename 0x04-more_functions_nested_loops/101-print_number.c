#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: is an integer
 * Description: prints an integer
 */

void print_number(int n)
{
	int a = n;
	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
