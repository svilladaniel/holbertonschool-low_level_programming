#include "holberton.h"

/**
 * print_last_digit - Return the las digit of a number
 * @n: is the number
 * Description: prints the las digit of a number
 * Return: a is the las digit of a number
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = ((n * -1) % 10);
	}
	else if (n >= 0)
	{
		a = (n % 10);
	}
	_putchar(a + '0');
	return (a);
}
