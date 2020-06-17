#include "holberton.h"

/**
 * print_sign - return a=1 if + a=0 if 0 and a=-1 if -
 * @n: input number
 * Description: print if the input is +, zero or -
 * Return: return a=1 if + a=0 if 0 and a=-1 if -
 */

int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		_putchar(48);
	}
	else if (n < 0)
	{
		a = -1;
		_putchar('-');
	}
	return (a);
}
