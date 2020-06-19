#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer
 * Description: draws a diagonal line on the terminal
 * Return: doesnt return anything
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b <= n; b++)
			{
				if (b == a)
				{
					_putchar('\\');
				}
				if (b < a)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
